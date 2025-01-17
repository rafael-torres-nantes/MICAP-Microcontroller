#define R 1
#define W 0

unsigned char esc_byte_cntr(unsigned char slave_addr, __bit RW){
    STA = 1;
    SI = 0;
    while(SI == 0);
    if(SMB0STA != 0x08 && SMB0STA != 0x10) return (SMB0STA);

    SMB0STA = (slave_addr & 0xfe) | RW;
    STA = 0;
    SI = 0;
    while(SI==0);
    if(RW == W){
        if(SMB0STA != 0x18) return(SMB0STA);
        }else{
            if(SMB0STA != 0x40) return(SMB0STA);
        }
    return(0);
}

unsigned char esc_byte_dado(unsigned char dado){
    SMB0DAT = dado;
    SI = 0;
    while(SI == 0);
    if(SMB0STA != 0x28) return(SMB0STA);
    return(0);
}

int esc_eeprom(unsigned char slave_addr, unsigned char end, unsigned char dado) {
	unsigned char ret;
	ret = esc_byte_cntr(slave_addr, W);
	if(ret!=0) return(-(int)ret);
	ret=esc_byte_dado(end);
	if(ret!=0) return (-(int)ret);
	ret = esc_byte_dado(dado);
	if(ret!=0) return (-(int)ret);
	STO = 1; // Gera stop
	SI = 0;
	while(STO == 1);
	while(1){
		ret=esc_byte_cntr(slave_addr, W); // Ack pol.
		if(ret==0)break;
		if(ret!=0x20) return(-(int)ret);
		}
	return(0);
}

int le_eeprom(unsigned char slave_addr, unsigned char end){
		 int dado;
		 unsigned char ret;

		 ret = esc_byte_cntr(slave_addr, W);
		 if(ret != 0) return (-(int)ret);
		 ret = esc_byte_dado(end);
		 if(ret != 0) return (-(int)ret);
		 ret = esc_byte_cntr(slave_addr, R);
		 if(ret != 0) return (-(int)ret);

		 AA = 0;
		 SI = 0;
		 while(SI == 0); // Aguarda receber byte da EEPROM
		 if(SMB0STA != 0x58) return (-(int)SMB0STA);
		 dado = (int)SMB0DAT;

		 STO = 1; // Gera Stop
		 SI = 0;

		 while(STO == 1);
		 return(dado);
}