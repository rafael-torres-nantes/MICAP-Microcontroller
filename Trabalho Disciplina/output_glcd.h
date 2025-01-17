#include "stdio.h"
#include "def_pinos.h"
#include "config.c"
#include "fonte.c"

#define NOP4() NOP();NOP();NOP();NOP()
#define NOP8() NOP4();NOP4()
#define NOP12() NOP8();NOP4()

#define CS1 P2_0
#define CS2 P2_1
#define RS P2_2
#define RW P2_3
#define E P2_4
#define RST P2_5
#define DB P4
#define HI 1
#define LO 0
#define ESQ 0
#define DIR 1
#define CO 0
#define DA 1

volatile unsigned char conta_caractere = 0;
volatile __bit terminal_ativo = 0;

unsigned char le_glcd(__bit cd, __bit cs){
	/* Questao 2 - Funcao que le um bit do lcd */

	unsigned char byte;

	RW = HI;
	CS1 = cs;
	CS2 = !cs;
	RS = cd;
	NOP4();

	E = HI;
	NOP8();

	SFRPAGE=CONFIG_PAGE;
	byte = DB;
	SFRPAGE=LEGACY_PAGE;
	NOP4();

	E = LO;
	NOP12();
	return (byte);

}

void esc_glcd(unsigned char byte, __bit cd, __bit cs){
	/* Questao 3 - Escreve um bit no lcd */
	
	while(le_glcd(CO, cs) & 0x80); // Espera enquanto BUSY for 1
	
	RW = LO;
	CS1 = cs;
	CS2 = !cs;
	RS = cd;
	SFRPAGE=CONFIG_PAGE;
	DB = byte;
	SFRPAGE=LEGACY_PAGE;
	NOP4();

	E = HI;
	NOP12();

	E = LO;
	SFRPAGE=CONFIG_PAGE;
	DB = 0xff; // Para que a porta funcione como um entrada de novo sem nenhum problema
	SFRPAGE=LEGACY_PAGE;
	RW = HI; // RW == P2_3 sao usados pelo GLCD e precisa ser setado 1 para ser usado por outra funcao de outro componente
	NOP12();
}

void init_GLCD(){
	/* Questao 4 - Iniciliza o LCD grafico */
	unsigned char cs = LO;

	// Definir condicoes iniciais dos pinos do LCD
	E = LO;
	RST = HI;
	CS1 = HI;
	CS2 = HI;
	SFRPAGE=CONFIG_PAGE;
	DB = 0xff;
	SFRPAGE=LEGACY_PAGE;
	
	while(cs<2){
		// Aguardar o Reset por power up
		while(le_glcd(CO, cs) & 0x10);

		// Ligar o display
		esc_glcd(0x3f, CO, cs);
		
		// zerar os indicadores de posicao (x,y,z)
		esc_glcd(0x40, CO, cs); // Y
		esc_glcd(0xb8, CO, cs); // X
		esc_glcd(0xc0, CO, cs); // Z
		cs++;
	}
}

void conf_Y(unsigned char y, __bit cs){
	/* Questao 5 - Define o endereco Y, correspondente a um pixel do glcd */
	
	y &= 0x3f; // para limitar o valor de Y de 0 ate 63
	esc_glcd(0x40 | y, CO, cs);
}


void conf_pag(unsigned char pag, __bit cs){
	/* Questao 5 - Define o endereco X, correspondente a uma pagina do glcd */

	pag &= 0x07; // Para limitar o valor de X de 0 ate 7
	esc_glcd(0xb8 | pag, CO, cs);
}

void limpa_glcd(__bit cs){
	/* Questao 6 - Apaga metade do GLCD */

	unsigned char x, y;

	for(x=0; x<8; x++){
		conf_pag(x, cs);
		conf_Y(0, cs);
		for(y=0; y<64; y++){
			esc_glcd(0x00, DA, cs);
		}
	}
}

unsigned char caractere_para_ascii(unsigned char cod_ascii){
	/* Converte ASCII para os indices da matriz fonte[96][5] */

	if(cod_ascii >= 32 && cod_ascii <= 127){
		return cod_ascii - 32;
	}else if(cod_ascii == 176){
		return 96;
	}
	return 0;
}

void escreve_caractere(char c, __bit cs){
	/* Escreve um caractere na tela seguido de tres espacos em branco */

	unsigned char linha = caractere_para_ascii(c);

	esc_glcd(fonte[linha][0], DA, cs);
	esc_glcd(fonte[linha][1], DA, cs);
	esc_glcd(fonte[linha][2], DA, cs);
	esc_glcd(fonte[linha][3], DA, cs);
	esc_glcd(fonte[linha][4], DA, cs);
	esc_glcd(0x00, DA, cs);
	esc_glcd(0x00, DA, cs);
	esc_glcd(0x00, DA, cs);
}


void putchar(char c){

	__bit lado;
	WDTCN = 0xa5;

	if(c<=8){
		conf_pag(c-1, ESQ);
		conf_Y(0, ESQ);
		conf_pag(c-1, DIR);
		conf_Y(0, DIR);
		conta_caractere = 0;
		terminal_ativo = 0;

	}else if(c == 9 || terminal_ativo == 1){
		terminal_ativo = 1;
		SBUF0 = c;
		while(TI0==0);
		TI0 = 0;
	
	}else{
		if(conta_caractere<8){
			lado = ESQ;
		}else{
			lado = DIR;
		}

		escreve_caractere(c, lado);
		conta_caractere++;
	}
}

void setup(void){
	SFRPAGE=LEGACY_PAGE;
}

