#include <stdio.h>
#include "output_glcd.h"
#include "delay.h"
// #include "mem_eeprom.h"
#include "mem_spi.h"

#define MENU_MANUAL 100
#define MENU_DIGITAL 101

// PORTA LOGICA
#define MICROONDAS P3_6
#define MOTOR P3_7

// COMANDOS
#define CANCELAR -1

#define TEMPO_PIPOCA 180
#define TEMPO_FRANGO 1000
#define TEMPO_CARNE 1800

// Memoria SPI
#define ENDERECO 0x01

// Buzzer
#define buzzer P3_5

// Leitura Botoes
#define TECS_OPEN 255
volatile unsigned char TECLA = TECS_OPEN;


// Leitura UART
volatile __bit x = 0;
volatile unsigned char tecla;

unsigned char le_tec(void);
void contagemRegressiva(int);
void resetar_tempo(int tecla);
void ligar_buzzer(void);
int definir_tempo_botao(void);


/*******************************
*
*			BUZZER
*
********************************/

void ligar_buzzer(){
	// Ativa o buzzer

	unsigned int ciclos=3;
	unsigned int meio_periodo=500;

	while(ciclos){
		buzzer = 0;
		delay_ms(meio_periodo);
		buzzer = 1;
		delay_ms(meio_periodo);
		ciclos--;
	}

	buzzer = 0;
}



/*******************************
*
*	    Resetar o tempo
*
********************************/

void resetar_tempo(int tecla) {
	if(tecla == CANCELAR) {
		definir_tempo_botao();
	}
}

/*******************************
*
*	  Definir tempo por botao
*
********************************/
int definir_tempo_botao() {
	int tempoReal = 0;
	int m1 = 0;
	int m2 = 0;
	int s1 = 0;
	int s2 = 0;

	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	m1 = le_tec() * 10;
	resetar_tempo(m1);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	m2 = le_tec();
	resetar_tempo(m2);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	s1 = le_tec() * 10;
	resetar_tempo(s1);
	if(s1 > 50)	s1 = 50;

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
	s2 = le_tec();
	resetar_tempo(s2);

	printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
 
    tempoReal = ((m1 + m2) * 60) + (s1 + s2);
	return tempoReal;

}

/*******************************
*
*	Definir tempo por bluetooth
*
********************************/


int definir_tempo_bluetooth() {
	
	int tempoReal = (int)TECLA;

	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

	printf_fast_f("Tempo %d:", tempoReal);

	return tempoReal;

}


/*******************************
*
*	Escolher Input de Dados
*
********************************/

void escolher_entrada() {
	int tecla_menu = 255;
	int tempo_digital;

	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

	printf_fast_f("\x01 Selecione o");
	printf_fast_f("\x02 tipo entrada:");
	printf_fast_f("\x04 a - Manual");
	printf_fast_f("\x05 b - Digital");

	tecla_menu = 0;

	while(tecla_menu != MENU_MANUAL || tecla_menu != MENU_DIGITAL) {
		tecla_menu = le_tec();
	}
	
	printf_fast_f("\x06 Tudo pronto!!");
	
	while(1)
	{

		if(tecla_menu==MENU_MANUAL)
		{
			tempo_digital = definir_tempo_botao();
			contagemRegressiva(tempo_digital);
			break;

		}
		if(tecla_menu==MENU_DIGITAL)
		{
			tempo_digital = definir_tempo_bluetooth();
			contagemRegressiva(tempo_digital);
			break;
		}

	}
	//escolher_entrada();
	 

}


/*******************************
*
*			UART
*
********************************/

// ISR do UART
void uart_ISR() __interrupt 4{
//evento de recebimento salva  o bite
	if(RI0 == 1){
		x = 1;
		tecla = SBUF0;
		RI0 = 0;
	}
}


/*******************************
*
*			LE TECLAS
*
********************************/

unsigned char le_tec(void){

	if(P3_0==0)
		return 0;
	else if(P3_1==0)
		return 1;
	else if(P3_2==0)
		return 2;
	else if(P3_3==0)
		return 3;
	else if(P3_4==0)
		return 4;
	else if(P3_5==0)
		return 5;
	else if(P3_6==0)
		return 6;
	else if(P3_7==0)
		return 7;
	return TECS_OPEN;

}



/*******************************
*
*		GLCD Limpar Tela
*
********************************/

void limpa_tela() {
	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);
}

/*******************************
*
*	    Contagem Regressiva
*
********************************/

//contagem regressiva
void contagemRegressiva(int tempoTotal) {
    
	int minutos, segundos;
    int tempoRestante = tempoTotal;
	
	MOTOR = 0; // RELE ? ao Contr?rio
	MICROONDAS = 1;		
	
	limpa_glcd(ESQ);
	limpa_glcd(DIR);
	conf_pag(0, ESQ);
	conf_pag(0, DIR);

    while (tempoRestante >= 0) {
        minutos = tempoRestante / 60;
        segundos = tempoRestante % 60;
		
		printf_fast_f("\x01 Start Timer..");
	    printf_fast_f("\x02 %02d:%02d", minutos, segundos);
		esc_RAM_SPI(ENDERECO, tempoRestante);
        delay_ms(1000); // Espera 1 segundo
        tempoRestante--;
    }

	MOTOR = 1;
	MICROONDAS = 0;
	
	ligar_buzzer();
	printf_fast_f("\x07 Pronto");
	delay_ms(1000);

}


/*******************************
*
*			Main
*
********************************/

void main(void)
{
	int aux = 0;
	buzzer = 0;

	Init_Device();
	setup();
	
	init_GLCD();
	limpa_tela();
	
	esc_RAM_SPI(ENDERECO, 5);
	aux = le_RAM_SPI(ENDERECO);

	printf_fast_f("\x01 Tempo: %d s",aux);
	
	delay_ms(3000);
	
	contagemRegressiva(aux);


	delay_ms(120000);
		
	/*
    while(1){
		if(TECLA!=TECS_OPEN){
			printf_fast_f("\x02");
        	printf_fast_f("Voce apertou %u",TECLA);
			TECLA = TECS_OPEN;
			break;
		}

    }
	*/


/*
	while(1){
		if(x==1){
			x=0;
			if(tecla=='m'){
				printf_fast_f("\x00 MENU");
				printf_fast_f("\x01 a - Ler valor da P1");
				printf_fast_f("\x02 b - Liga/desliga P0_7");
			}
			if(tecla=='b'){
				P0_7 = !P0_7;
			}
			if(tecla=='a'){
				printf_fast_f("\x04 P1=%u",P1);
			}
		}
	}
*/

}


/*******************************
*
*			Botoes
*
********************************/
/*
void ISR_tmr2 (void) __interrupt 5
{
	static unsigned char tecla_anterior;
	unsigned char tecla_atual;
	tecla_atual = le_tec();
	if(tecla_anterior==TECS_OPEN && tecla_atual!=TECS_OPEN){
		TECLA = tecla_atual;
	}
	tecla_anterior = tecla_atual;
}
*/


