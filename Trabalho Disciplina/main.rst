                                      1 ;--------------------------------------------------------
                                      2 ; File Created by SDCC : free open source ANSI-C Compiler
                                      3 ; Version 3.6.0 #9615 (MINGW64)
                                      4 ;--------------------------------------------------------
                                      5 	.module main
                                      6 	.optsdcc -mmcs51 --model-small
                                      7 	
                                      8 ;--------------------------------------------------------
                                      9 ; Public variables in this module
                                     10 ;--------------------------------------------------------
                                     11 	.globl _esc_RAM_SPI_PARM_2
                                     12 	.globl _fonte
                                     13 	.globl _main
                                     14 	.globl _limpa_tela
                                     15 	.globl _uart_ISR
                                     16 	.globl _escolher_entrada
                                     17 	.globl _definir_tempo_bluetooth
                                     18 	.globl _verifica_RAM_SPI
                                     19 	.globl _le_RAM_SPI
                                     20 	.globl _esc_RAM_SPI
                                     21 	.globl _delay_us
                                     22 	.globl _delay_ms
                                     23 	.globl _setup
                                     24 	.globl _escreve_caractere
                                     25 	.globl _caractere_para_ascii
                                     26 	.globl _limpa_glcd
                                     27 	.globl _conf_pag
                                     28 	.globl _conf_Y
                                     29 	.globl _init_GLCD
                                     30 	.globl _esc_glcd
                                     31 	.globl _le_glcd
                                     32 	.globl _Init_Device
                                     33 	.globl _Interrupts_Init
                                     34 	.globl _Oscillator_Init
                                     35 	.globl _Port_IO_Init
                                     36 	.globl _Voltage_Reference_Init
                                     37 	.globl _DAC_Init
                                     38 	.globl _ADC_Init
                                     39 	.globl _SPI_Init
                                     40 	.globl _SMBus_Init
                                     41 	.globl _UART_Init
                                     42 	.globl _Timer_Init
                                     43 	.globl _Reset_Sources_Init
                                     44 	.globl _printf_fast_f
                                     45 	.globl _CANTEST
                                     46 	.globl _CANCCE
                                     47 	.globl _CANDAR
                                     48 	.globl _CANIF
                                     49 	.globl _CANEIE
                                     50 	.globl _CANSIE
                                     51 	.globl _CANIE
                                     52 	.globl _CANINIT
                                     53 	.globl _SPIEN
                                     54 	.globl _TXBMT
                                     55 	.globl _NSSMD0
                                     56 	.globl _NSSMD1
                                     57 	.globl _RXOVRN
                                     58 	.globl _MODF
                                     59 	.globl _WCOL
                                     60 	.globl _SPIF
                                     61 	.globl _AD2WINT
                                     62 	.globl _AD2CM0
                                     63 	.globl _AD2CM1
                                     64 	.globl _AD2CM2
                                     65 	.globl _AD2BUSY
                                     66 	.globl _AD2INT
                                     67 	.globl _AD2TM
                                     68 	.globl _AD2EN
                                     69 	.globl _AD0LJST
                                     70 	.globl _AD0WINT
                                     71 	.globl _AD0CM0
                                     72 	.globl _AD0CM1
                                     73 	.globl _AD0BUSY
                                     74 	.globl _AD0INT
                                     75 	.globl _AD0TM
                                     76 	.globl _AD0EN
                                     77 	.globl _CCF0
                                     78 	.globl _CCF1
                                     79 	.globl _CCF2
                                     80 	.globl _CCF3
                                     81 	.globl _CCF4
                                     82 	.globl _CCF5
                                     83 	.globl _CR
                                     84 	.globl _CF
                                     85 	.globl _P
                                     86 	.globl _F1
                                     87 	.globl _OV
                                     88 	.globl _RS0
                                     89 	.globl _RS1
                                     90 	.globl _F0
                                     91 	.globl _AC
                                     92 	.globl _CY
                                     93 	.globl _CPRL4
                                     94 	.globl _CT4
                                     95 	.globl _TR4
                                     96 	.globl _EXEN4
                                     97 	.globl _EXF4
                                     98 	.globl _TF4
                                     99 	.globl _CPRL3
                                    100 	.globl _CT3
                                    101 	.globl _TR3
                                    102 	.globl _EXEN3
                                    103 	.globl _EXF3
                                    104 	.globl _TF3
                                    105 	.globl _CPRL2
                                    106 	.globl _CT2
                                    107 	.globl _TR2
                                    108 	.globl _EXEN2
                                    109 	.globl _EXF2
                                    110 	.globl _TF2
                                    111 	.globl _LEC0
                                    112 	.globl _LEC1
                                    113 	.globl _LEC2
                                    114 	.globl _TXOK
                                    115 	.globl _RXOK
                                    116 	.globl _EPASS
                                    117 	.globl _EWARN
                                    118 	.globl _BOFF
                                    119 	.globl _SMBTOE
                                    120 	.globl _SMBFTE
                                    121 	.globl _AA
                                    122 	.globl _SI
                                    123 	.globl _STO
                                    124 	.globl _STA
                                    125 	.globl _ENSMB
                                    126 	.globl _BUSY
                                    127 	.globl _PX0
                                    128 	.globl _PT0
                                    129 	.globl _PX1
                                    130 	.globl _PT1
                                    131 	.globl _PS0
                                    132 	.globl _PT2
                                    133 	.globl _EX0
                                    134 	.globl _ET0
                                    135 	.globl _EX1
                                    136 	.globl _ET1
                                    137 	.globl _ES0
                                    138 	.globl _ET2
                                    139 	.globl _EA
                                    140 	.globl _RI1
                                    141 	.globl _TI1
                                    142 	.globl _RB81
                                    143 	.globl _TB81
                                    144 	.globl _REN1
                                    145 	.globl _MCE1
                                    146 	.globl _S1MODE
                                    147 	.globl _RI0
                                    148 	.globl _TI0
                                    149 	.globl _RB80
                                    150 	.globl _TB80
                                    151 	.globl _REN0
                                    152 	.globl _SM20
                                    153 	.globl _SM10
                                    154 	.globl _SM00
                                    155 	.globl _CP2HYN0
                                    156 	.globl _CP2HYN1
                                    157 	.globl _CP2HYP0
                                    158 	.globl _CP2HYP1
                                    159 	.globl _CP2FIF
                                    160 	.globl _CP2RIF
                                    161 	.globl _CP2OUT
                                    162 	.globl _CP2EN
                                    163 	.globl _CP1HYN0
                                    164 	.globl _CP1HYN1
                                    165 	.globl _CP1HYP0
                                    166 	.globl _CP1HYP1
                                    167 	.globl _CP1FIF
                                    168 	.globl _CP1RIF
                                    169 	.globl _CP1OUT
                                    170 	.globl _CP1EN
                                    171 	.globl _CP0HYN0
                                    172 	.globl _CP0HYN1
                                    173 	.globl _CP0HYP0
                                    174 	.globl _CP0HYP1
                                    175 	.globl _CP0FIF
                                    176 	.globl _CP0RIF
                                    177 	.globl _CP0OUT
                                    178 	.globl _CP0EN
                                    179 	.globl _IT0
                                    180 	.globl _IE0
                                    181 	.globl _IT1
                                    182 	.globl _IE1
                                    183 	.globl _TR0
                                    184 	.globl _TF0
                                    185 	.globl _TR1
                                    186 	.globl _TF1
                                    187 	.globl _P7_7
                                    188 	.globl _P7_6
                                    189 	.globl _P7_5
                                    190 	.globl _P7_4
                                    191 	.globl _P7_3
                                    192 	.globl _P7_2
                                    193 	.globl _P7_1
                                    194 	.globl _P7_0
                                    195 	.globl _P6_7
                                    196 	.globl _P6_6
                                    197 	.globl _P6_5
                                    198 	.globl _P6_4
                                    199 	.globl _P6_3
                                    200 	.globl _P6_2
                                    201 	.globl _P6_1
                                    202 	.globl _P6_0
                                    203 	.globl _P5_7
                                    204 	.globl _P5_6
                                    205 	.globl _P5_5
                                    206 	.globl _P5_4
                                    207 	.globl _P5_3
                                    208 	.globl _P5_2
                                    209 	.globl _P5_1
                                    210 	.globl _P5_0
                                    211 	.globl _P4_7
                                    212 	.globl _P4_6
                                    213 	.globl _P4_5
                                    214 	.globl _P4_4
                                    215 	.globl _P4_3
                                    216 	.globl _P4_2
                                    217 	.globl _P4_1
                                    218 	.globl _P4_0
                                    219 	.globl _P3_7
                                    220 	.globl _P3_6
                                    221 	.globl _P3_5
                                    222 	.globl _P3_4
                                    223 	.globl _P3_3
                                    224 	.globl _P3_2
                                    225 	.globl _P3_1
                                    226 	.globl _P3_0
                                    227 	.globl _P2_7
                                    228 	.globl _P2_6
                                    229 	.globl _P2_5
                                    230 	.globl _P2_4
                                    231 	.globl _P2_3
                                    232 	.globl _P2_2
                                    233 	.globl _P2_1
                                    234 	.globl _P2_0
                                    235 	.globl _P1_7
                                    236 	.globl _P1_6
                                    237 	.globl _P1_5
                                    238 	.globl _P1_4
                                    239 	.globl _P1_3
                                    240 	.globl _P1_2
                                    241 	.globl _P1_1
                                    242 	.globl _P1_0
                                    243 	.globl _P0_7
                                    244 	.globl _P0_6
                                    245 	.globl _P0_5
                                    246 	.globl _P0_4
                                    247 	.globl _P0_3
                                    248 	.globl _P0_2
                                    249 	.globl _P0_1
                                    250 	.globl _P0_0
                                    251 	.globl __XPAGE
                                    252 	.globl _DP
                                    253 	.globl _ADC0
                                    254 	.globl _ADC0LT
                                    255 	.globl _ADC0GT
                                    256 	.globl _TMR4
                                    257 	.globl _TMR3
                                    258 	.globl _TMR2
                                    259 	.globl _RCAP4
                                    260 	.globl _RCAP3
                                    261 	.globl _RCAP2
                                    262 	.globl _DAC1
                                    263 	.globl _DAC0
                                    264 	.globl _CAN0DAT
                                    265 	.globl _PCA0CP5
                                    266 	.globl _PCA0CP4
                                    267 	.globl _PCA0CP3
                                    268 	.globl _PCA0CP2
                                    269 	.globl _PCA0CP1
                                    270 	.globl _PCA0CP0
                                    271 	.globl _PCA0
                                    272 	.globl _WDTCN
                                    273 	.globl _PCA0CPH1
                                    274 	.globl _PCA0CPL1
                                    275 	.globl _PCA0CPH0
                                    276 	.globl _PCA0CPL0
                                    277 	.globl _PCA0H
                                    278 	.globl _PCA0L
                                    279 	.globl _P7
                                    280 	.globl _CAN0CN
                                    281 	.globl _SPI0CN
                                    282 	.globl _EIP2
                                    283 	.globl _EIP1
                                    284 	.globl _B
                                    285 	.globl _RSTSRC
                                    286 	.globl _PCA0CPH4
                                    287 	.globl _PCA0CPL4
                                    288 	.globl _PCA0CPH3
                                    289 	.globl _PCA0CPL3
                                    290 	.globl _PCA0CPH2
                                    291 	.globl _PCA0CPL2
                                    292 	.globl _P6
                                    293 	.globl _ADC2CN
                                    294 	.globl _ADC0CN
                                    295 	.globl _EIE2
                                    296 	.globl _EIE1
                                    297 	.globl _XBR3
                                    298 	.globl _XBR2
                                    299 	.globl _XBR1
                                    300 	.globl _PCA0CPH5
                                    301 	.globl _XBR0
                                    302 	.globl _PCA0CPL5
                                    303 	.globl _ACC
                                    304 	.globl _PCA0CPM5
                                    305 	.globl _PCA0CPM4
                                    306 	.globl _PCA0CPM3
                                    307 	.globl _PCA0CPM2
                                    308 	.globl _CAN0TST
                                    309 	.globl _PCA0CPM1
                                    310 	.globl _CAN0ADR
                                    311 	.globl _PCA0CPM0
                                    312 	.globl _CAN0DATH
                                    313 	.globl _PCA0MD
                                    314 	.globl _P5
                                    315 	.globl _CAN0DATL
                                    316 	.globl _PCA0CN
                                    317 	.globl _HVA0CN
                                    318 	.globl _DAC1CN
                                    319 	.globl _DAC0CN
                                    320 	.globl _DAC1H
                                    321 	.globl _DAC0H
                                    322 	.globl _DAC1L
                                    323 	.globl _DAC0L
                                    324 	.globl _REF0CN
                                    325 	.globl _PSW
                                    326 	.globl _SMB0CR
                                    327 	.globl _TMR4H
                                    328 	.globl _TMR3H
                                    329 	.globl _TMR2H
                                    330 	.globl _TMR4L
                                    331 	.globl _TMR3L
                                    332 	.globl _TMR2L
                                    333 	.globl _RCAP4H
                                    334 	.globl _RCAP3H
                                    335 	.globl _RCAP2H
                                    336 	.globl _RCAP4L
                                    337 	.globl _RCAP3L
                                    338 	.globl _RCAP2L
                                    339 	.globl _TMR4CF
                                    340 	.globl _TMR3CF
                                    341 	.globl _TMR2CF
                                    342 	.globl _P4
                                    343 	.globl _TMR4CN
                                    344 	.globl _TMR3CN
                                    345 	.globl _TMR2CN
                                    346 	.globl _ADC0LTH
                                    347 	.globl _ADC2LT
                                    348 	.globl _ADC0LTL
                                    349 	.globl _ADC0GTH
                                    350 	.globl _ADC2GT
                                    351 	.globl _ADC0GTL
                                    352 	.globl _SMB0ADR
                                    353 	.globl _SMB0DAT
                                    354 	.globl _SMB0STA
                                    355 	.globl _CAN0STA
                                    356 	.globl _SMB0CN
                                    357 	.globl _ADC0H
                                    358 	.globl _ADC2
                                    359 	.globl _ADC0L
                                    360 	.globl _ADC2CF
                                    361 	.globl _ADC0CF
                                    362 	.globl _AMX2SL
                                    363 	.globl _AMX0SL
                                    364 	.globl _AMX0CF
                                    365 	.globl _AMX0PRT
                                    366 	.globl _AMX2CF
                                    367 	.globl _SADEN0
                                    368 	.globl _IP
                                    369 	.globl _FLACL
                                    370 	.globl _FLSCL
                                    371 	.globl _P3
                                    372 	.globl _P3MDIN
                                    373 	.globl _P2MDIN
                                    374 	.globl _P1MDIN
                                    375 	.globl _SADDR1
                                    376 	.globl _SADDR0
                                    377 	.globl _IE
                                    378 	.globl _P3MDOUT
                                    379 	.globl _P2MDOUT
                                    380 	.globl _P1MDOUT
                                    381 	.globl _P0MDOUT
                                    382 	.globl _EMI0CF
                                    383 	.globl _EMI0CN
                                    384 	.globl _EMI0TC
                                    385 	.globl _P2
                                    386 	.globl _P7MDOUT
                                    387 	.globl _P6MDOUT
                                    388 	.globl _P5MDOUT
                                    389 	.globl _SPI0CKR
                                    390 	.globl _P4MDOUT
                                    391 	.globl _SPI0DAT
                                    392 	.globl _SPI0CFG
                                    393 	.globl _SBUF1
                                    394 	.globl _SBUF0
                                    395 	.globl _SCON1
                                    396 	.globl _SCON0
                                    397 	.globl _CLKSEL
                                    398 	.globl _SFRPGCN
                                    399 	.globl _SSTA0
                                    400 	.globl _P1
                                    401 	.globl _PSCTL
                                    402 	.globl _CKCON
                                    403 	.globl _TH1
                                    404 	.globl _OSCXCN
                                    405 	.globl _TH0
                                    406 	.globl _OSCICL
                                    407 	.globl _TL1
                                    408 	.globl _OSCICN
                                    409 	.globl _TL0
                                    410 	.globl _CPT2MD
                                    411 	.globl _CPT1MD
                                    412 	.globl _CPT0MD
                                    413 	.globl _TMOD
                                    414 	.globl _CPT2CN
                                    415 	.globl _CPT1CN
                                    416 	.globl _CPT0CN
                                    417 	.globl _TCON
                                    418 	.globl _PCON
                                    419 	.globl _SFRLAST
                                    420 	.globl _SFRNEXT
                                    421 	.globl _SFRPAGE
                                    422 	.globl _DPH
                                    423 	.globl _DPL
                                    424 	.globl _SP
                                    425 	.globl _P0
                                    426 	.globl _x
                                    427 	.globl _escreve_caractere_PARM_2
                                    428 	.globl _limpa_glcd_PARM_1
                                    429 	.globl _conf_pag_PARM_2
                                    430 	.globl _conf_Y_PARM_2
                                    431 	.globl _esc_glcd_PARM_3
                                    432 	.globl _esc_glcd_PARM_2
                                    433 	.globl _le_glcd_PARM_2
                                    434 	.globl _le_glcd_PARM_1
                                    435 	.globl _terminal_ativo
                                    436 	.globl _tecla
                                    437 	.globl _TECLA
                                    438 	.globl _end_fim_ram
                                    439 	.globl _conta_caractere
                                    440 	.globl _putchar
                                    441 	.globl _ligar_buzzer
                                    442 	.globl _resetar_tempo
                                    443 	.globl _definir_tempo_botao
                                    444 	.globl _le_tec
                                    445 	.globl _contagemRegressiva
                                    446 ;--------------------------------------------------------
                                    447 ; special function registers
                                    448 ;--------------------------------------------------------
                                    449 	.area RSEG    (ABS,DATA)
      000000                        450 	.org 0x0000
                           000080   451 G$P0$0$0 == 0x0080
                           000080   452 _P0	=	0x0080
                           000081   453 G$SP$0$0 == 0x0081
                           000081   454 _SP	=	0x0081
                           000082   455 G$DPL$0$0 == 0x0082
                           000082   456 _DPL	=	0x0082
                           000083   457 G$DPH$0$0 == 0x0083
                           000083   458 _DPH	=	0x0083
                           000084   459 G$SFRPAGE$0$0 == 0x0084
                           000084   460 _SFRPAGE	=	0x0084
                           000085   461 G$SFRNEXT$0$0 == 0x0085
                           000085   462 _SFRNEXT	=	0x0085
                           000086   463 G$SFRLAST$0$0 == 0x0086
                           000086   464 _SFRLAST	=	0x0086
                           000087   465 G$PCON$0$0 == 0x0087
                           000087   466 _PCON	=	0x0087
                           000088   467 G$TCON$0$0 == 0x0088
                           000088   468 _TCON	=	0x0088
                           000088   469 G$CPT0CN$0$0 == 0x0088
                           000088   470 _CPT0CN	=	0x0088
                           000088   471 G$CPT1CN$0$0 == 0x0088
                           000088   472 _CPT1CN	=	0x0088
                           000088   473 G$CPT2CN$0$0 == 0x0088
                           000088   474 _CPT2CN	=	0x0088
                           000089   475 G$TMOD$0$0 == 0x0089
                           000089   476 _TMOD	=	0x0089
                           000089   477 G$CPT0MD$0$0 == 0x0089
                           000089   478 _CPT0MD	=	0x0089
                           000089   479 G$CPT1MD$0$0 == 0x0089
                           000089   480 _CPT1MD	=	0x0089
                           000089   481 G$CPT2MD$0$0 == 0x0089
                           000089   482 _CPT2MD	=	0x0089
                           00008A   483 G$TL0$0$0 == 0x008a
                           00008A   484 _TL0	=	0x008a
                           00008A   485 G$OSCICN$0$0 == 0x008a
                           00008A   486 _OSCICN	=	0x008a
                           00008B   487 G$TL1$0$0 == 0x008b
                           00008B   488 _TL1	=	0x008b
                           00008B   489 G$OSCICL$0$0 == 0x008b
                           00008B   490 _OSCICL	=	0x008b
                           00008C   491 G$TH0$0$0 == 0x008c
                           00008C   492 _TH0	=	0x008c
                           00008C   493 G$OSCXCN$0$0 == 0x008c
                           00008C   494 _OSCXCN	=	0x008c
                           00008D   495 G$TH1$0$0 == 0x008d
                           00008D   496 _TH1	=	0x008d
                           00008E   497 G$CKCON$0$0 == 0x008e
                           00008E   498 _CKCON	=	0x008e
                           00008F   499 G$PSCTL$0$0 == 0x008f
                           00008F   500 _PSCTL	=	0x008f
                           000090   501 G$P1$0$0 == 0x0090
                           000090   502 _P1	=	0x0090
                           000091   503 G$SSTA0$0$0 == 0x0091
                           000091   504 _SSTA0	=	0x0091
                           000096   505 G$SFRPGCN$0$0 == 0x0096
                           000096   506 _SFRPGCN	=	0x0096
                           000097   507 G$CLKSEL$0$0 == 0x0097
                           000097   508 _CLKSEL	=	0x0097
                           000098   509 G$SCON0$0$0 == 0x0098
                           000098   510 _SCON0	=	0x0098
                           000098   511 G$SCON1$0$0 == 0x0098
                           000098   512 _SCON1	=	0x0098
                           000099   513 G$SBUF0$0$0 == 0x0099
                           000099   514 _SBUF0	=	0x0099
                           000099   515 G$SBUF1$0$0 == 0x0099
                           000099   516 _SBUF1	=	0x0099
                           00009A   517 G$SPI0CFG$0$0 == 0x009a
                           00009A   518 _SPI0CFG	=	0x009a
                           00009B   519 G$SPI0DAT$0$0 == 0x009b
                           00009B   520 _SPI0DAT	=	0x009b
                           00009C   521 G$P4MDOUT$0$0 == 0x009c
                           00009C   522 _P4MDOUT	=	0x009c
                           00009D   523 G$SPI0CKR$0$0 == 0x009d
                           00009D   524 _SPI0CKR	=	0x009d
                           00009D   525 G$P5MDOUT$0$0 == 0x009d
                           00009D   526 _P5MDOUT	=	0x009d
                           00009E   527 G$P6MDOUT$0$0 == 0x009e
                           00009E   528 _P6MDOUT	=	0x009e
                           00009F   529 G$P7MDOUT$0$0 == 0x009f
                           00009F   530 _P7MDOUT	=	0x009f
                           0000A0   531 G$P2$0$0 == 0x00a0
                           0000A0   532 _P2	=	0x00a0
                           0000A1   533 G$EMI0TC$0$0 == 0x00a1
                           0000A1   534 _EMI0TC	=	0x00a1
                           0000A2   535 G$EMI0CN$0$0 == 0x00a2
                           0000A2   536 _EMI0CN	=	0x00a2
                           0000A3   537 G$EMI0CF$0$0 == 0x00a3
                           0000A3   538 _EMI0CF	=	0x00a3
                           0000A4   539 G$P0MDOUT$0$0 == 0x00a4
                           0000A4   540 _P0MDOUT	=	0x00a4
                           0000A5   541 G$P1MDOUT$0$0 == 0x00a5
                           0000A5   542 _P1MDOUT	=	0x00a5
                           0000A6   543 G$P2MDOUT$0$0 == 0x00a6
                           0000A6   544 _P2MDOUT	=	0x00a6
                           0000A7   545 G$P3MDOUT$0$0 == 0x00a7
                           0000A7   546 _P3MDOUT	=	0x00a7
                           0000A8   547 G$IE$0$0 == 0x00a8
                           0000A8   548 _IE	=	0x00a8
                           0000A9   549 G$SADDR0$0$0 == 0x00a9
                           0000A9   550 _SADDR0	=	0x00a9
                           0000A9   551 G$SADDR1$0$0 == 0x00a9
                           0000A9   552 _SADDR1	=	0x00a9
                           0000AD   553 G$P1MDIN$0$0 == 0x00ad
                           0000AD   554 _P1MDIN	=	0x00ad
                           0000AE   555 G$P2MDIN$0$0 == 0x00ae
                           0000AE   556 _P2MDIN	=	0x00ae
                           0000AF   557 G$P3MDIN$0$0 == 0x00af
                           0000AF   558 _P3MDIN	=	0x00af
                           0000B0   559 G$P3$0$0 == 0x00b0
                           0000B0   560 _P3	=	0x00b0
                           0000B7   561 G$FLSCL$0$0 == 0x00b7
                           0000B7   562 _FLSCL	=	0x00b7
                           0000B7   563 G$FLACL$0$0 == 0x00b7
                           0000B7   564 _FLACL	=	0x00b7
                           0000B8   565 G$IP$0$0 == 0x00b8
                           0000B8   566 _IP	=	0x00b8
                           0000B9   567 G$SADEN0$0$0 == 0x00b9
                           0000B9   568 _SADEN0	=	0x00b9
                           0000BA   569 G$AMX2CF$0$0 == 0x00ba
                           0000BA   570 _AMX2CF	=	0x00ba
                           0000BD   571 G$AMX0PRT$0$0 == 0x00bd
                           0000BD   572 _AMX0PRT	=	0x00bd
                           0000BA   573 G$AMX0CF$0$0 == 0x00ba
                           0000BA   574 _AMX0CF	=	0x00ba
                           0000BB   575 G$AMX0SL$0$0 == 0x00bb
                           0000BB   576 _AMX0SL	=	0x00bb
                           0000BB   577 G$AMX2SL$0$0 == 0x00bb
                           0000BB   578 _AMX2SL	=	0x00bb
                           0000BC   579 G$ADC0CF$0$0 == 0x00bc
                           0000BC   580 _ADC0CF	=	0x00bc
                           0000BC   581 G$ADC2CF$0$0 == 0x00bc
                           0000BC   582 _ADC2CF	=	0x00bc
                           0000BE   583 G$ADC0L$0$0 == 0x00be
                           0000BE   584 _ADC0L	=	0x00be
                           0000BE   585 G$ADC2$0$0 == 0x00be
                           0000BE   586 _ADC2	=	0x00be
                           0000BF   587 G$ADC0H$0$0 == 0x00bf
                           0000BF   588 _ADC0H	=	0x00bf
                           0000C0   589 G$SMB0CN$0$0 == 0x00c0
                           0000C0   590 _SMB0CN	=	0x00c0
                           0000C0   591 G$CAN0STA$0$0 == 0x00c0
                           0000C0   592 _CAN0STA	=	0x00c0
                           0000C1   593 G$SMB0STA$0$0 == 0x00c1
                           0000C1   594 _SMB0STA	=	0x00c1
                           0000C2   595 G$SMB0DAT$0$0 == 0x00c2
                           0000C2   596 _SMB0DAT	=	0x00c2
                           0000C3   597 G$SMB0ADR$0$0 == 0x00c3
                           0000C3   598 _SMB0ADR	=	0x00c3
                           0000C4   599 G$ADC0GTL$0$0 == 0x00c4
                           0000C4   600 _ADC0GTL	=	0x00c4
                           0000C4   601 G$ADC2GT$0$0 == 0x00c4
                           0000C4   602 _ADC2GT	=	0x00c4
                           0000C5   603 G$ADC0GTH$0$0 == 0x00c5
                           0000C5   604 _ADC0GTH	=	0x00c5
                           0000C6   605 G$ADC0LTL$0$0 == 0x00c6
                           0000C6   606 _ADC0LTL	=	0x00c6
                           0000C6   607 G$ADC2LT$0$0 == 0x00c6
                           0000C6   608 _ADC2LT	=	0x00c6
                           0000C7   609 G$ADC0LTH$0$0 == 0x00c7
                           0000C7   610 _ADC0LTH	=	0x00c7
                           0000C8   611 G$TMR2CN$0$0 == 0x00c8
                           0000C8   612 _TMR2CN	=	0x00c8
                           0000C8   613 G$TMR3CN$0$0 == 0x00c8
                           0000C8   614 _TMR3CN	=	0x00c8
                           0000C8   615 G$TMR4CN$0$0 == 0x00c8
                           0000C8   616 _TMR4CN	=	0x00c8
                           0000C8   617 G$P4$0$0 == 0x00c8
                           0000C8   618 _P4	=	0x00c8
                           0000C9   619 G$TMR2CF$0$0 == 0x00c9
                           0000C9   620 _TMR2CF	=	0x00c9
                           0000C9   621 G$TMR3CF$0$0 == 0x00c9
                           0000C9   622 _TMR3CF	=	0x00c9
                           0000C9   623 G$TMR4CF$0$0 == 0x00c9
                           0000C9   624 _TMR4CF	=	0x00c9
                           0000CA   625 G$RCAP2L$0$0 == 0x00ca
                           0000CA   626 _RCAP2L	=	0x00ca
                           0000CA   627 G$RCAP3L$0$0 == 0x00ca
                           0000CA   628 _RCAP3L	=	0x00ca
                           0000CA   629 G$RCAP4L$0$0 == 0x00ca
                           0000CA   630 _RCAP4L	=	0x00ca
                           0000CB   631 G$RCAP2H$0$0 == 0x00cb
                           0000CB   632 _RCAP2H	=	0x00cb
                           0000CB   633 G$RCAP3H$0$0 == 0x00cb
                           0000CB   634 _RCAP3H	=	0x00cb
                           0000CB   635 G$RCAP4H$0$0 == 0x00cb
                           0000CB   636 _RCAP4H	=	0x00cb
                           0000CC   637 G$TMR2L$0$0 == 0x00cc
                           0000CC   638 _TMR2L	=	0x00cc
                           0000CC   639 G$TMR3L$0$0 == 0x00cc
                           0000CC   640 _TMR3L	=	0x00cc
                           0000CC   641 G$TMR4L$0$0 == 0x00cc
                           0000CC   642 _TMR4L	=	0x00cc
                           0000CD   643 G$TMR2H$0$0 == 0x00cd
                           0000CD   644 _TMR2H	=	0x00cd
                           0000CD   645 G$TMR3H$0$0 == 0x00cd
                           0000CD   646 _TMR3H	=	0x00cd
                           0000CD   647 G$TMR4H$0$0 == 0x00cd
                           0000CD   648 _TMR4H	=	0x00cd
                           0000CF   649 G$SMB0CR$0$0 == 0x00cf
                           0000CF   650 _SMB0CR	=	0x00cf
                           0000D0   651 G$PSW$0$0 == 0x00d0
                           0000D0   652 _PSW	=	0x00d0
                           0000D1   653 G$REF0CN$0$0 == 0x00d1
                           0000D1   654 _REF0CN	=	0x00d1
                           0000D2   655 G$DAC0L$0$0 == 0x00d2
                           0000D2   656 _DAC0L	=	0x00d2
                           0000D2   657 G$DAC1L$0$0 == 0x00d2
                           0000D2   658 _DAC1L	=	0x00d2
                           0000D3   659 G$DAC0H$0$0 == 0x00d3
                           0000D3   660 _DAC0H	=	0x00d3
                           0000D3   661 G$DAC1H$0$0 == 0x00d3
                           0000D3   662 _DAC1H	=	0x00d3
                           0000D4   663 G$DAC0CN$0$0 == 0x00d4
                           0000D4   664 _DAC0CN	=	0x00d4
                           0000D4   665 G$DAC1CN$0$0 == 0x00d4
                           0000D4   666 _DAC1CN	=	0x00d4
                           0000D6   667 G$HVA0CN$0$0 == 0x00d6
                           0000D6   668 _HVA0CN	=	0x00d6
                           0000D8   669 G$PCA0CN$0$0 == 0x00d8
                           0000D8   670 _PCA0CN	=	0x00d8
                           0000D8   671 G$CAN0DATL$0$0 == 0x00d8
                           0000D8   672 _CAN0DATL	=	0x00d8
                           0000D8   673 G$P5$0$0 == 0x00d8
                           0000D8   674 _P5	=	0x00d8
                           0000D9   675 G$PCA0MD$0$0 == 0x00d9
                           0000D9   676 _PCA0MD	=	0x00d9
                           0000D9   677 G$CAN0DATH$0$0 == 0x00d9
                           0000D9   678 _CAN0DATH	=	0x00d9
                           0000DA   679 G$PCA0CPM0$0$0 == 0x00da
                           0000DA   680 _PCA0CPM0	=	0x00da
                           0000DA   681 G$CAN0ADR$0$0 == 0x00da
                           0000DA   682 _CAN0ADR	=	0x00da
                           0000DB   683 G$PCA0CPM1$0$0 == 0x00db
                           0000DB   684 _PCA0CPM1	=	0x00db
                           0000DB   685 G$CAN0TST$0$0 == 0x00db
                           0000DB   686 _CAN0TST	=	0x00db
                           0000DC   687 G$PCA0CPM2$0$0 == 0x00dc
                           0000DC   688 _PCA0CPM2	=	0x00dc
                           0000DD   689 G$PCA0CPM3$0$0 == 0x00dd
                           0000DD   690 _PCA0CPM3	=	0x00dd
                           0000DE   691 G$PCA0CPM4$0$0 == 0x00de
                           0000DE   692 _PCA0CPM4	=	0x00de
                           0000DF   693 G$PCA0CPM5$0$0 == 0x00df
                           0000DF   694 _PCA0CPM5	=	0x00df
                           0000E0   695 G$ACC$0$0 == 0x00e0
                           0000E0   696 _ACC	=	0x00e0
                           0000E1   697 G$PCA0CPL5$0$0 == 0x00e1
                           0000E1   698 _PCA0CPL5	=	0x00e1
                           0000E1   699 G$XBR0$0$0 == 0x00e1
                           0000E1   700 _XBR0	=	0x00e1
                           0000E2   701 G$PCA0CPH5$0$0 == 0x00e2
                           0000E2   702 _PCA0CPH5	=	0x00e2
                           0000E2   703 G$XBR1$0$0 == 0x00e2
                           0000E2   704 _XBR1	=	0x00e2
                           0000E3   705 G$XBR2$0$0 == 0x00e3
                           0000E3   706 _XBR2	=	0x00e3
                           0000E4   707 G$XBR3$0$0 == 0x00e4
                           0000E4   708 _XBR3	=	0x00e4
                           0000E6   709 G$EIE1$0$0 == 0x00e6
                           0000E6   710 _EIE1	=	0x00e6
                           0000E7   711 G$EIE2$0$0 == 0x00e7
                           0000E7   712 _EIE2	=	0x00e7
                           0000E8   713 G$ADC0CN$0$0 == 0x00e8
                           0000E8   714 _ADC0CN	=	0x00e8
                           0000E8   715 G$ADC2CN$0$0 == 0x00e8
                           0000E8   716 _ADC2CN	=	0x00e8
                           0000E8   717 G$P6$0$0 == 0x00e8
                           0000E8   718 _P6	=	0x00e8
                           0000E9   719 G$PCA0CPL2$0$0 == 0x00e9
                           0000E9   720 _PCA0CPL2	=	0x00e9
                           0000EA   721 G$PCA0CPH2$0$0 == 0x00ea
                           0000EA   722 _PCA0CPH2	=	0x00ea
                           0000EB   723 G$PCA0CPL3$0$0 == 0x00eb
                           0000EB   724 _PCA0CPL3	=	0x00eb
                           0000EC   725 G$PCA0CPH3$0$0 == 0x00ec
                           0000EC   726 _PCA0CPH3	=	0x00ec
                           0000ED   727 G$PCA0CPL4$0$0 == 0x00ed
                           0000ED   728 _PCA0CPL4	=	0x00ed
                           0000EE   729 G$PCA0CPH4$0$0 == 0x00ee
                           0000EE   730 _PCA0CPH4	=	0x00ee
                           0000EF   731 G$RSTSRC$0$0 == 0x00ef
                           0000EF   732 _RSTSRC	=	0x00ef
                           0000F0   733 G$B$0$0 == 0x00f0
                           0000F0   734 _B	=	0x00f0
                           0000F6   735 G$EIP1$0$0 == 0x00f6
                           0000F6   736 _EIP1	=	0x00f6
                           0000F7   737 G$EIP2$0$0 == 0x00f7
                           0000F7   738 _EIP2	=	0x00f7
                           0000F8   739 G$SPI0CN$0$0 == 0x00f8
                           0000F8   740 _SPI0CN	=	0x00f8
                           0000F8   741 G$CAN0CN$0$0 == 0x00f8
                           0000F8   742 _CAN0CN	=	0x00f8
                           0000F8   743 G$P7$0$0 == 0x00f8
                           0000F8   744 _P7	=	0x00f8
                           0000F9   745 G$PCA0L$0$0 == 0x00f9
                           0000F9   746 _PCA0L	=	0x00f9
                           0000FA   747 G$PCA0H$0$0 == 0x00fa
                           0000FA   748 _PCA0H	=	0x00fa
                           0000FB   749 G$PCA0CPL0$0$0 == 0x00fb
                           0000FB   750 _PCA0CPL0	=	0x00fb
                           0000FC   751 G$PCA0CPH0$0$0 == 0x00fc
                           0000FC   752 _PCA0CPH0	=	0x00fc
                           0000FD   753 G$PCA0CPL1$0$0 == 0x00fd
                           0000FD   754 _PCA0CPL1	=	0x00fd
                           0000FE   755 G$PCA0CPH1$0$0 == 0x00fe
                           0000FE   756 _PCA0CPH1	=	0x00fe
                           0000FF   757 G$WDTCN$0$0 == 0x00ff
                           0000FF   758 _WDTCN	=	0x00ff
                           00FAF9   759 G$PCA0$0$0 == 0xfaf9
                           00FAF9   760 _PCA0	=	0xfaf9
                           00FCFB   761 G$PCA0CP0$0$0 == 0xfcfb
                           00FCFB   762 _PCA0CP0	=	0xfcfb
                           00FEFD   763 G$PCA0CP1$0$0 == 0xfefd
                           00FEFD   764 _PCA0CP1	=	0xfefd
                           00EAE9   765 G$PCA0CP2$0$0 == 0xeae9
                           00EAE9   766 _PCA0CP2	=	0xeae9
                           00ECEB   767 G$PCA0CP3$0$0 == 0xeceb
                           00ECEB   768 _PCA0CP3	=	0xeceb
                           00EEED   769 G$PCA0CP4$0$0 == 0xeeed
                           00EEED   770 _PCA0CP4	=	0xeeed
                           00E2E1   771 G$PCA0CP5$0$0 == 0xe2e1
                           00E2E1   772 _PCA0CP5	=	0xe2e1
                           00D9D8   773 G$CAN0DAT$0$0 == 0xd9d8
                           00D9D8   774 _CAN0DAT	=	0xd9d8
                           00D3D2   775 G$DAC0$0$0 == 0xd3d2
                           00D3D2   776 _DAC0	=	0xd3d2
                           00D3D2   777 G$DAC1$0$0 == 0xd3d2
                           00D3D2   778 _DAC1	=	0xd3d2
                           00CBCA   779 G$RCAP2$0$0 == 0xcbca
                           00CBCA   780 _RCAP2	=	0xcbca
                           00CBCA   781 G$RCAP3$0$0 == 0xcbca
                           00CBCA   782 _RCAP3	=	0xcbca
                           00CBCA   783 G$RCAP4$0$0 == 0xcbca
                           00CBCA   784 _RCAP4	=	0xcbca
                           00CDCC   785 G$TMR2$0$0 == 0xcdcc
                           00CDCC   786 _TMR2	=	0xcdcc
                           00CDCC   787 G$TMR3$0$0 == 0xcdcc
                           00CDCC   788 _TMR3	=	0xcdcc
                           00CDCC   789 G$TMR4$0$0 == 0xcdcc
                           00CDCC   790 _TMR4	=	0xcdcc
                           00C5C4   791 G$ADC0GT$0$0 == 0xc5c4
                           00C5C4   792 _ADC0GT	=	0xc5c4
                           00C7C6   793 G$ADC0LT$0$0 == 0xc7c6
                           00C7C6   794 _ADC0LT	=	0xc7c6
                           00BFBE   795 G$ADC0$0$0 == 0xbfbe
                           00BFBE   796 _ADC0	=	0xbfbe
                           008382   797 G$DP$0$0 == 0x8382
                           008382   798 _DP	=	0x8382
                           0000A2   799 G$_XPAGE$0$0 == 0x00a2
                           0000A2   800 __XPAGE	=	0x00a2
                                    801 ;--------------------------------------------------------
                                    802 ; special function bits
                                    803 ;--------------------------------------------------------
                                    804 	.area RSEG    (ABS,DATA)
      000000                        805 	.org 0x0000
                           000080   806 G$P0_0$0$0 == 0x0080
                           000080   807 _P0_0	=	0x0080
                           000081   808 G$P0_1$0$0 == 0x0081
                           000081   809 _P0_1	=	0x0081
                           000082   810 G$P0_2$0$0 == 0x0082
                           000082   811 _P0_2	=	0x0082
                           000083   812 G$P0_3$0$0 == 0x0083
                           000083   813 _P0_3	=	0x0083
                           000084   814 G$P0_4$0$0 == 0x0084
                           000084   815 _P0_4	=	0x0084
                           000085   816 G$P0_5$0$0 == 0x0085
                           000085   817 _P0_5	=	0x0085
                           000086   818 G$P0_6$0$0 == 0x0086
                           000086   819 _P0_6	=	0x0086
                           000087   820 G$P0_7$0$0 == 0x0087
                           000087   821 _P0_7	=	0x0087
                           000090   822 G$P1_0$0$0 == 0x0090
                           000090   823 _P1_0	=	0x0090
                           000091   824 G$P1_1$0$0 == 0x0091
                           000091   825 _P1_1	=	0x0091
                           000092   826 G$P1_2$0$0 == 0x0092
                           000092   827 _P1_2	=	0x0092
                           000093   828 G$P1_3$0$0 == 0x0093
                           000093   829 _P1_3	=	0x0093
                           000094   830 G$P1_4$0$0 == 0x0094
                           000094   831 _P1_4	=	0x0094
                           000095   832 G$P1_5$0$0 == 0x0095
                           000095   833 _P1_5	=	0x0095
                           000096   834 G$P1_6$0$0 == 0x0096
                           000096   835 _P1_6	=	0x0096
                           000097   836 G$P1_7$0$0 == 0x0097
                           000097   837 _P1_7	=	0x0097
                           0000A0   838 G$P2_0$0$0 == 0x00a0
                           0000A0   839 _P2_0	=	0x00a0
                           0000A1   840 G$P2_1$0$0 == 0x00a1
                           0000A1   841 _P2_1	=	0x00a1
                           0000A2   842 G$P2_2$0$0 == 0x00a2
                           0000A2   843 _P2_2	=	0x00a2
                           0000A3   844 G$P2_3$0$0 == 0x00a3
                           0000A3   845 _P2_3	=	0x00a3
                           0000A4   846 G$P2_4$0$0 == 0x00a4
                           0000A4   847 _P2_4	=	0x00a4
                           0000A5   848 G$P2_5$0$0 == 0x00a5
                           0000A5   849 _P2_5	=	0x00a5
                           0000A6   850 G$P2_6$0$0 == 0x00a6
                           0000A6   851 _P2_6	=	0x00a6
                           0000A7   852 G$P2_7$0$0 == 0x00a7
                           0000A7   853 _P2_7	=	0x00a7
                           0000B0   854 G$P3_0$0$0 == 0x00b0
                           0000B0   855 _P3_0	=	0x00b0
                           0000B1   856 G$P3_1$0$0 == 0x00b1
                           0000B1   857 _P3_1	=	0x00b1
                           0000B2   858 G$P3_2$0$0 == 0x00b2
                           0000B2   859 _P3_2	=	0x00b2
                           0000B3   860 G$P3_3$0$0 == 0x00b3
                           0000B3   861 _P3_3	=	0x00b3
                           0000B4   862 G$P3_4$0$0 == 0x00b4
                           0000B4   863 _P3_4	=	0x00b4
                           0000B5   864 G$P3_5$0$0 == 0x00b5
                           0000B5   865 _P3_5	=	0x00b5
                           0000B6   866 G$P3_6$0$0 == 0x00b6
                           0000B6   867 _P3_6	=	0x00b6
                           0000B7   868 G$P3_7$0$0 == 0x00b7
                           0000B7   869 _P3_7	=	0x00b7
                           0000C8   870 G$P4_0$0$0 == 0x00c8
                           0000C8   871 _P4_0	=	0x00c8
                           0000C9   872 G$P4_1$0$0 == 0x00c9
                           0000C9   873 _P4_1	=	0x00c9
                           0000CA   874 G$P4_2$0$0 == 0x00ca
                           0000CA   875 _P4_2	=	0x00ca
                           0000CB   876 G$P4_3$0$0 == 0x00cb
                           0000CB   877 _P4_3	=	0x00cb
                           0000CC   878 G$P4_4$0$0 == 0x00cc
                           0000CC   879 _P4_4	=	0x00cc
                           0000CD   880 G$P4_5$0$0 == 0x00cd
                           0000CD   881 _P4_5	=	0x00cd
                           0000CE   882 G$P4_6$0$0 == 0x00ce
                           0000CE   883 _P4_6	=	0x00ce
                           0000CF   884 G$P4_7$0$0 == 0x00cf
                           0000CF   885 _P4_7	=	0x00cf
                           0000D8   886 G$P5_0$0$0 == 0x00d8
                           0000D8   887 _P5_0	=	0x00d8
                           0000D9   888 G$P5_1$0$0 == 0x00d9
                           0000D9   889 _P5_1	=	0x00d9
                           0000DA   890 G$P5_2$0$0 == 0x00da
                           0000DA   891 _P5_2	=	0x00da
                           0000DB   892 G$P5_3$0$0 == 0x00db
                           0000DB   893 _P5_3	=	0x00db
                           0000DC   894 G$P5_4$0$0 == 0x00dc
                           0000DC   895 _P5_4	=	0x00dc
                           0000DD   896 G$P5_5$0$0 == 0x00dd
                           0000DD   897 _P5_5	=	0x00dd
                           0000DE   898 G$P5_6$0$0 == 0x00de
                           0000DE   899 _P5_6	=	0x00de
                           0000DF   900 G$P5_7$0$0 == 0x00df
                           0000DF   901 _P5_7	=	0x00df
                           0000E8   902 G$P6_0$0$0 == 0x00e8
                           0000E8   903 _P6_0	=	0x00e8
                           0000E9   904 G$P6_1$0$0 == 0x00e9
                           0000E9   905 _P6_1	=	0x00e9
                           0000EA   906 G$P6_2$0$0 == 0x00ea
                           0000EA   907 _P6_2	=	0x00ea
                           0000EB   908 G$P6_3$0$0 == 0x00eb
                           0000EB   909 _P6_3	=	0x00eb
                           0000EC   910 G$P6_4$0$0 == 0x00ec
                           0000EC   911 _P6_4	=	0x00ec
                           0000ED   912 G$P6_5$0$0 == 0x00ed
                           0000ED   913 _P6_5	=	0x00ed
                           0000EE   914 G$P6_6$0$0 == 0x00ee
                           0000EE   915 _P6_6	=	0x00ee
                           0000EF   916 G$P6_7$0$0 == 0x00ef
                           0000EF   917 _P6_7	=	0x00ef
                           0000F8   918 G$P7_0$0$0 == 0x00f8
                           0000F8   919 _P7_0	=	0x00f8
                           0000F9   920 G$P7_1$0$0 == 0x00f9
                           0000F9   921 _P7_1	=	0x00f9
                           0000FA   922 G$P7_2$0$0 == 0x00fa
                           0000FA   923 _P7_2	=	0x00fa
                           0000FB   924 G$P7_3$0$0 == 0x00fb
                           0000FB   925 _P7_3	=	0x00fb
                           0000FC   926 G$P7_4$0$0 == 0x00fc
                           0000FC   927 _P7_4	=	0x00fc
                           0000FD   928 G$P7_5$0$0 == 0x00fd
                           0000FD   929 _P7_5	=	0x00fd
                           0000FE   930 G$P7_6$0$0 == 0x00fe
                           0000FE   931 _P7_6	=	0x00fe
                           0000FF   932 G$P7_7$0$0 == 0x00ff
                           0000FF   933 _P7_7	=	0x00ff
                           00008F   934 G$TF1$0$0 == 0x008f
                           00008F   935 _TF1	=	0x008f
                           00008E   936 G$TR1$0$0 == 0x008e
                           00008E   937 _TR1	=	0x008e
                           00008D   938 G$TF0$0$0 == 0x008d
                           00008D   939 _TF0	=	0x008d
                           00008C   940 G$TR0$0$0 == 0x008c
                           00008C   941 _TR0	=	0x008c
                           00008B   942 G$IE1$0$0 == 0x008b
                           00008B   943 _IE1	=	0x008b
                           00008A   944 G$IT1$0$0 == 0x008a
                           00008A   945 _IT1	=	0x008a
                           000089   946 G$IE0$0$0 == 0x0089
                           000089   947 _IE0	=	0x0089
                           000088   948 G$IT0$0$0 == 0x0088
                           000088   949 _IT0	=	0x0088
                           00008F   950 G$CP0EN$0$0 == 0x008f
                           00008F   951 _CP0EN	=	0x008f
                           00008E   952 G$CP0OUT$0$0 == 0x008e
                           00008E   953 _CP0OUT	=	0x008e
                           00008D   954 G$CP0RIF$0$0 == 0x008d
                           00008D   955 _CP0RIF	=	0x008d
                           00008C   956 G$CP0FIF$0$0 == 0x008c
                           00008C   957 _CP0FIF	=	0x008c
                           00008B   958 G$CP0HYP1$0$0 == 0x008b
                           00008B   959 _CP0HYP1	=	0x008b
                           00008A   960 G$CP0HYP0$0$0 == 0x008a
                           00008A   961 _CP0HYP0	=	0x008a
                           000089   962 G$CP0HYN1$0$0 == 0x0089
                           000089   963 _CP0HYN1	=	0x0089
                           000088   964 G$CP0HYN0$0$0 == 0x0088
                           000088   965 _CP0HYN0	=	0x0088
                           00008F   966 G$CP1EN$0$0 == 0x008f
                           00008F   967 _CP1EN	=	0x008f
                           00008E   968 G$CP1OUT$0$0 == 0x008e
                           00008E   969 _CP1OUT	=	0x008e
                           00008D   970 G$CP1RIF$0$0 == 0x008d
                           00008D   971 _CP1RIF	=	0x008d
                           00008C   972 G$CP1FIF$0$0 == 0x008c
                           00008C   973 _CP1FIF	=	0x008c
                           00008B   974 G$CP1HYP1$0$0 == 0x008b
                           00008B   975 _CP1HYP1	=	0x008b
                           00008A   976 G$CP1HYP0$0$0 == 0x008a
                           00008A   977 _CP1HYP0	=	0x008a
                           000089   978 G$CP1HYN1$0$0 == 0x0089
                           000089   979 _CP1HYN1	=	0x0089
                           000088   980 G$CP1HYN0$0$0 == 0x0088
                           000088   981 _CP1HYN0	=	0x0088
                           00008F   982 G$CP2EN$0$0 == 0x008f
                           00008F   983 _CP2EN	=	0x008f
                           00008E   984 G$CP2OUT$0$0 == 0x008e
                           00008E   985 _CP2OUT	=	0x008e
                           00008D   986 G$CP2RIF$0$0 == 0x008d
                           00008D   987 _CP2RIF	=	0x008d
                           00008C   988 G$CP2FIF$0$0 == 0x008c
                           00008C   989 _CP2FIF	=	0x008c
                           00008B   990 G$CP2HYP1$0$0 == 0x008b
                           00008B   991 _CP2HYP1	=	0x008b
                           00008A   992 G$CP2HYP0$0$0 == 0x008a
                           00008A   993 _CP2HYP0	=	0x008a
                           000089   994 G$CP2HYN1$0$0 == 0x0089
                           000089   995 _CP2HYN1	=	0x0089
                           000088   996 G$CP2HYN0$0$0 == 0x0088
                           000088   997 _CP2HYN0	=	0x0088
                           00009F   998 G$SM00$0$0 == 0x009f
                           00009F   999 _SM00	=	0x009f
                           00009E  1000 G$SM10$0$0 == 0x009e
                           00009E  1001 _SM10	=	0x009e
                           00009D  1002 G$SM20$0$0 == 0x009d
                           00009D  1003 _SM20	=	0x009d
                           00009C  1004 G$REN0$0$0 == 0x009c
                           00009C  1005 _REN0	=	0x009c
                           00009B  1006 G$TB80$0$0 == 0x009b
                           00009B  1007 _TB80	=	0x009b
                           00009A  1008 G$RB80$0$0 == 0x009a
                           00009A  1009 _RB80	=	0x009a
                           000099  1010 G$TI0$0$0 == 0x0099
                           000099  1011 _TI0	=	0x0099
                           000098  1012 G$RI0$0$0 == 0x0098
                           000098  1013 _RI0	=	0x0098
                           00009F  1014 G$S1MODE$0$0 == 0x009f
                           00009F  1015 _S1MODE	=	0x009f
                           00009D  1016 G$MCE1$0$0 == 0x009d
                           00009D  1017 _MCE1	=	0x009d
                           00009C  1018 G$REN1$0$0 == 0x009c
                           00009C  1019 _REN1	=	0x009c
                           00009B  1020 G$TB81$0$0 == 0x009b
                           00009B  1021 _TB81	=	0x009b
                           00009A  1022 G$RB81$0$0 == 0x009a
                           00009A  1023 _RB81	=	0x009a
                           000099  1024 G$TI1$0$0 == 0x0099
                           000099  1025 _TI1	=	0x0099
                           000098  1026 G$RI1$0$0 == 0x0098
                           000098  1027 _RI1	=	0x0098
                           0000AF  1028 G$EA$0$0 == 0x00af
                           0000AF  1029 _EA	=	0x00af
                           0000AD  1030 G$ET2$0$0 == 0x00ad
                           0000AD  1031 _ET2	=	0x00ad
                           0000AC  1032 G$ES0$0$0 == 0x00ac
                           0000AC  1033 _ES0	=	0x00ac
                           0000AB  1034 G$ET1$0$0 == 0x00ab
                           0000AB  1035 _ET1	=	0x00ab
                           0000AA  1036 G$EX1$0$0 == 0x00aa
                           0000AA  1037 _EX1	=	0x00aa
                           0000A9  1038 G$ET0$0$0 == 0x00a9
                           0000A9  1039 _ET0	=	0x00a9
                           0000A8  1040 G$EX0$0$0 == 0x00a8
                           0000A8  1041 _EX0	=	0x00a8
                           0000BD  1042 G$PT2$0$0 == 0x00bd
                           0000BD  1043 _PT2	=	0x00bd
                           0000BC  1044 G$PS0$0$0 == 0x00bc
                           0000BC  1045 _PS0	=	0x00bc
                           0000BB  1046 G$PT1$0$0 == 0x00bb
                           0000BB  1047 _PT1	=	0x00bb
                           0000BA  1048 G$PX1$0$0 == 0x00ba
                           0000BA  1049 _PX1	=	0x00ba
                           0000B9  1050 G$PT0$0$0 == 0x00b9
                           0000B9  1051 _PT0	=	0x00b9
                           0000B8  1052 G$PX0$0$0 == 0x00b8
                           0000B8  1053 _PX0	=	0x00b8
                           0000C7  1054 G$BUSY$0$0 == 0x00c7
                           0000C7  1055 _BUSY	=	0x00c7
                           0000C6  1056 G$ENSMB$0$0 == 0x00c6
                           0000C6  1057 _ENSMB	=	0x00c6
                           0000C5  1058 G$STA$0$0 == 0x00c5
                           0000C5  1059 _STA	=	0x00c5
                           0000C4  1060 G$STO$0$0 == 0x00c4
                           0000C4  1061 _STO	=	0x00c4
                           0000C3  1062 G$SI$0$0 == 0x00c3
                           0000C3  1063 _SI	=	0x00c3
                           0000C2  1064 G$AA$0$0 == 0x00c2
                           0000C2  1065 _AA	=	0x00c2
                           0000C1  1066 G$SMBFTE$0$0 == 0x00c1
                           0000C1  1067 _SMBFTE	=	0x00c1
                           0000C0  1068 G$SMBTOE$0$0 == 0x00c0
                           0000C0  1069 _SMBTOE	=	0x00c0
                           0000C7  1070 G$BOFF$0$0 == 0x00c7
                           0000C7  1071 _BOFF	=	0x00c7
                           0000C6  1072 G$EWARN$0$0 == 0x00c6
                           0000C6  1073 _EWARN	=	0x00c6
                           0000C5  1074 G$EPASS$0$0 == 0x00c5
                           0000C5  1075 _EPASS	=	0x00c5
                           0000C4  1076 G$RXOK$0$0 == 0x00c4
                           0000C4  1077 _RXOK	=	0x00c4
                           0000C3  1078 G$TXOK$0$0 == 0x00c3
                           0000C3  1079 _TXOK	=	0x00c3
                           0000C2  1080 G$LEC2$0$0 == 0x00c2
                           0000C2  1081 _LEC2	=	0x00c2
                           0000C1  1082 G$LEC1$0$0 == 0x00c1
                           0000C1  1083 _LEC1	=	0x00c1
                           0000C0  1084 G$LEC0$0$0 == 0x00c0
                           0000C0  1085 _LEC0	=	0x00c0
                           0000CF  1086 G$TF2$0$0 == 0x00cf
                           0000CF  1087 _TF2	=	0x00cf
                           0000CE  1088 G$EXF2$0$0 == 0x00ce
                           0000CE  1089 _EXF2	=	0x00ce
                           0000CB  1090 G$EXEN2$0$0 == 0x00cb
                           0000CB  1091 _EXEN2	=	0x00cb
                           0000CA  1092 G$TR2$0$0 == 0x00ca
                           0000CA  1093 _TR2	=	0x00ca
                           0000C9  1094 G$CT2$0$0 == 0x00c9
                           0000C9  1095 _CT2	=	0x00c9
                           0000C8  1096 G$CPRL2$0$0 == 0x00c8
                           0000C8  1097 _CPRL2	=	0x00c8
                           0000CF  1098 G$TF3$0$0 == 0x00cf
                           0000CF  1099 _TF3	=	0x00cf
                           0000CE  1100 G$EXF3$0$0 == 0x00ce
                           0000CE  1101 _EXF3	=	0x00ce
                           0000CB  1102 G$EXEN3$0$0 == 0x00cb
                           0000CB  1103 _EXEN3	=	0x00cb
                           0000CA  1104 G$TR3$0$0 == 0x00ca
                           0000CA  1105 _TR3	=	0x00ca
                           0000C9  1106 G$CT3$0$0 == 0x00c9
                           0000C9  1107 _CT3	=	0x00c9
                           0000C8  1108 G$CPRL3$0$0 == 0x00c8
                           0000C8  1109 _CPRL3	=	0x00c8
                           0000CF  1110 G$TF4$0$0 == 0x00cf
                           0000CF  1111 _TF4	=	0x00cf
                           0000CE  1112 G$EXF4$0$0 == 0x00ce
                           0000CE  1113 _EXF4	=	0x00ce
                           0000CB  1114 G$EXEN4$0$0 == 0x00cb
                           0000CB  1115 _EXEN4	=	0x00cb
                           0000CA  1116 G$TR4$0$0 == 0x00ca
                           0000CA  1117 _TR4	=	0x00ca
                           0000C9  1118 G$CT4$0$0 == 0x00c9
                           0000C9  1119 _CT4	=	0x00c9
                           0000C8  1120 G$CPRL4$0$0 == 0x00c8
                           0000C8  1121 _CPRL4	=	0x00c8
                           0000D7  1122 G$CY$0$0 == 0x00d7
                           0000D7  1123 _CY	=	0x00d7
                           0000D6  1124 G$AC$0$0 == 0x00d6
                           0000D6  1125 _AC	=	0x00d6
                           0000D5  1126 G$F0$0$0 == 0x00d5
                           0000D5  1127 _F0	=	0x00d5
                           0000D4  1128 G$RS1$0$0 == 0x00d4
                           0000D4  1129 _RS1	=	0x00d4
                           0000D3  1130 G$RS0$0$0 == 0x00d3
                           0000D3  1131 _RS0	=	0x00d3
                           0000D2  1132 G$OV$0$0 == 0x00d2
                           0000D2  1133 _OV	=	0x00d2
                           0000D1  1134 G$F1$0$0 == 0x00d1
                           0000D1  1135 _F1	=	0x00d1
                           0000D0  1136 G$P$0$0 == 0x00d0
                           0000D0  1137 _P	=	0x00d0
                           0000DF  1138 G$CF$0$0 == 0x00df
                           0000DF  1139 _CF	=	0x00df
                           0000DE  1140 G$CR$0$0 == 0x00de
                           0000DE  1141 _CR	=	0x00de
                           0000DD  1142 G$CCF5$0$0 == 0x00dd
                           0000DD  1143 _CCF5	=	0x00dd
                           0000DC  1144 G$CCF4$0$0 == 0x00dc
                           0000DC  1145 _CCF4	=	0x00dc
                           0000DB  1146 G$CCF3$0$0 == 0x00db
                           0000DB  1147 _CCF3	=	0x00db
                           0000DA  1148 G$CCF2$0$0 == 0x00da
                           0000DA  1149 _CCF2	=	0x00da
                           0000D9  1150 G$CCF1$0$0 == 0x00d9
                           0000D9  1151 _CCF1	=	0x00d9
                           0000D8  1152 G$CCF0$0$0 == 0x00d8
                           0000D8  1153 _CCF0	=	0x00d8
                           0000EF  1154 G$AD0EN$0$0 == 0x00ef
                           0000EF  1155 _AD0EN	=	0x00ef
                           0000EE  1156 G$AD0TM$0$0 == 0x00ee
                           0000EE  1157 _AD0TM	=	0x00ee
                           0000ED  1158 G$AD0INT$0$0 == 0x00ed
                           0000ED  1159 _AD0INT	=	0x00ed
                           0000EC  1160 G$AD0BUSY$0$0 == 0x00ec
                           0000EC  1161 _AD0BUSY	=	0x00ec
                           0000EB  1162 G$AD0CM1$0$0 == 0x00eb
                           0000EB  1163 _AD0CM1	=	0x00eb
                           0000EA  1164 G$AD0CM0$0$0 == 0x00ea
                           0000EA  1165 _AD0CM0	=	0x00ea
                           0000E9  1166 G$AD0WINT$0$0 == 0x00e9
                           0000E9  1167 _AD0WINT	=	0x00e9
                           0000E8  1168 G$AD0LJST$0$0 == 0x00e8
                           0000E8  1169 _AD0LJST	=	0x00e8
                           0000EF  1170 G$AD2EN$0$0 == 0x00ef
                           0000EF  1171 _AD2EN	=	0x00ef
                           0000EE  1172 G$AD2TM$0$0 == 0x00ee
                           0000EE  1173 _AD2TM	=	0x00ee
                           0000ED  1174 G$AD2INT$0$0 == 0x00ed
                           0000ED  1175 _AD2INT	=	0x00ed
                           0000EC  1176 G$AD2BUSY$0$0 == 0x00ec
                           0000EC  1177 _AD2BUSY	=	0x00ec
                           0000EB  1178 G$AD2CM2$0$0 == 0x00eb
                           0000EB  1179 _AD2CM2	=	0x00eb
                           0000EA  1180 G$AD2CM1$0$0 == 0x00ea
                           0000EA  1181 _AD2CM1	=	0x00ea
                           0000E9  1182 G$AD2CM0$0$0 == 0x00e9
                           0000E9  1183 _AD2CM0	=	0x00e9
                           0000E8  1184 G$AD2WINT$0$0 == 0x00e8
                           0000E8  1185 _AD2WINT	=	0x00e8
                           0000FF  1186 G$SPIF$0$0 == 0x00ff
                           0000FF  1187 _SPIF	=	0x00ff
                           0000FE  1188 G$WCOL$0$0 == 0x00fe
                           0000FE  1189 _WCOL	=	0x00fe
                           0000FD  1190 G$MODF$0$0 == 0x00fd
                           0000FD  1191 _MODF	=	0x00fd
                           0000FC  1192 G$RXOVRN$0$0 == 0x00fc
                           0000FC  1193 _RXOVRN	=	0x00fc
                           0000FB  1194 G$NSSMD1$0$0 == 0x00fb
                           0000FB  1195 _NSSMD1	=	0x00fb
                           0000FA  1196 G$NSSMD0$0$0 == 0x00fa
                           0000FA  1197 _NSSMD0	=	0x00fa
                           0000F9  1198 G$TXBMT$0$0 == 0x00f9
                           0000F9  1199 _TXBMT	=	0x00f9
                           0000F8  1200 G$SPIEN$0$0 == 0x00f8
                           0000F8  1201 _SPIEN	=	0x00f8
                           0000F8  1202 G$CANINIT$0$0 == 0x00f8
                           0000F8  1203 _CANINIT	=	0x00f8
                           0000F9  1204 G$CANIE$0$0 == 0x00f9
                           0000F9  1205 _CANIE	=	0x00f9
                           0000FA  1206 G$CANSIE$0$0 == 0x00fa
                           0000FA  1207 _CANSIE	=	0x00fa
                           0000FB  1208 G$CANEIE$0$0 == 0x00fb
                           0000FB  1209 _CANEIE	=	0x00fb
                           0000FC  1210 G$CANIF$0$0 == 0x00fc
                           0000FC  1211 _CANIF	=	0x00fc
                           0000FD  1212 G$CANDAR$0$0 == 0x00fd
                           0000FD  1213 _CANDAR	=	0x00fd
                           0000FE  1214 G$CANCCE$0$0 == 0x00fe
                           0000FE  1215 _CANCCE	=	0x00fe
                           0000FF  1216 G$CANTEST$0$0 == 0x00ff
                           0000FF  1217 _CANTEST	=	0x00ff
                                   1218 ;--------------------------------------------------------
                                   1219 ; overlayable register banks
                                   1220 ;--------------------------------------------------------
                                   1221 	.area REG_BANK_0	(REL,OVR,DATA)
      000000                       1222 	.ds 8
                                   1223 ;--------------------------------------------------------
                                   1224 ; internal ram data
                                   1225 ;--------------------------------------------------------
                                   1226 	.area DSEG    (DATA)
                           000000  1227 G$conta_caractere$0$0==.
      000008                       1228 _conta_caractere::
      000008                       1229 	.ds 1
                           000001  1230 G$end_fim_ram$0$0==.
      000009                       1231 _end_fim_ram::
      000009                       1232 	.ds 2
                           000003  1233 G$TECLA$0$0==.
      00000B                       1234 _TECLA::
      00000B                       1235 	.ds 1
                           000004  1236 G$tecla$0$0==.
      00000C                       1237 _tecla::
      00000C                       1238 	.ds 1
                                   1239 ;--------------------------------------------------------
                                   1240 ; overlayable items in internal ram 
                                   1241 ;--------------------------------------------------------
                                   1242 	.area	OSEG    (OVR,DATA)
                                   1243 	.area	OSEG    (OVR,DATA)
                                   1244 	.area	OSEG    (OVR,DATA)
                                   1245 	.area	OSEG    (OVR,DATA)
                                   1246 	.area	OSEG    (OVR,DATA)
                                   1247 	.area	OSEG    (OVR,DATA)
                           000000  1248 Lmain.esc_RAM_SPI$dado$1$62==.
      000014                       1249 _esc_RAM_SPI_PARM_2:
      000014                       1250 	.ds 1
                                   1251 	.area	OSEG    (OVR,DATA)
                                   1252 ;--------------------------------------------------------
                                   1253 ; Stack segment in internal ram 
                                   1254 ;--------------------------------------------------------
                                   1255 	.area	SSEG
      000023                       1256 __start__stack:
      000023                       1257 	.ds	1
                                   1258 
                                   1259 ;--------------------------------------------------------
                                   1260 ; indirectly addressable internal ram data
                                   1261 ;--------------------------------------------------------
                                   1262 	.area ISEG    (DATA)
                                   1263 ;--------------------------------------------------------
                                   1264 ; absolute internal ram data
                                   1265 ;--------------------------------------------------------
                                   1266 	.area IABS    (ABS,DATA)
                                   1267 	.area IABS    (ABS,DATA)
                                   1268 ;--------------------------------------------------------
                                   1269 ; bit data
                                   1270 ;--------------------------------------------------------
                                   1271 	.area BSEG    (BIT)
                           000000  1272 G$terminal_ativo$0$0==.
      000000                       1273 _terminal_ativo::
      000000                       1274 	.ds 1
                           000001  1275 Lmain.le_glcd$cd$1$27==.
      000001                       1276 _le_glcd_PARM_1:
      000001                       1277 	.ds 1
                           000002  1278 Lmain.le_glcd$cs$1$27==.
      000002                       1279 _le_glcd_PARM_2:
      000002                       1280 	.ds 1
                           000003  1281 Lmain.esc_glcd$cd$1$29==.
      000003                       1282 _esc_glcd_PARM_2:
      000003                       1283 	.ds 1
                           000004  1284 Lmain.esc_glcd$cs$1$29==.
      000004                       1285 _esc_glcd_PARM_3:
      000004                       1286 	.ds 1
                           000005  1287 Lmain.init_GLCD$sloc0$1$0==.
      000005                       1288 _init_GLCD_sloc0_1_0:
      000005                       1289 	.ds 1
                           000006  1290 Lmain.conf_Y$cs$1$33==.
      000006                       1291 _conf_Y_PARM_2:
      000006                       1292 	.ds 1
                           000007  1293 Lmain.conf_pag$cs$1$35==.
      000007                       1294 _conf_pag_PARM_2:
      000007                       1295 	.ds 1
                           000008  1296 Lmain.limpa_glcd$cs$1$37==.
      000008                       1297 _limpa_glcd_PARM_1:
      000008                       1298 	.ds 1
                           000009  1299 Lmain.escreve_caractere$cs$1$45==.
      000009                       1300 _escreve_caractere_PARM_2:
      000009                       1301 	.ds 1
                           00000A  1302 Lmain.putchar$lado$1$48==.
      00000A                       1303 _putchar_lado_1_48:
      00000A                       1304 	.ds 1
                           00000B  1305 G$x$0$0==.
      00000B                       1306 _x::
      00000B                       1307 	.ds 1
                                   1308 ;--------------------------------------------------------
                                   1309 ; paged external ram data
                                   1310 ;--------------------------------------------------------
                                   1311 	.area PSEG    (PAG,XDATA)
                                   1312 ;--------------------------------------------------------
                                   1313 ; external ram data
                                   1314 ;--------------------------------------------------------
                                   1315 	.area XSEG    (XDATA)
                                   1316 ;--------------------------------------------------------
                                   1317 ; absolute external ram data
                                   1318 ;--------------------------------------------------------
                                   1319 	.area XABS    (ABS,XDATA)
                                   1320 ;--------------------------------------------------------
                                   1321 ; external initialized ram data
                                   1322 ;--------------------------------------------------------
                                   1323 	.area XISEG   (XDATA)
                                   1324 	.area HOME    (CODE)
                                   1325 	.area GSINIT0 (CODE)
                                   1326 	.area GSINIT1 (CODE)
                                   1327 	.area GSINIT2 (CODE)
                                   1328 	.area GSINIT3 (CODE)
                                   1329 	.area GSINIT4 (CODE)
                                   1330 	.area GSINIT5 (CODE)
                                   1331 	.area GSINIT  (CODE)
                                   1332 	.area GSFINAL (CODE)
                                   1333 	.area CSEG    (CODE)
                                   1334 ;--------------------------------------------------------
                                   1335 ; interrupt vector 
                                   1336 ;--------------------------------------------------------
                                   1337 	.area HOME    (CODE)
      000000                       1338 __interrupt_vect:
      000000 02 00 29         [24] 1339 	ljmp	__sdcc_gsinit_startup
      000003 32               [24] 1340 	reti
      000004                       1341 	.ds	7
      00000B 32               [24] 1342 	reti
      00000C                       1343 	.ds	7
      000013 32               [24] 1344 	reti
      000014                       1345 	.ds	7
      00001B 32               [24] 1346 	reti
      00001C                       1347 	.ds	7
      000023 02 07 EE         [24] 1348 	ljmp	_uart_ISR
                                   1349 ;--------------------------------------------------------
                                   1350 ; global & static initialisations
                                   1351 ;--------------------------------------------------------
                                   1352 	.area HOME    (CODE)
                                   1353 	.area GSINIT  (CODE)
                                   1354 	.area GSFINAL (CODE)
                                   1355 	.area GSINIT  (CODE)
                                   1356 	.globl __sdcc_gsinit_startup
                                   1357 	.globl __sdcc_program_startup
                                   1358 	.globl __start__stack
                                   1359 	.globl __mcs51_genXINIT
                                   1360 	.globl __mcs51_genXRAMCLEAR
                                   1361 	.globl __mcs51_genRAMCLEAR
                           000000  1362 	C$output_glcd.h$24$1$96 ==.
                                   1363 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:24: volatile unsigned char conta_caractere = 0;
      000082 75 08 00         [24] 1364 	mov	_conta_caractere,#0x00
                           000003  1365 	C$mem_spi.h$15$1$96 ==.
                                   1366 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:15: volatile unsigned int end_fim_ram = 0;
      000085 E4               [12] 1367 	clr	a
      000086 F5 09            [12] 1368 	mov	_end_fim_ram,a
      000088 F5 0A            [12] 1369 	mov	(_end_fim_ram + 1),a
                           000008  1370 	C$main.c$29$1$96 ==.
                                   1371 ;	C:\Users\202019050169\Downloads\trabalho\main.c:29: volatile unsigned char TECLA = TECS_OPEN;
      00008A 75 0B FF         [24] 1372 	mov	_TECLA,#0xff
                           00000B  1373 	C$output_glcd.h$25$1$96 ==.
                                   1374 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:25: volatile __bit terminal_ativo = 0;
      00008D C2 00            [12] 1375 	clr	_terminal_ativo
                           00000D  1376 	C$main.c$33$1$96 ==.
                                   1377 ;	C:\Users\202019050169\Downloads\trabalho\main.c:33: volatile __bit x = 0;
      00008F C2 0B            [12] 1378 	clr	_x
                                   1379 	.area GSFINAL (CODE)
      000091 02 00 26         [24] 1380 	ljmp	__sdcc_program_startup
                                   1381 ;--------------------------------------------------------
                                   1382 ; Home
                                   1383 ;--------------------------------------------------------
                                   1384 	.area HOME    (CODE)
                                   1385 	.area HOME    (CODE)
      000026                       1386 __sdcc_program_startup:
      000026 02 09 2A         [24] 1387 	ljmp	_main
                                   1388 ;	return from main will return to caller
                                   1389 ;--------------------------------------------------------
                                   1390 ; code
                                   1391 ;--------------------------------------------------------
                                   1392 	.area CSEG    (CODE)
                                   1393 ;------------------------------------------------------------
                                   1394 ;Allocation info for local variables in function 'Reset_Sources_Init'
                                   1395 ;------------------------------------------------------------
                           000000  1396 	G$Reset_Sources_Init$0$0 ==.
                           000000  1397 	C$config.c$10$0$0 ==.
                                   1398 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:10: void Reset_Sources_Init()
                                   1399 ;	-----------------------------------------
                                   1400 ;	 function Reset_Sources_Init
                                   1401 ;	-----------------------------------------
      000094                       1402 _Reset_Sources_Init:
                           000007  1403 	ar7 = 0x07
                           000006  1404 	ar6 = 0x06
                           000005  1405 	ar5 = 0x05
                           000004  1406 	ar4 = 0x04
                           000003  1407 	ar3 = 0x03
                           000002  1408 	ar2 = 0x02
                           000001  1409 	ar1 = 0x01
                           000000  1410 	ar0 = 0x00
                           000000  1411 	C$config.c$12$1$14 ==.
                                   1412 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:12: WDTCN     = 0xDE;
      000094 75 FF DE         [24] 1413 	mov	_WDTCN,#0xde
                           000003  1414 	C$config.c$13$1$14 ==.
                                   1415 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:13: WDTCN     = 0xAD;
      000097 75 FF AD         [24] 1416 	mov	_WDTCN,#0xad
                           000006  1417 	C$config.c$14$1$14 ==.
                           000006  1418 	XG$Reset_Sources_Init$0$0 ==.
      00009A 22               [24] 1419 	ret
                                   1420 ;------------------------------------------------------------
                                   1421 ;Allocation info for local variables in function 'Timer_Init'
                                   1422 ;------------------------------------------------------------
                           000007  1423 	G$Timer_Init$0$0 ==.
                           000007  1424 	C$config.c$16$1$14 ==.
                                   1425 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:16: void Timer_Init()
                                   1426 ;	-----------------------------------------
                                   1427 ;	 function Timer_Init
                                   1428 ;	-----------------------------------------
      00009B                       1429 _Timer_Init:
                           000007  1430 	C$config.c$18$1$15 ==.
                                   1431 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:18: SFRPAGE   = TIMER01_PAGE;
      00009B 75 84 00         [24] 1432 	mov	_SFRPAGE,#0x00
                           00000A  1433 	C$config.c$19$1$15 ==.
                                   1434 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:19: TCON      = 0x01;
      00009E 75 88 01         [24] 1435 	mov	_TCON,#0x01
                           00000D  1436 	C$config.c$20$1$15 ==.
                                   1437 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:20: TMOD      = 0x21;
      0000A1 75 89 21         [24] 1438 	mov	_TMOD,#0x21
                           000010  1439 	C$config.c$21$1$15 ==.
                                   1440 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:21: CKCON     = 0x18;
      0000A4 75 8E 18         [24] 1441 	mov	_CKCON,#0x18
                           000013  1442 	C$config.c$22$1$15 ==.
                                   1443 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:22: TH1       = 0xAF;
      0000A7 75 8D AF         [24] 1444 	mov	_TH1,#0xaf
                           000016  1445 	C$config.c$23$1$15 ==.
                                   1446 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:23: SFRPAGE   = TMR2_PAGE;
      0000AA 75 84 00         [24] 1447 	mov	_SFRPAGE,#0x00
                           000019  1448 	C$config.c$24$1$15 ==.
                                   1449 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:24: TMR2CF    = 0x0A;
      0000AD 75 C9 0A         [24] 1450 	mov	_TMR2CF,#0x0a
                           00001C  1451 	C$config.c$25$1$15 ==.
                                   1452 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:25: RCAP2H    = 0x0C;
      0000B0 75 CB 0C         [24] 1453 	mov	_RCAP2H,#0x0c
                           00001F  1454 	C$config.c$26$1$15 ==.
                                   1455 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:26: TMR2L     = 0x0D;
      0000B3 75 CC 0D         [24] 1456 	mov	_TMR2L,#0x0d
                           000022  1457 	C$config.c$27$1$15 ==.
                                   1458 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:27: TMR2H     = 0x0B;
      0000B6 75 CD 0B         [24] 1459 	mov	_TMR2H,#0x0b
                           000025  1460 	C$config.c$28$1$15 ==.
                                   1461 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:28: SFRPAGE   = TMR4_PAGE;
      0000B9 75 84 02         [24] 1462 	mov	_SFRPAGE,#0x02
                           000028  1463 	C$config.c$29$1$15 ==.
                                   1464 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:29: TMR4CF    = 0x02;
      0000BC 75 C9 02         [24] 1465 	mov	_TMR4CF,#0x02
                           00002B  1466 	C$config.c$30$1$15 ==.
                                   1467 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:30: RCAP4L    = 0x8D;
      0000BF 75 CA 8D         [24] 1468 	mov	_RCAP4L,#0x8d
                           00002E  1469 	C$config.c$31$1$15 ==.
                                   1470 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:31: RCAP4H    = 0x34;
      0000C2 75 CB 34         [24] 1471 	mov	_RCAP4H,#0x34
                           000031  1472 	C$config.c$32$1$15 ==.
                           000031  1473 	XG$Timer_Init$0$0 ==.
      0000C5 22               [24] 1474 	ret
                                   1475 ;------------------------------------------------------------
                                   1476 ;Allocation info for local variables in function 'UART_Init'
                                   1477 ;------------------------------------------------------------
                           000032  1478 	G$UART_Init$0$0 ==.
                           000032  1479 	C$config.c$34$1$15 ==.
                                   1480 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:34: void UART_Init()
                                   1481 ;	-----------------------------------------
                                   1482 ;	 function UART_Init
                                   1483 ;	-----------------------------------------
      0000C6                       1484 _UART_Init:
                           000032  1485 	C$config.c$36$1$16 ==.
                                   1486 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:36: SFRPAGE   = UART0_PAGE;
      0000C6 75 84 00         [24] 1487 	mov	_SFRPAGE,#0x00
                           000035  1488 	C$config.c$37$1$16 ==.
                                   1489 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:37: SCON0     = 0x70;
      0000C9 75 98 70         [24] 1490 	mov	_SCON0,#0x70
                           000038  1491 	C$config.c$38$1$16 ==.
                           000038  1492 	XG$UART_Init$0$0 ==.
      0000CC 22               [24] 1493 	ret
                                   1494 ;------------------------------------------------------------
                                   1495 ;Allocation info for local variables in function 'SMBus_Init'
                                   1496 ;------------------------------------------------------------
                           000039  1497 	G$SMBus_Init$0$0 ==.
                           000039  1498 	C$config.c$40$1$16 ==.
                                   1499 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:40: void SMBus_Init()
                                   1500 ;	-----------------------------------------
                                   1501 ;	 function SMBus_Init
                                   1502 ;	-----------------------------------------
      0000CD                       1503 _SMBus_Init:
                           000039  1504 	C$config.c$42$1$17 ==.
                                   1505 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:42: SFRPAGE   = SMB0_PAGE;
      0000CD 75 84 00         [24] 1506 	mov	_SFRPAGE,#0x00
                           00003C  1507 	C$config.c$43$1$17 ==.
                                   1508 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:43: SMB0CR    = 0xE9;
      0000D0 75 CF E9         [24] 1509 	mov	_SMB0CR,#0xe9
                           00003F  1510 	C$config.c$44$1$17 ==.
                           00003F  1511 	XG$SMBus_Init$0$0 ==.
      0000D3 22               [24] 1512 	ret
                                   1513 ;------------------------------------------------------------
                                   1514 ;Allocation info for local variables in function 'SPI_Init'
                                   1515 ;------------------------------------------------------------
                           000040  1516 	G$SPI_Init$0$0 ==.
                           000040  1517 	C$config.c$46$1$17 ==.
                                   1518 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:46: void SPI_Init()
                                   1519 ;	-----------------------------------------
                                   1520 ;	 function SPI_Init
                                   1521 ;	-----------------------------------------
      0000D4                       1522 _SPI_Init:
                           000040  1523 	C$config.c$48$1$18 ==.
                                   1524 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:48: SFRPAGE   = SPI0_PAGE;
      0000D4 75 84 00         [24] 1525 	mov	_SFRPAGE,#0x00
                           000043  1526 	C$config.c$49$1$18 ==.
                                   1527 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:49: SPI0CFG   = 0x40;
      0000D7 75 9A 40         [24] 1528 	mov	_SPI0CFG,#0x40
                           000046  1529 	C$config.c$50$1$18 ==.
                                   1530 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:50: SPI0CN    = 0x01;
      0000DA 75 F8 01         [24] 1531 	mov	_SPI0CN,#0x01
                           000049  1532 	C$config.c$51$1$18 ==.
                                   1533 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:51: SPI0CKR   = 0x7C;
      0000DD 75 9D 7C         [24] 1534 	mov	_SPI0CKR,#0x7c
                           00004C  1535 	C$config.c$52$1$18 ==.
                           00004C  1536 	XG$SPI_Init$0$0 ==.
      0000E0 22               [24] 1537 	ret
                                   1538 ;------------------------------------------------------------
                                   1539 ;Allocation info for local variables in function 'ADC_Init'
                                   1540 ;------------------------------------------------------------
                           00004D  1541 	G$ADC_Init$0$0 ==.
                           00004D  1542 	C$config.c$54$1$18 ==.
                                   1543 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:54: void ADC_Init()
                                   1544 ;	-----------------------------------------
                                   1545 ;	 function ADC_Init
                                   1546 ;	-----------------------------------------
      0000E1                       1547 _ADC_Init:
                           00004D  1548 	C$config.c$56$1$19 ==.
                                   1549 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:56: SFRPAGE   = ADC0_PAGE;
      0000E1 75 84 00         [24] 1550 	mov	_SFRPAGE,#0x00
                           000050  1551 	C$config.c$57$1$19 ==.
                                   1552 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:57: ADC0CN    = 0x80;
      0000E4 75 E8 80         [24] 1553 	mov	_ADC0CN,#0x80
                           000053  1554 	C$config.c$58$1$19 ==.
                           000053  1555 	XG$ADC_Init$0$0 ==.
      0000E7 22               [24] 1556 	ret
                                   1557 ;------------------------------------------------------------
                                   1558 ;Allocation info for local variables in function 'DAC_Init'
                                   1559 ;------------------------------------------------------------
                           000054  1560 	G$DAC_Init$0$0 ==.
                           000054  1561 	C$config.c$60$1$19 ==.
                                   1562 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:60: void DAC_Init()
                                   1563 ;	-----------------------------------------
                                   1564 ;	 function DAC_Init
                                   1565 ;	-----------------------------------------
      0000E8                       1566 _DAC_Init:
                           000054  1567 	C$config.c$62$1$20 ==.
                                   1568 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:62: SFRPAGE   = DAC0_PAGE;
      0000E8 75 84 00         [24] 1569 	mov	_SFRPAGE,#0x00
                           000057  1570 	C$config.c$63$1$20 ==.
                                   1571 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:63: DAC0CN    = 0x9C;
      0000EB 75 D4 9C         [24] 1572 	mov	_DAC0CN,#0x9c
                           00005A  1573 	C$config.c$64$1$20 ==.
                           00005A  1574 	XG$DAC_Init$0$0 ==.
      0000EE 22               [24] 1575 	ret
                                   1576 ;------------------------------------------------------------
                                   1577 ;Allocation info for local variables in function 'Voltage_Reference_Init'
                                   1578 ;------------------------------------------------------------
                           00005B  1579 	G$Voltage_Reference_Init$0$0 ==.
                           00005B  1580 	C$config.c$66$1$20 ==.
                                   1581 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:66: void Voltage_Reference_Init()
                                   1582 ;	-----------------------------------------
                                   1583 ;	 function Voltage_Reference_Init
                                   1584 ;	-----------------------------------------
      0000EF                       1585 _Voltage_Reference_Init:
                           00005B  1586 	C$config.c$68$1$21 ==.
                                   1587 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:68: SFRPAGE   = ADC0_PAGE;
      0000EF 75 84 00         [24] 1588 	mov	_SFRPAGE,#0x00
                           00005E  1589 	C$config.c$69$1$21 ==.
                                   1590 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:69: REF0CN    = 0x03;
      0000F2 75 D1 03         [24] 1591 	mov	_REF0CN,#0x03
                           000061  1592 	C$config.c$70$1$21 ==.
                           000061  1593 	XG$Voltage_Reference_Init$0$0 ==.
      0000F5 22               [24] 1594 	ret
                                   1595 ;------------------------------------------------------------
                                   1596 ;Allocation info for local variables in function 'Port_IO_Init'
                                   1597 ;------------------------------------------------------------
                           000062  1598 	G$Port_IO_Init$0$0 ==.
                           000062  1599 	C$config.c$72$1$21 ==.
                                   1600 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:72: void Port_IO_Init()
                                   1601 ;	-----------------------------------------
                                   1602 ;	 function Port_IO_Init
                                   1603 ;	-----------------------------------------
      0000F6                       1604 _Port_IO_Init:
                           000062  1605 	C$config.c$110$1$22 ==.
                                   1606 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:110: SFRPAGE   = CONFIG_PAGE;
      0000F6 75 84 0F         [24] 1607 	mov	_SFRPAGE,#0x0f
                           000065  1608 	C$config.c$111$1$22 ==.
                                   1609 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:111: P0MDOUT   = 0xFD;
      0000F9 75 A4 FD         [24] 1610 	mov	_P0MDOUT,#0xfd
                           000068  1611 	C$config.c$112$1$22 ==.
                                   1612 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:112: P3MDOUT   = 0xE0;
      0000FC 75 A7 E0         [24] 1613 	mov	_P3MDOUT,#0xe0
                           00006B  1614 	C$config.c$113$1$22 ==.
                                   1615 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:113: XBR0      = 0x06;
      0000FF 75 E1 06         [24] 1616 	mov	_XBR0,#0x06
                           00006E  1617 	C$config.c$114$1$22 ==.
                                   1618 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:114: XBR2      = 0x40;
      000102 75 E3 40         [24] 1619 	mov	_XBR2,#0x40
                           000071  1620 	C$config.c$115$1$22 ==.
                           000071  1621 	XG$Port_IO_Init$0$0 ==.
      000105 22               [24] 1622 	ret
                                   1623 ;------------------------------------------------------------
                                   1624 ;Allocation info for local variables in function 'Oscillator_Init'
                                   1625 ;------------------------------------------------------------
                                   1626 ;i                         Allocated to registers r6 r7 
                                   1627 ;------------------------------------------------------------
                           000072  1628 	G$Oscillator_Init$0$0 ==.
                           000072  1629 	C$config.c$117$1$22 ==.
                                   1630 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:117: void Oscillator_Init()
                                   1631 ;	-----------------------------------------
                                   1632 ;	 function Oscillator_Init
                                   1633 ;	-----------------------------------------
      000106                       1634 _Oscillator_Init:
                           000072  1635 	C$config.c$120$1$23 ==.
                                   1636 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:120: SFRPAGE   = CONFIG_PAGE;
      000106 75 84 0F         [24] 1637 	mov	_SFRPAGE,#0x0f
                           000075  1638 	C$config.c$121$1$23 ==.
                                   1639 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:121: OSCXCN    = 0x67;
      000109 75 8C 67         [24] 1640 	mov	_OSCXCN,#0x67
                           000078  1641 	C$config.c$122$1$23 ==.
                                   1642 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:122: for (i = 0; i < 3000; i++);  // Wait 1ms for initialization
      00010C 7E B8            [12] 1643 	mov	r6,#0xb8
      00010E 7F 0B            [12] 1644 	mov	r7,#0x0b
      000110                       1645 00107$:
      000110 EE               [12] 1646 	mov	a,r6
      000111 24 FF            [12] 1647 	add	a,#0xff
      000113 FC               [12] 1648 	mov	r4,a
      000114 EF               [12] 1649 	mov	a,r7
      000115 34 FF            [12] 1650 	addc	a,#0xff
      000117 FD               [12] 1651 	mov	r5,a
      000118 8C 06            [24] 1652 	mov	ar6,r4
      00011A 8D 07            [24] 1653 	mov	ar7,r5
      00011C EC               [12] 1654 	mov	a,r4
      00011D 4D               [12] 1655 	orl	a,r5
      00011E 70 F0            [24] 1656 	jnz	00107$
                           00008C  1657 	C$config.c$123$1$23 ==.
                                   1658 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:123: while ((OSCXCN & 0x80) == 0);
      000120                       1659 00102$:
      000120 E5 8C            [12] 1660 	mov	a,_OSCXCN
      000122 30 E7 FB         [24] 1661 	jnb	acc.7,00102$
                           000091  1662 	C$config.c$124$1$23 ==.
                                   1663 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:124: CLKSEL    = 0x01;
      000125 75 97 01         [24] 1664 	mov	_CLKSEL,#0x01
                           000094  1665 	C$config.c$125$1$23 ==.
                           000094  1666 	XG$Oscillator_Init$0$0 ==.
      000128 22               [24] 1667 	ret
                                   1668 ;------------------------------------------------------------
                                   1669 ;Allocation info for local variables in function 'Interrupts_Init'
                                   1670 ;------------------------------------------------------------
                           000095  1671 	G$Interrupts_Init$0$0 ==.
                           000095  1672 	C$config.c$127$1$23 ==.
                                   1673 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:127: void Interrupts_Init()
                                   1674 ;	-----------------------------------------
                                   1675 ;	 function Interrupts_Init
                                   1676 ;	-----------------------------------------
      000129                       1677 _Interrupts_Init:
                           000095  1678 	C$config.c$129$1$24 ==.
                                   1679 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:129: IE        = 0xB0;
      000129 75 A8 B0         [24] 1680 	mov	_IE,#0xb0
                           000098  1681 	C$config.c$130$1$24 ==.
                           000098  1682 	XG$Interrupts_Init$0$0 ==.
      00012C 22               [24] 1683 	ret
                                   1684 ;------------------------------------------------------------
                                   1685 ;Allocation info for local variables in function 'Init_Device'
                                   1686 ;------------------------------------------------------------
                           000099  1687 	G$Init_Device$0$0 ==.
                           000099  1688 	C$config.c$134$1$24 ==.
                                   1689 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:134: void Init_Device(void)
                                   1690 ;	-----------------------------------------
                                   1691 ;	 function Init_Device
                                   1692 ;	-----------------------------------------
      00012D                       1693 _Init_Device:
                           000099  1694 	C$config.c$136$1$26 ==.
                                   1695 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:136: Reset_Sources_Init();
      00012D 12 00 94         [24] 1696 	lcall	_Reset_Sources_Init
                           00009C  1697 	C$config.c$137$1$26 ==.
                                   1698 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:137: Timer_Init();
      000130 12 00 9B         [24] 1699 	lcall	_Timer_Init
                           00009F  1700 	C$config.c$138$1$26 ==.
                                   1701 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:138: UART_Init();
      000133 12 00 C6         [24] 1702 	lcall	_UART_Init
                           0000A2  1703 	C$config.c$139$1$26 ==.
                                   1704 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:139: SMBus_Init();
      000136 12 00 CD         [24] 1705 	lcall	_SMBus_Init
                           0000A5  1706 	C$config.c$140$1$26 ==.
                                   1707 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:140: SPI_Init();
      000139 12 00 D4         [24] 1708 	lcall	_SPI_Init
                           0000A8  1709 	C$config.c$141$1$26 ==.
                                   1710 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:141: ADC_Init();
      00013C 12 00 E1         [24] 1711 	lcall	_ADC_Init
                           0000AB  1712 	C$config.c$142$1$26 ==.
                                   1713 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:142: DAC_Init();
      00013F 12 00 E8         [24] 1714 	lcall	_DAC_Init
                           0000AE  1715 	C$config.c$143$1$26 ==.
                                   1716 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:143: Voltage_Reference_Init();
      000142 12 00 EF         [24] 1717 	lcall	_Voltage_Reference_Init
                           0000B1  1718 	C$config.c$144$1$26 ==.
                                   1719 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:144: Port_IO_Init();
      000145 12 00 F6         [24] 1720 	lcall	_Port_IO_Init
                           0000B4  1721 	C$config.c$145$1$26 ==.
                                   1722 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:145: Oscillator_Init();
      000148 12 01 06         [24] 1723 	lcall	_Oscillator_Init
                           0000B7  1724 	C$config.c$146$1$26 ==.
                                   1725 ;	C:\Users\202019050169\Downloads\trabalho\/config.c:146: Interrupts_Init();
      00014B 12 01 29         [24] 1726 	lcall	_Interrupts_Init
                           0000BA  1727 	C$config.c$147$1$26 ==.
                           0000BA  1728 	XG$Init_Device$0$0 ==.
      00014E 22               [24] 1729 	ret
                                   1730 ;------------------------------------------------------------
                                   1731 ;Allocation info for local variables in function 'le_glcd'
                                   1732 ;------------------------------------------------------------
                                   1733 ;byte                      Allocated to registers 
                                   1734 ;------------------------------------------------------------
                           0000BB  1735 	G$le_glcd$0$0 ==.
                           0000BB  1736 	C$output_glcd.h$27$1$26 ==.
                                   1737 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:27: unsigned char le_glcd(__bit cd, __bit cs){
                                   1738 ;	-----------------------------------------
                                   1739 ;	 function le_glcd
                                   1740 ;	-----------------------------------------
      00014F                       1741 _le_glcd:
                           0000BB  1742 	C$output_glcd.h$32$1$28 ==.
                                   1743 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:32: RW = HI;
      00014F D2 A3            [12] 1744 	setb	_P2_3
                           0000BD  1745 	C$output_glcd.h$33$1$28 ==.
                                   1746 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:33: CS1 = cs;
      000151 A2 02            [12] 1747 	mov	c,_le_glcd_PARM_2
      000153 92 A0            [24] 1748 	mov	_P2_0,c
                           0000C1  1749 	C$output_glcd.h$34$1$28 ==.
                                   1750 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:34: CS2 = !cs;
      000155 A2 02            [12] 1751 	mov	c,_le_glcd_PARM_2
      000157 B3               [12] 1752 	cpl	c
      000158 92 A1            [24] 1753 	mov	_P2_1,c
                           0000C6  1754 	C$output_glcd.h$35$1$28 ==.
                                   1755 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:35: RS = cd;
      00015A A2 01            [12] 1756 	mov	c,_le_glcd_PARM_1
      00015C 92 A2            [24] 1757 	mov	_P2_2,c
                           0000CA  1758 	C$output_glcd.h$36$1$28 ==.
                                   1759 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:36: NOP4();
      00015E 00               [12] 1760 	NOP	
      00015F 00               [12] 1761 	NOP	
      000160 00               [12] 1762 	NOP	
      000161 00               [12] 1763 	NOP	
                           0000CE  1764 	C$output_glcd.h$38$1$28 ==.
                                   1765 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:38: E = HI;
      000162 D2 A4            [12] 1766 	setb	_P2_4
                           0000D0  1767 	C$output_glcd.h$39$1$28 ==.
                                   1768 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:39: NOP8();
      000164 00               [12] 1769 	NOP	
      000165 00               [12] 1770 	NOP	
      000166 00               [12] 1771 	NOP	
      000167 00               [12] 1772 	NOP	
      000168 00               [12] 1773 	NOP	
      000169 00               [12] 1774 	NOP	
      00016A 00               [12] 1775 	NOP	
      00016B 00               [12] 1776 	NOP	
                           0000D8  1777 	C$output_glcd.h$41$1$28 ==.
                                   1778 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:41: SFRPAGE=CONFIG_PAGE;
      00016C 75 84 0F         [24] 1779 	mov	_SFRPAGE,#0x0f
                           0000DB  1780 	C$output_glcd.h$42$1$28 ==.
                                   1781 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:42: byte = DB;
      00016F 85 C8 82         [24] 1782 	mov	dpl,_P4
                           0000DE  1783 	C$output_glcd.h$43$1$28 ==.
                                   1784 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:43: SFRPAGE=LEGACY_PAGE;
      000172 75 84 00         [24] 1785 	mov	_SFRPAGE,#0x00
                           0000E1  1786 	C$output_glcd.h$44$1$28 ==.
                                   1787 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:44: NOP4();
      000175 00               [12] 1788 	NOP	
      000176 00               [12] 1789 	NOP	
      000177 00               [12] 1790 	NOP	
      000178 00               [12] 1791 	NOP	
                           0000E5  1792 	C$output_glcd.h$46$1$28 ==.
                                   1793 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:46: E = LO;
      000179 C2 A4            [12] 1794 	clr	_P2_4
                           0000E7  1795 	C$output_glcd.h$47$1$28 ==.
                                   1796 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:47: NOP12();
      00017B 00               [12] 1797 	NOP	
      00017C 00               [12] 1798 	NOP	
      00017D 00               [12] 1799 	NOP	
      00017E 00               [12] 1800 	NOP	
      00017F 00               [12] 1801 	NOP	
      000180 00               [12] 1802 	NOP	
      000181 00               [12] 1803 	NOP	
      000182 00               [12] 1804 	NOP	
      000183 00               [12] 1805 	NOP	
      000184 00               [12] 1806 	NOP	
      000185 00               [12] 1807 	NOP	
      000186 00               [12] 1808 	NOP	
                           0000F3  1809 	C$output_glcd.h$48$1$28 ==.
                                   1810 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:48: return (byte);
                           0000F3  1811 	C$output_glcd.h$50$1$28 ==.
                           0000F3  1812 	XG$le_glcd$0$0 ==.
      000187 22               [24] 1813 	ret
                                   1814 ;------------------------------------------------------------
                                   1815 ;Allocation info for local variables in function 'esc_glcd'
                                   1816 ;------------------------------------------------------------
                                   1817 ;byte                      Allocated to registers r7 
                                   1818 ;------------------------------------------------------------
                           0000F4  1819 	G$esc_glcd$0$0 ==.
                           0000F4  1820 	C$output_glcd.h$52$1$28 ==.
                                   1821 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:52: void esc_glcd(unsigned char byte, __bit cd, __bit cs){
                                   1822 ;	-----------------------------------------
                                   1823 ;	 function esc_glcd
                                   1824 ;	-----------------------------------------
      000188                       1825 _esc_glcd:
      000188 AF 82            [24] 1826 	mov	r7,dpl
                           0000F6  1827 	C$output_glcd.h$55$1$30 ==.
                                   1828 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:55: while(le_glcd(CO, cs) & 0x80); // Espera enquanto BUSY for 1
      00018A                       1829 00101$:
      00018A C2 01            [12] 1830 	clr	_le_glcd_PARM_1
      00018C A2 04            [12] 1831 	mov	c,_esc_glcd_PARM_3
      00018E 92 02            [24] 1832 	mov	_le_glcd_PARM_2,c
      000190 C0 07            [24] 1833 	push	ar7
      000192 12 01 4F         [24] 1834 	lcall	_le_glcd
      000195 E5 82            [12] 1835 	mov	a,dpl
      000197 D0 07            [24] 1836 	pop	ar7
      000199 20 E7 EE         [24] 1837 	jb	acc.7,00101$
                           000108  1838 	C$output_glcd.h$57$1$30 ==.
                                   1839 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:57: RW = LO;
      00019C C2 A3            [12] 1840 	clr	_P2_3
                           00010A  1841 	C$output_glcd.h$58$1$30 ==.
                                   1842 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:58: CS1 = cs;
      00019E A2 04            [12] 1843 	mov	c,_esc_glcd_PARM_3
      0001A0 92 A0            [24] 1844 	mov	_P2_0,c
                           00010E  1845 	C$output_glcd.h$59$1$30 ==.
                                   1846 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:59: CS2 = !cs;
      0001A2 A2 04            [12] 1847 	mov	c,_esc_glcd_PARM_3
      0001A4 B3               [12] 1848 	cpl	c
      0001A5 92 A1            [24] 1849 	mov	_P2_1,c
                           000113  1850 	C$output_glcd.h$60$1$30 ==.
                                   1851 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:60: RS = cd;
      0001A7 A2 03            [12] 1852 	mov	c,_esc_glcd_PARM_2
      0001A9 92 A2            [24] 1853 	mov	_P2_2,c
                           000117  1854 	C$output_glcd.h$61$1$30 ==.
                                   1855 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:61: SFRPAGE=CONFIG_PAGE;
      0001AB 75 84 0F         [24] 1856 	mov	_SFRPAGE,#0x0f
                           00011A  1857 	C$output_glcd.h$62$1$30 ==.
                                   1858 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:62: DB = byte;
      0001AE 8F C8            [24] 1859 	mov	_P4,r7
                           00011C  1860 	C$output_glcd.h$63$1$30 ==.
                                   1861 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:63: SFRPAGE=LEGACY_PAGE;
      0001B0 75 84 00         [24] 1862 	mov	_SFRPAGE,#0x00
                           00011F  1863 	C$output_glcd.h$64$1$30 ==.
                                   1864 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:64: NOP4();
      0001B3 00               [12] 1865 	NOP	
      0001B4 00               [12] 1866 	NOP	
      0001B5 00               [12] 1867 	NOP	
      0001B6 00               [12] 1868 	NOP	
                           000123  1869 	C$output_glcd.h$66$1$30 ==.
                                   1870 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:66: E = HI;
      0001B7 D2 A4            [12] 1871 	setb	_P2_4
                           000125  1872 	C$output_glcd.h$67$1$30 ==.
                                   1873 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:67: NOP12();
      0001B9 00               [12] 1874 	NOP	
      0001BA 00               [12] 1875 	NOP	
      0001BB 00               [12] 1876 	NOP	
      0001BC 00               [12] 1877 	NOP	
      0001BD 00               [12] 1878 	NOP	
      0001BE 00               [12] 1879 	NOP	
      0001BF 00               [12] 1880 	NOP	
      0001C0 00               [12] 1881 	NOP	
      0001C1 00               [12] 1882 	NOP	
      0001C2 00               [12] 1883 	NOP	
      0001C3 00               [12] 1884 	NOP	
      0001C4 00               [12] 1885 	NOP	
                           000131  1886 	C$output_glcd.h$69$1$30 ==.
                                   1887 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:69: E = LO;
      0001C5 C2 A4            [12] 1888 	clr	_P2_4
                           000133  1889 	C$output_glcd.h$70$1$30 ==.
                                   1890 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:70: SFRPAGE=CONFIG_PAGE;
      0001C7 75 84 0F         [24] 1891 	mov	_SFRPAGE,#0x0f
                           000136  1892 	C$output_glcd.h$71$1$30 ==.
                                   1893 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:71: DB = 0xff; // Para que a porta funcione como um entrada de novo sem nenhum problema
      0001CA 75 C8 FF         [24] 1894 	mov	_P4,#0xff
                           000139  1895 	C$output_glcd.h$72$1$30 ==.
                                   1896 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:72: SFRPAGE=LEGACY_PAGE;
      0001CD 75 84 00         [24] 1897 	mov	_SFRPAGE,#0x00
                           00013C  1898 	C$output_glcd.h$73$1$30 ==.
                                   1899 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:73: RW = HI; // RW == P2_3 sao usados pelo GLCD e precisa ser setado 1 para ser usado por outra funcao de outro componente
      0001D0 D2 A3            [12] 1900 	setb	_P2_3
                           00013E  1901 	C$output_glcd.h$74$1$30 ==.
                                   1902 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:74: NOP12();
      0001D2 00               [12] 1903 	NOP	
      0001D3 00               [12] 1904 	NOP	
      0001D4 00               [12] 1905 	NOP	
      0001D5 00               [12] 1906 	NOP	
      0001D6 00               [12] 1907 	NOP	
      0001D7 00               [12] 1908 	NOP	
      0001D8 00               [12] 1909 	NOP	
      0001D9 00               [12] 1910 	NOP	
      0001DA 00               [12] 1911 	NOP	
      0001DB 00               [12] 1912 	NOP	
      0001DC 00               [12] 1913 	NOP	
      0001DD 00               [12] 1914 	NOP	
                           00014A  1915 	C$output_glcd.h$75$1$30 ==.
                           00014A  1916 	XG$esc_glcd$0$0 ==.
      0001DE 22               [24] 1917 	ret
                                   1918 ;------------------------------------------------------------
                                   1919 ;Allocation info for local variables in function 'init_GLCD'
                                   1920 ;------------------------------------------------------------
                                   1921 ;cs                        Allocated to registers r7 
                                   1922 ;------------------------------------------------------------
                           00014B  1923 	G$init_GLCD$0$0 ==.
                           00014B  1924 	C$output_glcd.h$77$1$30 ==.
                                   1925 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:77: void init_GLCD(){
                                   1926 ;	-----------------------------------------
                                   1927 ;	 function init_GLCD
                                   1928 ;	-----------------------------------------
      0001DF                       1929 _init_GLCD:
                           00014B  1930 	C$output_glcd.h$82$1$31 ==.
                                   1931 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:82: E = LO;
      0001DF C2 A4            [12] 1932 	clr	_P2_4
                           00014D  1933 	C$output_glcd.h$83$1$31 ==.
                                   1934 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:83: RST = HI;
      0001E1 D2 A5            [12] 1935 	setb	_P2_5
                           00014F  1936 	C$output_glcd.h$84$1$31 ==.
                                   1937 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:84: CS1 = HI;
      0001E3 D2 A0            [12] 1938 	setb	_P2_0
                           000151  1939 	C$output_glcd.h$85$1$31 ==.
                                   1940 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:85: CS2 = HI;
      0001E5 D2 A1            [12] 1941 	setb	_P2_1
                           000153  1942 	C$output_glcd.h$86$1$31 ==.
                                   1943 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:86: SFRPAGE=CONFIG_PAGE;
      0001E7 75 84 0F         [24] 1944 	mov	_SFRPAGE,#0x0f
                           000156  1945 	C$output_glcd.h$87$1$31 ==.
                                   1946 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:87: DB = 0xff;
      0001EA 75 C8 FF         [24] 1947 	mov	_P4,#0xff
                           000159  1948 	C$output_glcd.h$88$1$31 ==.
                                   1949 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:88: SFRPAGE=LEGACY_PAGE;
      0001ED 75 84 00         [24] 1950 	mov	_SFRPAGE,#0x00
                           00015C  1951 	C$output_glcd.h$90$1$31 ==.
                                   1952 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:90: while(cs<2){
      0001F0 7F 00            [12] 1953 	mov	r7,#0x00
      0001F2                       1954 00104$:
      0001F2 BF 02 00         [24] 1955 	cjne	r7,#0x02,00119$
      0001F5                       1956 00119$:
      0001F5 50 4E            [24] 1957 	jnc	00107$
                           000163  1958 	C$output_glcd.h$92$2$32 ==.
                                   1959 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:92: while(le_glcd(CO, cs) & 0x10);
      0001F7                       1960 00101$:
      0001F7 EF               [12] 1961 	mov	a,r7
      0001F8 24 FF            [12] 1962 	add	a,#0xff
      0001FA 92 05            [24] 1963 	mov	_init_GLCD_sloc0_1_0,c
      0001FC C2 01            [12] 1964 	clr	_le_glcd_PARM_1
      0001FE A2 05            [12] 1965 	mov	c,_init_GLCD_sloc0_1_0
      000200 92 02            [24] 1966 	mov	_le_glcd_PARM_2,c
      000202 C0 07            [24] 1967 	push	ar7
      000204 12 01 4F         [24] 1968 	lcall	_le_glcd
      000207 E5 82            [12] 1969 	mov	a,dpl
      000209 D0 07            [24] 1970 	pop	ar7
      00020B 20 E4 E9         [24] 1971 	jb	acc.4,00101$
                           00017A  1972 	C$output_glcd.h$95$2$32 ==.
                                   1973 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:95: esc_glcd(0x3f, CO, cs);
      00020E C2 03            [12] 1974 	clr	_esc_glcd_PARM_2
      000210 A2 05            [12] 1975 	mov	c,_init_GLCD_sloc0_1_0
      000212 92 04            [24] 1976 	mov	_esc_glcd_PARM_3,c
      000214 75 82 3F         [24] 1977 	mov	dpl,#0x3f
      000217 C0 07            [24] 1978 	push	ar7
      000219 12 01 88         [24] 1979 	lcall	_esc_glcd
                           000188  1980 	C$output_glcd.h$98$2$32 ==.
                                   1981 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:98: esc_glcd(0x40, CO, cs); // Y
      00021C C2 03            [12] 1982 	clr	_esc_glcd_PARM_2
      00021E A2 05            [12] 1983 	mov	c,_init_GLCD_sloc0_1_0
      000220 92 04            [24] 1984 	mov	_esc_glcd_PARM_3,c
      000222 75 82 40         [24] 1985 	mov	dpl,#0x40
      000225 12 01 88         [24] 1986 	lcall	_esc_glcd
                           000194  1987 	C$output_glcd.h$99$2$32 ==.
                                   1988 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:99: esc_glcd(0xb8, CO, cs); // X
      000228 C2 03            [12] 1989 	clr	_esc_glcd_PARM_2
      00022A A2 05            [12] 1990 	mov	c,_init_GLCD_sloc0_1_0
      00022C 92 04            [24] 1991 	mov	_esc_glcd_PARM_3,c
      00022E 75 82 B8         [24] 1992 	mov	dpl,#0xb8
      000231 12 01 88         [24] 1993 	lcall	_esc_glcd
                           0001A0  1994 	C$output_glcd.h$100$2$32 ==.
                                   1995 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:100: esc_glcd(0xc0, CO, cs); // Z
      000234 C2 03            [12] 1996 	clr	_esc_glcd_PARM_2
      000236 A2 05            [12] 1997 	mov	c,_init_GLCD_sloc0_1_0
      000238 92 04            [24] 1998 	mov	_esc_glcd_PARM_3,c
      00023A 75 82 C0         [24] 1999 	mov	dpl,#0xc0
      00023D 12 01 88         [24] 2000 	lcall	_esc_glcd
      000240 D0 07            [24] 2001 	pop	ar7
                           0001AE  2002 	C$output_glcd.h$101$2$32 ==.
                                   2003 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:101: cs++;
      000242 0F               [12] 2004 	inc	r7
      000243 80 AD            [24] 2005 	sjmp	00104$
      000245                       2006 00107$:
                           0001B1  2007 	C$output_glcd.h$103$1$31 ==.
                           0001B1  2008 	XG$init_GLCD$0$0 ==.
      000245 22               [24] 2009 	ret
                                   2010 ;------------------------------------------------------------
                                   2011 ;Allocation info for local variables in function 'conf_Y'
                                   2012 ;------------------------------------------------------------
                                   2013 ;y                         Allocated to registers r7 
                                   2014 ;------------------------------------------------------------
                           0001B2  2015 	G$conf_Y$0$0 ==.
                           0001B2  2016 	C$output_glcd.h$105$1$31 ==.
                                   2017 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:105: void conf_Y(unsigned char y, __bit cs){
                                   2018 ;	-----------------------------------------
                                   2019 ;	 function conf_Y
                                   2020 ;	-----------------------------------------
      000246                       2021 _conf_Y:
      000246 AF 82            [24] 2022 	mov	r7,dpl
                           0001B4  2023 	C$output_glcd.h$108$1$34 ==.
                                   2024 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:108: y &= 0x3f; // para limitar o valor de Y de 0 ate 63
      000248 53 07 3F         [24] 2025 	anl	ar7,#0x3f
                           0001B7  2026 	C$output_glcd.h$109$1$34 ==.
                                   2027 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:109: esc_glcd(0x40 | y, CO, cs);
      00024B 74 40            [12] 2028 	mov	a,#0x40
      00024D 4F               [12] 2029 	orl	a,r7
      00024E F5 82            [12] 2030 	mov	dpl,a
      000250 C2 03            [12] 2031 	clr	_esc_glcd_PARM_2
      000252 A2 06            [12] 2032 	mov	c,_conf_Y_PARM_2
      000254 92 04            [24] 2033 	mov	_esc_glcd_PARM_3,c
      000256 12 01 88         [24] 2034 	lcall	_esc_glcd
                           0001C5  2035 	C$output_glcd.h$110$1$34 ==.
                           0001C5  2036 	XG$conf_Y$0$0 ==.
      000259 22               [24] 2037 	ret
                                   2038 ;------------------------------------------------------------
                                   2039 ;Allocation info for local variables in function 'conf_pag'
                                   2040 ;------------------------------------------------------------
                                   2041 ;pag                       Allocated to registers r7 
                                   2042 ;------------------------------------------------------------
                           0001C6  2043 	G$conf_pag$0$0 ==.
                           0001C6  2044 	C$output_glcd.h$113$1$34 ==.
                                   2045 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:113: void conf_pag(unsigned char pag, __bit cs){
                                   2046 ;	-----------------------------------------
                                   2047 ;	 function conf_pag
                                   2048 ;	-----------------------------------------
      00025A                       2049 _conf_pag:
      00025A AF 82            [24] 2050 	mov	r7,dpl
                           0001C8  2051 	C$output_glcd.h$116$1$36 ==.
                                   2052 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:116: pag &= 0x07; // Para limitar o valor de X de 0 ate 7
      00025C 53 07 07         [24] 2053 	anl	ar7,#0x07
                           0001CB  2054 	C$output_glcd.h$117$1$36 ==.
                                   2055 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:117: esc_glcd(0xb8 | pag, CO, cs);
      00025F 74 B8            [12] 2056 	mov	a,#0xb8
      000261 4F               [12] 2057 	orl	a,r7
      000262 F5 82            [12] 2058 	mov	dpl,a
      000264 C2 03            [12] 2059 	clr	_esc_glcd_PARM_2
      000266 A2 07            [12] 2060 	mov	c,_conf_pag_PARM_2
      000268 92 04            [24] 2061 	mov	_esc_glcd_PARM_3,c
      00026A 12 01 88         [24] 2062 	lcall	_esc_glcd
                           0001D9  2063 	C$output_glcd.h$118$1$36 ==.
                           0001D9  2064 	XG$conf_pag$0$0 ==.
      00026D 22               [24] 2065 	ret
                                   2066 ;------------------------------------------------------------
                                   2067 ;Allocation info for local variables in function 'limpa_glcd'
                                   2068 ;------------------------------------------------------------
                                   2069 ;x                         Allocated to registers r7 
                                   2070 ;y                         Allocated to registers r6 
                                   2071 ;------------------------------------------------------------
                           0001DA  2072 	G$limpa_glcd$0$0 ==.
                           0001DA  2073 	C$output_glcd.h$120$1$36 ==.
                                   2074 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:120: void limpa_glcd(__bit cs){
                                   2075 ;	-----------------------------------------
                                   2076 ;	 function limpa_glcd
                                   2077 ;	-----------------------------------------
      00026E                       2078 _limpa_glcd:
                           0001DA  2079 	C$output_glcd.h$125$1$38 ==.
                                   2080 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:125: for(x=0; x<8; x++){
      00026E 7F 00            [12] 2081 	mov	r7,#0x00
      000270                       2082 00105$:
                           0001DC  2083 	C$output_glcd.h$126$2$39 ==.
                                   2084 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:126: conf_pag(x, cs);
      000270 A2 08            [12] 2085 	mov	c,_limpa_glcd_PARM_1
      000272 92 07            [24] 2086 	mov	_conf_pag_PARM_2,c
      000274 8F 82            [24] 2087 	mov	dpl,r7
      000276 C0 07            [24] 2088 	push	ar7
      000278 12 02 5A         [24] 2089 	lcall	_conf_pag
                           0001E7  2090 	C$output_glcd.h$127$2$39 ==.
                                   2091 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:127: conf_Y(0, cs);
      00027B A2 08            [12] 2092 	mov	c,_limpa_glcd_PARM_1
      00027D 92 06            [24] 2093 	mov	_conf_Y_PARM_2,c
      00027F 75 82 00         [24] 2094 	mov	dpl,#0x00
      000282 12 02 46         [24] 2095 	lcall	_conf_Y
      000285 D0 07            [24] 2096 	pop	ar7
                           0001F3  2097 	C$output_glcd.h$128$1$38 ==.
                                   2098 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:128: for(y=0; y<64; y++){
      000287 7E 00            [12] 2099 	mov	r6,#0x00
      000289                       2100 00103$:
                           0001F5  2101 	C$output_glcd.h$129$3$40 ==.
                                   2102 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:129: esc_glcd(0x00, DA, cs);
      000289 D2 03            [12] 2103 	setb	_esc_glcd_PARM_2
      00028B A2 08            [12] 2104 	mov	c,_limpa_glcd_PARM_1
      00028D 92 04            [24] 2105 	mov	_esc_glcd_PARM_3,c
      00028F 75 82 00         [24] 2106 	mov	dpl,#0x00
      000292 C0 07            [24] 2107 	push	ar7
      000294 C0 06            [24] 2108 	push	ar6
      000296 12 01 88         [24] 2109 	lcall	_esc_glcd
      000299 D0 06            [24] 2110 	pop	ar6
      00029B D0 07            [24] 2111 	pop	ar7
                           000209  2112 	C$output_glcd.h$128$2$39 ==.
                                   2113 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:128: for(y=0; y<64; y++){
      00029D 0E               [12] 2114 	inc	r6
      00029E BE 40 00         [24] 2115 	cjne	r6,#0x40,00120$
      0002A1                       2116 00120$:
      0002A1 40 E6            [24] 2117 	jc	00103$
                           00020F  2118 	C$output_glcd.h$125$1$38 ==.
                                   2119 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:125: for(x=0; x<8; x++){
      0002A3 0F               [12] 2120 	inc	r7
      0002A4 BF 08 00         [24] 2121 	cjne	r7,#0x08,00122$
      0002A7                       2122 00122$:
      0002A7 40 C7            [24] 2123 	jc	00105$
                           000215  2124 	C$output_glcd.h$132$1$38 ==.
                           000215  2125 	XG$limpa_glcd$0$0 ==.
      0002A9 22               [24] 2126 	ret
                                   2127 ;------------------------------------------------------------
                                   2128 ;Allocation info for local variables in function 'caractere_para_ascii'
                                   2129 ;------------------------------------------------------------
                                   2130 ;cod_ascii                 Allocated to registers r7 
                                   2131 ;------------------------------------------------------------
                           000216  2132 	G$caractere_para_ascii$0$0 ==.
                           000216  2133 	C$output_glcd.h$134$1$38 ==.
                                   2134 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:134: unsigned char caractere_para_ascii(unsigned char cod_ascii){
                                   2135 ;	-----------------------------------------
                                   2136 ;	 function caractere_para_ascii
                                   2137 ;	-----------------------------------------
      0002AA                       2138 _caractere_para_ascii:
      0002AA AF 82            [24] 2139 	mov	r7,dpl
                           000218  2140 	C$output_glcd.h$137$1$42 ==.
                                   2141 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:137: if(cod_ascii >= 32 && cod_ascii <= 127){
      0002AC BF 20 00         [24] 2142 	cjne	r7,#0x20,00118$
      0002AF                       2143 00118$:
      0002AF 40 0C            [24] 2144 	jc	00104$
      0002B1 EF               [12] 2145 	mov	a,r7
      0002B2 24 80            [12] 2146 	add	a,#0xff - 0x7f
      0002B4 40 07            [24] 2147 	jc	00104$
                           000222  2148 	C$output_glcd.h$138$2$43 ==.
                                   2149 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:138: return cod_ascii - 32;
      0002B6 EF               [12] 2150 	mov	a,r7
      0002B7 24 E0            [12] 2151 	add	a,#0xe0
      0002B9 F5 82            [12] 2152 	mov	dpl,a
      0002BB 80 0B            [24] 2153 	sjmp	00107$
      0002BD                       2154 00104$:
                           000229  2155 	C$output_glcd.h$139$1$42 ==.
                                   2156 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:139: }else if(cod_ascii == 176){
      0002BD BF B0 05         [24] 2157 	cjne	r7,#0xb0,00105$
                           00022C  2158 	C$output_glcd.h$140$2$44 ==.
                                   2159 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:140: return 96;
      0002C0 75 82 60         [24] 2160 	mov	dpl,#0x60
      0002C3 80 03            [24] 2161 	sjmp	00107$
      0002C5                       2162 00105$:
                           000231  2163 	C$output_glcd.h$142$1$42 ==.
                                   2164 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:142: return 0;
      0002C5 75 82 00         [24] 2165 	mov	dpl,#0x00
      0002C8                       2166 00107$:
                           000234  2167 	C$output_glcd.h$143$1$42 ==.
                           000234  2168 	XG$caractere_para_ascii$0$0 ==.
      0002C8 22               [24] 2169 	ret
                                   2170 ;------------------------------------------------------------
                                   2171 ;Allocation info for local variables in function 'escreve_caractere'
                                   2172 ;------------------------------------------------------------
                                   2173 ;c                         Allocated to registers r7 
                                   2174 ;linha                     Allocated to registers r7 
                                   2175 ;------------------------------------------------------------
                           000235  2176 	G$escreve_caractere$0$0 ==.
                           000235  2177 	C$output_glcd.h$145$1$42 ==.
                                   2178 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:145: void escreve_caractere(char c, __bit cs){
                                   2179 ;	-----------------------------------------
                                   2180 ;	 function escreve_caractere
                                   2181 ;	-----------------------------------------
      0002C9                       2182 _escreve_caractere:
                           000235  2183 	C$output_glcd.h$148$1$46 ==.
                                   2184 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:148: unsigned char linha = caractere_para_ascii(c);
      0002C9 12 02 AA         [24] 2185 	lcall	_caractere_para_ascii
                           000238  2186 	C$output_glcd.h$150$1$46 ==.
                                   2187 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:150: esc_glcd(fonte[linha][0], DA, cs);
      0002CC E5 82            [12] 2188 	mov	a,dpl
      0002CE 75 F0 05         [24] 2189 	mov	b,#0x05
      0002D1 A4               [48] 2190 	mul	ab
      0002D2 24 61            [12] 2191 	add	a,#_fonte
      0002D4 FE               [12] 2192 	mov	r6,a
      0002D5 74 0F            [12] 2193 	mov	a,#(_fonte >> 8)
      0002D7 35 F0            [12] 2194 	addc	a,b
      0002D9 FF               [12] 2195 	mov	r7,a
      0002DA 8E 82            [24] 2196 	mov	dpl,r6
      0002DC 8F 83            [24] 2197 	mov	dph,r7
      0002DE E4               [12] 2198 	clr	a
      0002DF 93               [24] 2199 	movc	a,@a+dptr
      0002E0 FD               [12] 2200 	mov	r5,a
      0002E1 D2 03            [12] 2201 	setb	_esc_glcd_PARM_2
      0002E3 A2 09            [12] 2202 	mov	c,_escreve_caractere_PARM_2
      0002E5 92 04            [24] 2203 	mov	_esc_glcd_PARM_3,c
      0002E7 8D 82            [24] 2204 	mov	dpl,r5
      0002E9 C0 07            [24] 2205 	push	ar7
      0002EB C0 06            [24] 2206 	push	ar6
      0002ED 12 01 88         [24] 2207 	lcall	_esc_glcd
      0002F0 D0 06            [24] 2208 	pop	ar6
      0002F2 D0 07            [24] 2209 	pop	ar7
                           000260  2210 	C$output_glcd.h$151$1$46 ==.
                                   2211 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:151: esc_glcd(fonte[linha][1], DA, cs);
      0002F4 8E 82            [24] 2212 	mov	dpl,r6
      0002F6 8F 83            [24] 2213 	mov	dph,r7
      0002F8 A3               [24] 2214 	inc	dptr
      0002F9 E4               [12] 2215 	clr	a
      0002FA 93               [24] 2216 	movc	a,@a+dptr
      0002FB FD               [12] 2217 	mov	r5,a
      0002FC D2 03            [12] 2218 	setb	_esc_glcd_PARM_2
      0002FE A2 09            [12] 2219 	mov	c,_escreve_caractere_PARM_2
      000300 92 04            [24] 2220 	mov	_esc_glcd_PARM_3,c
      000302 8D 82            [24] 2221 	mov	dpl,r5
      000304 C0 07            [24] 2222 	push	ar7
      000306 C0 06            [24] 2223 	push	ar6
      000308 12 01 88         [24] 2224 	lcall	_esc_glcd
      00030B D0 06            [24] 2225 	pop	ar6
      00030D D0 07            [24] 2226 	pop	ar7
                           00027B  2227 	C$output_glcd.h$152$1$46 ==.
                                   2228 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:152: esc_glcd(fonte[linha][2], DA, cs);
      00030F 8E 82            [24] 2229 	mov	dpl,r6
      000311 8F 83            [24] 2230 	mov	dph,r7
      000313 A3               [24] 2231 	inc	dptr
      000314 A3               [24] 2232 	inc	dptr
      000315 E4               [12] 2233 	clr	a
      000316 93               [24] 2234 	movc	a,@a+dptr
      000317 FD               [12] 2235 	mov	r5,a
      000318 D2 03            [12] 2236 	setb	_esc_glcd_PARM_2
      00031A A2 09            [12] 2237 	mov	c,_escreve_caractere_PARM_2
      00031C 92 04            [24] 2238 	mov	_esc_glcd_PARM_3,c
      00031E 8D 82            [24] 2239 	mov	dpl,r5
      000320 C0 07            [24] 2240 	push	ar7
      000322 C0 06            [24] 2241 	push	ar6
      000324 12 01 88         [24] 2242 	lcall	_esc_glcd
      000327 D0 06            [24] 2243 	pop	ar6
      000329 D0 07            [24] 2244 	pop	ar7
                           000297  2245 	C$output_glcd.h$153$1$46 ==.
                                   2246 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:153: esc_glcd(fonte[linha][3], DA, cs);
      00032B 8E 82            [24] 2247 	mov	dpl,r6
      00032D 8F 83            [24] 2248 	mov	dph,r7
      00032F A3               [24] 2249 	inc	dptr
      000330 A3               [24] 2250 	inc	dptr
      000331 A3               [24] 2251 	inc	dptr
      000332 E4               [12] 2252 	clr	a
      000333 93               [24] 2253 	movc	a,@a+dptr
      000334 FD               [12] 2254 	mov	r5,a
      000335 D2 03            [12] 2255 	setb	_esc_glcd_PARM_2
      000337 A2 09            [12] 2256 	mov	c,_escreve_caractere_PARM_2
      000339 92 04            [24] 2257 	mov	_esc_glcd_PARM_3,c
      00033B 8D 82            [24] 2258 	mov	dpl,r5
      00033D C0 07            [24] 2259 	push	ar7
      00033F C0 06            [24] 2260 	push	ar6
      000341 12 01 88         [24] 2261 	lcall	_esc_glcd
      000344 D0 06            [24] 2262 	pop	ar6
      000346 D0 07            [24] 2263 	pop	ar7
                           0002B4  2264 	C$output_glcd.h$154$1$46 ==.
                                   2265 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:154: esc_glcd(fonte[linha][4], DA, cs);
      000348 8E 82            [24] 2266 	mov	dpl,r6
      00034A 8F 83            [24] 2267 	mov	dph,r7
      00034C A3               [24] 2268 	inc	dptr
      00034D A3               [24] 2269 	inc	dptr
      00034E A3               [24] 2270 	inc	dptr
      00034F A3               [24] 2271 	inc	dptr
      000350 E4               [12] 2272 	clr	a
      000351 93               [24] 2273 	movc	a,@a+dptr
      000352 FF               [12] 2274 	mov	r7,a
      000353 D2 03            [12] 2275 	setb	_esc_glcd_PARM_2
      000355 A2 09            [12] 2276 	mov	c,_escreve_caractere_PARM_2
      000357 92 04            [24] 2277 	mov	_esc_glcd_PARM_3,c
      000359 8F 82            [24] 2278 	mov	dpl,r7
      00035B 12 01 88         [24] 2279 	lcall	_esc_glcd
                           0002CA  2280 	C$output_glcd.h$155$1$46 ==.
                                   2281 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:155: esc_glcd(0x00, DA, cs);
      00035E D2 03            [12] 2282 	setb	_esc_glcd_PARM_2
      000360 A2 09            [12] 2283 	mov	c,_escreve_caractere_PARM_2
      000362 92 04            [24] 2284 	mov	_esc_glcd_PARM_3,c
      000364 75 82 00         [24] 2285 	mov	dpl,#0x00
      000367 12 01 88         [24] 2286 	lcall	_esc_glcd
                           0002D6  2287 	C$output_glcd.h$156$1$46 ==.
                                   2288 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:156: esc_glcd(0x00, DA, cs);
      00036A D2 03            [12] 2289 	setb	_esc_glcd_PARM_2
      00036C A2 09            [12] 2290 	mov	c,_escreve_caractere_PARM_2
      00036E 92 04            [24] 2291 	mov	_esc_glcd_PARM_3,c
      000370 75 82 00         [24] 2292 	mov	dpl,#0x00
      000373 12 01 88         [24] 2293 	lcall	_esc_glcd
                           0002E2  2294 	C$output_glcd.h$157$1$46 ==.
                                   2295 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:157: esc_glcd(0x00, DA, cs);
      000376 D2 03            [12] 2296 	setb	_esc_glcd_PARM_2
      000378 A2 09            [12] 2297 	mov	c,_escreve_caractere_PARM_2
      00037A 92 04            [24] 2298 	mov	_esc_glcd_PARM_3,c
      00037C 75 82 00         [24] 2299 	mov	dpl,#0x00
      00037F 12 01 88         [24] 2300 	lcall	_esc_glcd
                           0002EE  2301 	C$output_glcd.h$158$1$46 ==.
                           0002EE  2302 	XG$escreve_caractere$0$0 ==.
      000382 22               [24] 2303 	ret
                                   2304 ;------------------------------------------------------------
                                   2305 ;Allocation info for local variables in function 'putchar'
                                   2306 ;------------------------------------------------------------
                                   2307 ;c                         Allocated to registers r7 
                                   2308 ;------------------------------------------------------------
                           0002EF  2309 	G$putchar$0$0 ==.
                           0002EF  2310 	C$output_glcd.h$161$1$46 ==.
                                   2311 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:161: void putchar(char c){
                                   2312 ;	-----------------------------------------
                                   2313 ;	 function putchar
                                   2314 ;	-----------------------------------------
      000383                       2315 _putchar:
      000383 AF 82            [24] 2316 	mov	r7,dpl
                           0002F1  2317 	C$output_glcd.h$164$1$48 ==.
                                   2318 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:164: WDTCN = 0xa5;
      000385 75 FF A5         [24] 2319 	mov	_WDTCN,#0xa5
                           0002F4  2320 	C$output_glcd.h$166$1$48 ==.
                                   2321 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:166: if(c<=8){
      000388 EF               [12] 2322 	mov	a,r7
      000389 24 F7            [12] 2323 	add	a,#0xff - 0x08
      00038B 40 2C            [24] 2324 	jc	00112$
                           0002F9  2325 	C$output_glcd.h$167$2$49 ==.
                                   2326 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:167: conf_pag(c-1, ESQ);
      00038D EF               [12] 2327 	mov	a,r7
      00038E 14               [12] 2328 	dec	a
      00038F FE               [12] 2329 	mov	r6,a
      000390 C2 07            [12] 2330 	clr	_conf_pag_PARM_2
      000392 8E 82            [24] 2331 	mov	dpl,r6
      000394 C0 06            [24] 2332 	push	ar6
      000396 12 02 5A         [24] 2333 	lcall	_conf_pag
                           000305  2334 	C$output_glcd.h$168$2$49 ==.
                                   2335 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:168: conf_Y(0, ESQ);
      000399 C2 06            [12] 2336 	clr	_conf_Y_PARM_2
      00039B 75 82 00         [24] 2337 	mov	dpl,#0x00
      00039E 12 02 46         [24] 2338 	lcall	_conf_Y
      0003A1 D0 06            [24] 2339 	pop	ar6
                           00030F  2340 	C$output_glcd.h$169$2$49 ==.
                                   2341 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:169: conf_pag(c-1, DIR);
      0003A3 D2 07            [12] 2342 	setb	_conf_pag_PARM_2
      0003A5 8E 82            [24] 2343 	mov	dpl,r6
      0003A7 12 02 5A         [24] 2344 	lcall	_conf_pag
                           000316  2345 	C$output_glcd.h$170$2$49 ==.
                                   2346 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:170: conf_Y(0, DIR);
      0003AA D2 06            [12] 2347 	setb	_conf_Y_PARM_2
      0003AC 75 82 00         [24] 2348 	mov	dpl,#0x00
      0003AF 12 02 46         [24] 2349 	lcall	_conf_Y
                           00031E  2350 	C$output_glcd.h$171$2$49 ==.
                                   2351 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:171: conta_caractere = 0;
      0003B2 75 08 00         [24] 2352 	mov	_conta_caractere,#0x00
                           000321  2353 	C$output_glcd.h$172$2$49 ==.
                                   2354 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:172: terminal_ativo = 0;
      0003B5 C2 00            [12] 2355 	clr	_terminal_ativo
      0003B7 80 22            [24] 2356 	sjmp	00114$
      0003B9                       2357 00112$:
                           000325  2358 	C$output_glcd.h$174$1$48 ==.
                                   2359 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:174: }else if(c == 9 || terminal_ativo == 1){
      0003B9 BF 09 02         [24] 2360 	cjne	r7,#0x09,00132$
      0003BC 80 03            [24] 2361 	sjmp	00107$
      0003BE                       2362 00132$:
      0003BE 30 00 09         [24] 2363 	jnb	_terminal_ativo,00108$
      0003C1                       2364 00107$:
                           00032D  2365 	C$output_glcd.h$175$2$50 ==.
                                   2366 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:175: terminal_ativo = 1;
      0003C1 D2 00            [12] 2367 	setb	_terminal_ativo
                           00032F  2368 	C$output_glcd.h$176$2$50 ==.
                                   2369 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:176: SBUF0 = c;
      0003C3 8F 99            [24] 2370 	mov	_SBUF0,r7
                           000331  2371 	C$output_glcd.h$177$2$50 ==.
                                   2372 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:177: while(TI0==0);
      0003C5                       2373 00101$:
                           000331  2374 	C$output_glcd.h$178$2$50 ==.
                                   2375 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:178: TI0 = 0;
      0003C5 10 99 13         [24] 2376 	jbc	_TI0,00114$
      0003C8 80 FB            [24] 2377 	sjmp	00101$
      0003CA                       2378 00108$:
                           000336  2379 	C$output_glcd.h$181$2$51 ==.
                                   2380 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:181: if(conta_caractere<8){
      0003CA 74 F8            [12] 2381 	mov	a,#0x100 - 0x08
      0003CC 25 08            [12] 2382 	add	a,_conta_caractere
                           00033A  2383 	C$output_glcd.h$182$3$52 ==.
                                   2384 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:182: lado = ESQ;
                           00033A  2385 	C$output_glcd.h$184$3$53 ==.
                                   2386 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:184: lado = DIR;
      0003CE 92 0A            [24] 2387 	mov	_putchar_lado_1_48,c
                           00033C  2388 	C$output_glcd.h$187$2$51 ==.
                                   2389 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:187: escreve_caractere(c, lado);
      0003D0 A2 0A            [12] 2390 	mov	c,_putchar_lado_1_48
      0003D2 92 09            [24] 2391 	mov	_escreve_caractere_PARM_2,c
      0003D4 8F 82            [24] 2392 	mov	dpl,r7
      0003D6 12 02 C9         [24] 2393 	lcall	_escreve_caractere
                           000345  2394 	C$output_glcd.h$188$2$51 ==.
                                   2395 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:188: conta_caractere++;
      0003D9 05 08            [12] 2396 	inc	_conta_caractere
      0003DB                       2397 00114$:
                           000347  2398 	C$output_glcd.h$190$1$48 ==.
                           000347  2399 	XG$putchar$0$0 ==.
      0003DB 22               [24] 2400 	ret
                                   2401 ;------------------------------------------------------------
                                   2402 ;Allocation info for local variables in function 'setup'
                                   2403 ;------------------------------------------------------------
                           000348  2404 	G$setup$0$0 ==.
                           000348  2405 	C$output_glcd.h$192$1$48 ==.
                                   2406 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:192: void setup(void){
                                   2407 ;	-----------------------------------------
                                   2408 ;	 function setup
                                   2409 ;	-----------------------------------------
      0003DC                       2410 _setup:
                           000348  2411 	C$output_glcd.h$193$1$55 ==.
                                   2412 ;	C:\Users\202019050169\Downloads\trabalho\/output_glcd.h:193: SFRPAGE=LEGACY_PAGE;
      0003DC 75 84 00         [24] 2413 	mov	_SFRPAGE,#0x00
                           00034B  2414 	C$output_glcd.h$194$1$55 ==.
                           00034B  2415 	XG$setup$0$0 ==.
      0003DF 22               [24] 2416 	ret
                                   2417 ;------------------------------------------------------------
                                   2418 ;Allocation info for local variables in function 'delay_ms'
                                   2419 ;------------------------------------------------------------
                                   2420 ;t                         Allocated to registers r6 r7 
                                   2421 ;------------------------------------------------------------
                           00034C  2422 	G$delay_ms$0$0 ==.
                           00034C  2423 	C$delay.h$6$1$55 ==.
                                   2424 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:6: void delay_ms(unsigned int t){
                                   2425 ;	-----------------------------------------
                                   2426 ;	 function delay_ms
                                   2427 ;	-----------------------------------------
      0003E0                       2428 _delay_ms:
      0003E0 AE 82            [24] 2429 	mov	r6,dpl
      0003E2 AF 83            [24] 2430 	mov	r7,dph
                           000350  2431 	C$delay.h$7$1$57 ==.
                                   2432 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:7: TMOD |= 0x01;
      0003E4 43 89 01         [24] 2433 	orl	_TMOD,#0x01
                           000353  2434 	C$delay.h$8$1$57 ==.
                                   2435 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:8: TMOD &= ~0x02;
      0003E7 53 89 FD         [24] 2436 	anl	_TMOD,#0xfd
      0003EA                       2437 00106$:
                           000356  2438 	C$delay.h$9$1$57 ==.
                                   2439 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:9: for(;t>0;t--){
      0003EA EE               [12] 2440 	mov	a,r6
      0003EB 4F               [12] 2441 	orl	a,r7
      0003EC 60 19            [24] 2442 	jz	00108$
                           00035A  2443 	C$delay.h$10$2$58 ==.
                                   2444 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:10: WDTCN = 0xa5;
      0003EE 75 FF A5         [24] 2445 	mov	_WDTCN,#0xa5
                           00035D  2446 	C$delay.h$11$2$58 ==.
                                   2447 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:11: TR0 = 0;
      0003F1 C2 8C            [12] 2448 	clr	_TR0
                           00035F  2449 	C$delay.h$12$2$58 ==.
                                   2450 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:12: TF0 = 0;
      0003F3 C2 8D            [12] 2451 	clr	_TF0
                           000361  2452 	C$delay.h$13$2$58 ==.
                                   2453 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:13: TL0 = 0x58;
      0003F5 75 8A 58         [24] 2454 	mov	_TL0,#0x58
                           000364  2455 	C$delay.h$14$2$58 ==.
                                   2456 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:14: TH0 = 0x9E;
      0003F8 75 8C 9E         [24] 2457 	mov	_TH0,#0x9e
                           000367  2458 	C$delay.h$15$2$58 ==.
                                   2459 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:15: TR0 = 1;
      0003FB D2 8C            [12] 2460 	setb	_TR0
                           000369  2461 	C$delay.h$16$2$58 ==.
                                   2462 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:16: while(TF0 == 0);
      0003FD                       2463 00101$:
      0003FD 30 8D FD         [24] 2464 	jnb	_TF0,00101$
                           00036C  2465 	C$delay.h$9$1$57 ==.
                                   2466 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:9: for(;t>0;t--){
      000400 1E               [12] 2467 	dec	r6
      000401 BE FF 01         [24] 2468 	cjne	r6,#0xff,00127$
      000404 1F               [12] 2469 	dec	r7
      000405                       2470 00127$:
      000405 80 E3            [24] 2471 	sjmp	00106$
      000407                       2472 00108$:
                           000373  2473 	C$delay.h$18$1$57 ==.
                           000373  2474 	XG$delay_ms$0$0 ==.
      000407 22               [24] 2475 	ret
                                   2476 ;------------------------------------------------------------
                                   2477 ;Allocation info for local variables in function 'delay_us'
                                   2478 ;------------------------------------------------------------
                                   2479 ;t                         Allocated to registers r6 r7 
                                   2480 ;------------------------------------------------------------
                           000374  2481 	G$delay_us$0$0 ==.
                           000374  2482 	C$delay.h$20$1$57 ==.
                                   2483 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:20: void delay_us(unsigned int t){
                                   2484 ;	-----------------------------------------
                                   2485 ;	 function delay_us
                                   2486 ;	-----------------------------------------
      000408                       2487 _delay_us:
      000408 AE 82            [24] 2488 	mov	r6,dpl
      00040A AF 83            [24] 2489 	mov	r7,dph
                           000378  2490 	C$delay.h$21$1$60 ==.
                                   2491 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:21: TMOD |= 0X02;
      00040C 43 89 02         [24] 2492 	orl	_TMOD,#0x02
                           00037B  2493 	C$delay.h$22$1$60 ==.
                                   2494 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:22: TMOD &= ~0X01;
      00040F 53 89 FE         [24] 2495 	anl	_TMOD,#0xfe
                           00037E  2496 	C$delay.h$23$1$60 ==.
                                   2497 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:23: TR0 = 0;
      000412 C2 8C            [12] 2498 	clr	_TR0
                           000380  2499 	C$delay.h$24$1$60 ==.
                                   2500 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:24: TF0 = 0;
      000414 C2 8D            [12] 2501 	clr	_TF0
                           000382  2502 	C$delay.h$25$1$60 ==.
                                   2503 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:25: TL0 = 0xE7;
      000416 75 8A E7         [24] 2504 	mov	_TL0,#0xe7
                           000385  2505 	C$delay.h$26$1$60 ==.
                                   2506 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:26: TH0 = 0xE7;
      000419 75 8C E7         [24] 2507 	mov	_TH0,#0xe7
                           000388  2508 	C$delay.h$27$1$60 ==.
                                   2509 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:27: TR0 = 1;
      00041C D2 8C            [12] 2510 	setb	_TR0
      00041E                       2511 00106$:
                           00038A  2512 	C$delay.h$28$1$60 ==.
                                   2513 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:28: for(;t>0;t--){
      00041E EE               [12] 2514 	mov	a,r6
      00041F 4F               [12] 2515 	orl	a,r7
      000420 60 0F            [24] 2516 	jz	00108$
                           00038E  2517 	C$delay.h$29$2$61 ==.
                                   2518 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:29: WDTCN = 0xa5;
      000422 75 FF A5         [24] 2519 	mov	_WDTCN,#0xa5
                           000391  2520 	C$delay.h$30$2$61 ==.
                                   2521 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:30: while(TF0 == 0);
      000425                       2522 00101$:
                           000391  2523 	C$delay.h$31$2$61 ==.
                                   2524 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:31: TF0 = 0;
      000425 10 8D 02         [24] 2525 	jbc	_TF0,00126$
      000428 80 FB            [24] 2526 	sjmp	00101$
      00042A                       2527 00126$:
                           000396  2528 	C$delay.h$28$1$60 ==.
                                   2529 ;	C:\Users\202019050169\Downloads\trabalho\/delay.h:28: for(;t>0;t--){
      00042A 1E               [12] 2530 	dec	r6
      00042B BE FF 01         [24] 2531 	cjne	r6,#0xff,00127$
      00042E 1F               [12] 2532 	dec	r7
      00042F                       2533 00127$:
      00042F 80 ED            [24] 2534 	sjmp	00106$
      000431                       2535 00108$:
                           00039D  2536 	C$delay.h$34$1$60 ==.
                           00039D  2537 	XG$delay_us$0$0 ==.
      000431 22               [24] 2538 	ret
                                   2539 ;------------------------------------------------------------
                                   2540 ;Allocation info for local variables in function 'esc_RAM_SPI'
                                   2541 ;------------------------------------------------------------
                                   2542 ;dado                      Allocated with name '_esc_RAM_SPI_PARM_2'
                                   2543 ;end                       Allocated to registers r6 r7 
                                   2544 ;end_l                     Allocated to registers r5 
                                   2545 ;end_h                     Allocated to registers r7 
                                   2546 ;------------------------------------------------------------
                           00039E  2547 	G$esc_RAM_SPI$0$0 ==.
                           00039E  2548 	C$mem_spi.h$17$1$60 ==.
                                   2549 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:17: void esc_RAM_SPI(unsigned int end, unsigned char dado){
                                   2550 ;	-----------------------------------------
                                   2551 ;	 function esc_RAM_SPI
                                   2552 ;	-----------------------------------------
      000432                       2553 _esc_RAM_SPI:
      000432 AE 82            [24] 2554 	mov	r6,dpl
      000434 AF 83            [24] 2555 	mov	r7,dph
                           0003A2  2556 	C$mem_spi.h$18$1$60 ==.
                                   2557 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:18: unsigned char end_l = end, end_h = end>>8;
      000436 8E 05            [24] 2558 	mov	ar5,r6
                           0003A4  2559 	C$mem_spi.h$20$1$63 ==.
                                   2560 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:20: CS = LO;
      000438 C2 A3            [12] 2561 	clr	_P2_3
                           0003A6  2562 	C$mem_spi.h$22$1$63 ==.
                                   2563 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:22: SPI0DAT = 0x02;
      00043A 75 9B 02         [24] 2564 	mov	_SPI0DAT,#0x02
                           0003A9  2565 	C$mem_spi.h$23$1$63 ==.
                                   2566 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:23: while(TXBMT==0); // Espera o shift dos 16 bits serem shiftados
      00043D                       2567 00101$:
      00043D 30 F9 FD         [24] 2568 	jnb	_TXBMT,00101$
                           0003AC  2569 	C$mem_spi.h$25$1$63 ==.
                                   2570 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:25: SPI0DAT = end_h;
      000440 8F 9B            [24] 2571 	mov	_SPI0DAT,r7
                           0003AE  2572 	C$mem_spi.h$26$1$63 ==.
                                   2573 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:26: while(TXBMT==0);
      000442                       2574 00104$:
      000442 30 F9 FD         [24] 2575 	jnb	_TXBMT,00104$
                           0003B1  2576 	C$mem_spi.h$28$1$63 ==.
                                   2577 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:28: SPI0DAT = end_l;
      000445 8D 9B            [24] 2578 	mov	_SPI0DAT,r5
                           0003B3  2579 	C$mem_spi.h$29$1$63 ==.
                                   2580 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:29: while(TXBMT==0);
      000447                       2581 00107$:
      000447 30 F9 FD         [24] 2582 	jnb	_TXBMT,00107$
                           0003B6  2583 	C$mem_spi.h$31$1$63 ==.
                                   2584 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:31: SPI0DAT = dado;
      00044A 85 14 9B         [24] 2585 	mov	_SPI0DAT,_esc_RAM_SPI_PARM_2
                           0003B9  2586 	C$mem_spi.h$32$1$63 ==.
                                   2587 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:32: while(TXBMT==0);
      00044D                       2588 00110$:
      00044D 30 F9 FD         [24] 2589 	jnb	_TXBMT,00110$
                           0003BC  2590 	C$mem_spi.h$34$1$63 ==.
                                   2591 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:34: SPIF = 0; // Reseta valor para receber bit flag
      000450 C2 FF            [12] 2592 	clr	_SPIF
                           0003BE  2593 	C$mem_spi.h$35$1$63 ==.
                                   2594 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:35: while(SPIF==0); // Aguarda a sinalizacao do bit flag do fim da instrucao
      000452                       2595 00113$:
                           0003BE  2596 	C$mem_spi.h$36$1$63 ==.
                                   2597 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:36: SPIF = 0; // Reseta valor para receber bit flag
      000452 10 FF 02         [24] 2598 	jbc	_SPIF,00152$
      000455 80 FB            [24] 2599 	sjmp	00113$
      000457                       2600 00152$:
                           0003C3  2601 	C$mem_spi.h$38$1$63 ==.
                                   2602 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:38: CS = 1;
      000457 D2 A3            [12] 2603 	setb	_P2_3
                           0003C5  2604 	C$mem_spi.h$39$1$63 ==.
                           0003C5  2605 	XG$esc_RAM_SPI$0$0 ==.
      000459 22               [24] 2606 	ret
                                   2607 ;------------------------------------------------------------
                                   2608 ;Allocation info for local variables in function 'le_RAM_SPI'
                                   2609 ;------------------------------------------------------------
                                   2610 ;end                       Allocated to registers r6 r7 
                                   2611 ;end_l                     Allocated to registers r5 
                                   2612 ;end_h                     Allocated to registers r7 
                                   2613 ;------------------------------------------------------------
                           0003C6  2614 	G$le_RAM_SPI$0$0 ==.
                           0003C6  2615 	C$mem_spi.h$41$1$63 ==.
                                   2616 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:41: unsigned char le_RAM_SPI(unsigned int end){
                                   2617 ;	-----------------------------------------
                                   2618 ;	 function le_RAM_SPI
                                   2619 ;	-----------------------------------------
      00045A                       2620 _le_RAM_SPI:
      00045A AE 82            [24] 2621 	mov	r6,dpl
      00045C AF 83            [24] 2622 	mov	r7,dph
                           0003CA  2623 	C$mem_spi.h$42$1$63 ==.
                                   2624 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:42: unsigned char end_l = end, end_h = end>>8;
      00045E 8E 05            [24] 2625 	mov	ar5,r6
                           0003CC  2626 	C$mem_spi.h$44$1$65 ==.
                                   2627 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:44: CS = LO;
      000460 C2 A3            [12] 2628 	clr	_P2_3
                           0003CE  2629 	C$mem_spi.h$46$1$65 ==.
                                   2630 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:46: SPI0DAT = 0x03; 
      000462 75 9B 03         [24] 2631 	mov	_SPI0DAT,#0x03
                           0003D1  2632 	C$mem_spi.h$47$1$65 ==.
                                   2633 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:47: while(TXBMT==0); // Espera o shift dos 16 bits serem shiftados
      000465                       2634 00101$:
      000465 30 F9 FD         [24] 2635 	jnb	_TXBMT,00101$
                           0003D4  2636 	C$mem_spi.h$49$1$65 ==.
                                   2637 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:49: SPI0DAT = end_h;
      000468 8F 9B            [24] 2638 	mov	_SPI0DAT,r7
                           0003D6  2639 	C$mem_spi.h$50$1$65 ==.
                                   2640 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:50: while(TXBMT==0);
      00046A                       2641 00104$:
      00046A 30 F9 FD         [24] 2642 	jnb	_TXBMT,00104$
                           0003D9  2643 	C$mem_spi.h$52$1$65 ==.
                                   2644 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:52: SPI0DAT = end_l;
      00046D 8D 9B            [24] 2645 	mov	_SPI0DAT,r5
                           0003DB  2646 	C$mem_spi.h$53$1$65 ==.
                                   2647 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:53: while(TXBMT==0);
      00046F                       2648 00107$:
      00046F 30 F9 FD         [24] 2649 	jnb	_TXBMT,00107$
                           0003DE  2650 	C$mem_spi.h$55$1$65 ==.
                                   2651 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:55: SPI0DAT = 0x00; // Garantir que o dado foi zerado. Limpar a memoria de dados flash
      000472 75 9B 00         [24] 2652 	mov	_SPI0DAT,#0x00
                           0003E1  2653 	C$mem_spi.h$56$1$65 ==.
                                   2654 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:56: while(TXBMT==0);
      000475                       2655 00110$:
      000475 30 F9 FD         [24] 2656 	jnb	_TXBMT,00110$
                           0003E4  2657 	C$mem_spi.h$58$1$65 ==.
                                   2658 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:58: SPIF = 0;
      000478 C2 FF            [12] 2659 	clr	_SPIF
                           0003E6  2660 	C$mem_spi.h$59$1$65 ==.
                                   2661 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:59: while(SPIF==0);
      00047A                       2662 00113$:
                           0003E6  2663 	C$mem_spi.h$60$1$65 ==.
                                   2664 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:60: SPIF = 0;
      00047A 10 FF 02         [24] 2665 	jbc	_SPIF,00152$
      00047D 80 FB            [24] 2666 	sjmp	00113$
      00047F                       2667 00152$:
                           0003EB  2668 	C$mem_spi.h$62$1$65 ==.
                                   2669 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:62: CS = 1;
      00047F D2 A3            [12] 2670 	setb	_P2_3
                           0003ED  2671 	C$mem_spi.h$64$1$65 ==.
                                   2672 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:64: return SPI0DAT;
      000481 85 9B 82         [24] 2673 	mov	dpl,_SPI0DAT
                           0003F0  2674 	C$mem_spi.h$65$1$65 ==.
                           0003F0  2675 	XG$le_RAM_SPI$0$0 ==.
      000484 22               [24] 2676 	ret
                                   2677 ;------------------------------------------------------------
                                   2678 ;Allocation info for local variables in function 'verifica_RAM_SPI'
                                   2679 ;------------------------------------------------------------
                                   2680 ;i                         Allocated to registers r6 r7 
                                   2681 ;aux                       Allocated to registers r3 
                                   2682 ;------------------------------------------------------------
                           0003F1  2683 	G$verifica_RAM_SPI$0$0 ==.
                           0003F1  2684 	C$mem_spi.h$67$1$65 ==.
                                   2685 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:67: unsigned char verifica_RAM_SPI(void){
                                   2686 ;	-----------------------------------------
                                   2687 ;	 function verifica_RAM_SPI
                                   2688 ;	-----------------------------------------
      000485                       2689 _verifica_RAM_SPI:
                           0003F1  2690 	C$mem_spi.h$73$1$67 ==.
                                   2691 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:73: for(i=0; i<8192; i++){
      000485 7E 00            [12] 2692 	mov	r6,#0x00
      000487 7F 00            [12] 2693 	mov	r7,#0x00
      000489 7C 00            [12] 2694 	mov	r4,#0x00
      00048B 7D 00            [12] 2695 	mov	r5,#0x00
      00048D                       2696 00104$:
                           0003F9  2697 	C$mem_spi.h$74$2$68 ==.
                                   2698 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:74: esc_RAM_SPI(i, 170);
      00048D 75 14 AA         [24] 2699 	mov	_esc_RAM_SPI_PARM_2,#0xaa
      000490 8C 82            [24] 2700 	mov	dpl,r4
      000492 8D 83            [24] 2701 	mov	dph,r5
      000494 C0 07            [24] 2702 	push	ar7
      000496 C0 06            [24] 2703 	push	ar6
      000498 C0 05            [24] 2704 	push	ar5
      00049A C0 04            [24] 2705 	push	ar4
      00049C 12 04 32         [24] 2706 	lcall	_esc_RAM_SPI
      00049F D0 04            [24] 2707 	pop	ar4
      0004A1 D0 05            [24] 2708 	pop	ar5
                           00040F  2709 	C$mem_spi.h$75$2$68 ==.
                                   2710 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:75: aux = le_RAM_SPI(i);
      0004A3 8C 82            [24] 2711 	mov	dpl,r4
      0004A5 8D 83            [24] 2712 	mov	dph,r5
      0004A7 C0 05            [24] 2713 	push	ar5
      0004A9 C0 04            [24] 2714 	push	ar4
      0004AB 12 04 5A         [24] 2715 	lcall	_le_RAM_SPI
      0004AE AB 82            [24] 2716 	mov	r3,dpl
      0004B0 D0 04            [24] 2717 	pop	ar4
      0004B2 D0 05            [24] 2718 	pop	ar5
      0004B4 D0 06            [24] 2719 	pop	ar6
      0004B6 D0 07            [24] 2720 	pop	ar7
                           000424  2721 	C$mem_spi.h$77$2$68 ==.
                                   2722 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:77: if(aux != 170){
      0004B8 BB AA 02         [24] 2723 	cjne	r3,#0xaa,00117$
      0004BB 80 1A            [24] 2724 	sjmp	00102$
      0004BD                       2725 00117$:
                           000429  2726 	C$mem_spi.h$78$3$69 ==.
                                   2727 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:78: printf_fast_f("\x02 ERRO: mem=%05d",i);
      0004BD C0 06            [24] 2728 	push	ar6
      0004BF C0 07            [24] 2729 	push	ar7
      0004C1 74 41            [12] 2730 	mov	a,#___str_0
      0004C3 C0 E0            [24] 2731 	push	acc
      0004C5 74 11            [12] 2732 	mov	a,#(___str_0 >> 8)
      0004C7 C0 E0            [24] 2733 	push	acc
      0004C9 12 09 7C         [24] 2734 	lcall	_printf_fast_f
      0004CC E5 81            [12] 2735 	mov	a,sp
      0004CE 24 FC            [12] 2736 	add	a,#0xfc
      0004D0 F5 81            [12] 2737 	mov	sp,a
                           00043E  2738 	C$mem_spi.h$79$3$69 ==.
                                   2739 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:79: return 0; //erro em um endereco
      0004D2 75 82 00         [24] 2740 	mov	dpl,#0x00
      0004D5 80 2E            [24] 2741 	sjmp	00106$
      0004D7                       2742 00102$:
                           000443  2743 	C$mem_spi.h$81$2$68 ==.
                                   2744 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:81: printf_fast_f("\x02 i = %05d",i);
      0004D7 C0 05            [24] 2745 	push	ar5
      0004D9 C0 04            [24] 2746 	push	ar4
      0004DB C0 04            [24] 2747 	push	ar4
      0004DD C0 05            [24] 2748 	push	ar5
      0004DF 74 52            [12] 2749 	mov	a,#___str_1
      0004E1 C0 E0            [24] 2750 	push	acc
      0004E3 74 11            [12] 2751 	mov	a,#(___str_1 >> 8)
      0004E5 C0 E0            [24] 2752 	push	acc
      0004E7 12 09 7C         [24] 2753 	lcall	_printf_fast_f
      0004EA E5 81            [12] 2754 	mov	a,sp
      0004EC 24 FC            [12] 2755 	add	a,#0xfc
      0004EE F5 81            [12] 2756 	mov	sp,a
      0004F0 D0 04            [24] 2757 	pop	ar4
      0004F2 D0 05            [24] 2758 	pop	ar5
                           000460  2759 	C$mem_spi.h$73$1$67 ==.
                                   2760 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:73: for(i=0; i<8192; i++){
      0004F4 0C               [12] 2761 	inc	r4
      0004F5 BC 00 01         [24] 2762 	cjne	r4,#0x00,00118$
      0004F8 0D               [12] 2763 	inc	r5
      0004F9                       2764 00118$:
      0004F9 8C 06            [24] 2765 	mov	ar6,r4
      0004FB 8D 07            [24] 2766 	mov	ar7,r5
      0004FD 74 E0            [12] 2767 	mov	a,#0x100 - 0x20
      0004FF 2D               [12] 2768 	add	a,r5
      000500 50 8B            [24] 2769 	jnc	00104$
                           00046E  2770 	C$mem_spi.h$84$1$67 ==.
                                   2771 ;	C:\Users\202019050169\Downloads\trabalho\/mem_spi.h:84: return 1; //tudo certo
      000502 75 82 01         [24] 2772 	mov	dpl,#0x01
      000505                       2773 00106$:
                           000471  2774 	C$mem_spi.h$85$1$67 ==.
                           000471  2775 	XG$verifica_RAM_SPI$0$0 ==.
      000505 22               [24] 2776 	ret
                                   2777 ;------------------------------------------------------------
                                   2778 ;Allocation info for local variables in function 'ligar_buzzer'
                                   2779 ;------------------------------------------------------------
                                   2780 ;ciclos                    Allocated to registers r6 r7 
                                   2781 ;meio_periodo              Allocated to registers 
                                   2782 ;------------------------------------------------------------
                           000472  2783 	G$ligar_buzzer$0$0 ==.
                           000472  2784 	C$main.c$49$1$67 ==.
                                   2785 ;	C:\Users\202019050169\Downloads\trabalho\main.c:49: void ligar_buzzer(){
                                   2786 ;	-----------------------------------------
                                   2787 ;	 function ligar_buzzer
                                   2788 ;	-----------------------------------------
      000506                       2789 _ligar_buzzer:
                           000472  2790 	C$main.c$55$1$75 ==.
                                   2791 ;	C:\Users\202019050169\Downloads\trabalho\main.c:55: while(ciclos){
      000506 7E 03            [12] 2792 	mov	r6,#0x03
      000508 7F 00            [12] 2793 	mov	r7,#0x00
      00050A                       2794 00101$:
      00050A EE               [12] 2795 	mov	a,r6
      00050B 4F               [12] 2796 	orl	a,r7
      00050C 60 1F            [24] 2797 	jz	00103$
                           00047A  2798 	C$main.c$56$2$76 ==.
                                   2799 ;	C:\Users\202019050169\Downloads\trabalho\main.c:56: buzzer = 0;
      00050E C2 B5            [12] 2800 	clr	_P3_5
                           00047C  2801 	C$main.c$57$2$76 ==.
                                   2802 ;	C:\Users\202019050169\Downloads\trabalho\main.c:57: delay_ms(meio_periodo);
      000510 90 01 F4         [24] 2803 	mov	dptr,#0x01f4
      000513 C0 07            [24] 2804 	push	ar7
      000515 C0 06            [24] 2805 	push	ar6
      000517 12 03 E0         [24] 2806 	lcall	_delay_ms
                           000486  2807 	C$main.c$58$2$76 ==.
                                   2808 ;	C:\Users\202019050169\Downloads\trabalho\main.c:58: buzzer = 1;
      00051A D2 B5            [12] 2809 	setb	_P3_5
                           000488  2810 	C$main.c$59$2$76 ==.
                                   2811 ;	C:\Users\202019050169\Downloads\trabalho\main.c:59: delay_ms(meio_periodo);
      00051C 90 01 F4         [24] 2812 	mov	dptr,#0x01f4
      00051F 12 03 E0         [24] 2813 	lcall	_delay_ms
      000522 D0 06            [24] 2814 	pop	ar6
      000524 D0 07            [24] 2815 	pop	ar7
                           000492  2816 	C$main.c$60$2$76 ==.
                                   2817 ;	C:\Users\202019050169\Downloads\trabalho\main.c:60: ciclos--;
      000526 1E               [12] 2818 	dec	r6
      000527 BE FF 01         [24] 2819 	cjne	r6,#0xff,00114$
      00052A 1F               [12] 2820 	dec	r7
      00052B                       2821 00114$:
      00052B 80 DD            [24] 2822 	sjmp	00101$
      00052D                       2823 00103$:
                           000499  2824 	C$main.c$63$1$75 ==.
                                   2825 ;	C:\Users\202019050169\Downloads\trabalho\main.c:63: buzzer = 0;
      00052D C2 B5            [12] 2826 	clr	_P3_5
                           00049B  2827 	C$main.c$64$1$75 ==.
                           00049B  2828 	XG$ligar_buzzer$0$0 ==.
      00052F 22               [24] 2829 	ret
                                   2830 ;------------------------------------------------------------
                                   2831 ;Allocation info for local variables in function 'resetar_tempo'
                                   2832 ;------------------------------------------------------------
                                   2833 ;tecla                     Allocated to registers r6 r7 
                                   2834 ;------------------------------------------------------------
                           00049C  2835 	G$resetar_tempo$0$0 ==.
                           00049C  2836 	C$main.c$74$1$75 ==.
                                   2837 ;	C:\Users\202019050169\Downloads\trabalho\main.c:74: void resetar_tempo(int tecla) {
                                   2838 ;	-----------------------------------------
                                   2839 ;	 function resetar_tempo
                                   2840 ;	-----------------------------------------
      000530                       2841 _resetar_tempo:
      000530 AE 82            [24] 2842 	mov	r6,dpl
      000532 AF 83            [24] 2843 	mov	r7,dph
                           0004A0  2844 	C$main.c$75$1$78 ==.
                                   2845 ;	C:\Users\202019050169\Downloads\trabalho\main.c:75: if(tecla == CANCELAR) {
      000534 BE FF 06         [24] 2846 	cjne	r6,#0xff,00103$
      000537 BF FF 03         [24] 2847 	cjne	r7,#0xff,00103$
                           0004A6  2848 	C$main.c$76$2$79 ==.
                                   2849 ;	C:\Users\202019050169\Downloads\trabalho\main.c:76: definir_tempo_botao();
      00053A 12 05 3E         [24] 2850 	lcall	_definir_tempo_botao
      00053D                       2851 00103$:
                           0004A9  2852 	C$main.c$78$1$78 ==.
                           0004A9  2853 	XG$resetar_tempo$0$0 ==.
      00053D 22               [24] 2854 	ret
                                   2855 ;------------------------------------------------------------
                                   2856 ;Allocation info for local variables in function 'definir_tempo_botao'
                                   2857 ;------------------------------------------------------------
                                   2858 ;tempoReal                 Allocated to registers 
                                   2859 ;m1                        Allocated to registers r6 r7 
                                   2860 ;m2                        Allocated to registers r4 r5 
                                   2861 ;s1                        Allocated to registers r2 r3 
                                   2862 ;s2                        Allocated to registers r0 r1 
                                   2863 ;------------------------------------------------------------
                           0004AA  2864 	G$definir_tempo_botao$0$0 ==.
                           0004AA  2865 	C$main.c$85$1$78 ==.
                                   2866 ;	C:\Users\202019050169\Downloads\trabalho\main.c:85: int definir_tempo_botao() {
                                   2867 ;	-----------------------------------------
                                   2868 ;	 function definir_tempo_botao
                                   2869 ;	-----------------------------------------
      00053E                       2870 _definir_tempo_botao:
                           0004AA  2871 	C$main.c$92$1$80 ==.
                                   2872 ;	C:\Users\202019050169\Downloads\trabalho\main.c:92: limpa_glcd(ESQ);
      00053E C2 08            [12] 2873 	clr	_limpa_glcd_PARM_1
      000540 12 02 6E         [24] 2874 	lcall	_limpa_glcd
                           0004AF  2875 	C$main.c$93$1$80 ==.
                                   2876 ;	C:\Users\202019050169\Downloads\trabalho\main.c:93: limpa_glcd(DIR);
      000543 D2 08            [12] 2877 	setb	_limpa_glcd_PARM_1
      000545 12 02 6E         [24] 2878 	lcall	_limpa_glcd
                           0004B4  2879 	C$main.c$94$1$80 ==.
                                   2880 ;	C:\Users\202019050169\Downloads\trabalho\main.c:94: conf_pag(0, ESQ);
      000548 C2 07            [12] 2881 	clr	_conf_pag_PARM_2
      00054A 75 82 00         [24] 2882 	mov	dpl,#0x00
      00054D 12 02 5A         [24] 2883 	lcall	_conf_pag
                           0004BC  2884 	C$main.c$95$1$80 ==.
                                   2885 ;	C:\Users\202019050169\Downloads\trabalho\main.c:95: conf_pag(0, DIR);
      000550 D2 07            [12] 2886 	setb	_conf_pag_PARM_2
      000552 75 82 00         [24] 2887 	mov	dpl,#0x00
      000555 12 02 5A         [24] 2888 	lcall	_conf_pag
                           0004C4  2889 	C$main.c$97$1$80 ==.
                                   2890 ;	C:\Users\202019050169\Downloads\trabalho\main.c:97: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      000558 E4               [12] 2891 	clr	a
      000559 C0 E0            [24] 2892 	push	acc
      00055B C0 E0            [24] 2893 	push	acc
      00055D C0 E0            [24] 2894 	push	acc
      00055F C0 E0            [24] 2895 	push	acc
      000561 C0 E0            [24] 2896 	push	acc
      000563 C0 E0            [24] 2897 	push	acc
      000565 C0 E0            [24] 2898 	push	acc
      000567 C0 E0            [24] 2899 	push	acc
      000569 74 5D            [12] 2900 	mov	a,#___str_2
      00056B C0 E0            [24] 2901 	push	acc
      00056D 74 11            [12] 2902 	mov	a,#(___str_2 >> 8)
      00056F C0 E0            [24] 2903 	push	acc
      000571 12 09 7C         [24] 2904 	lcall	_printf_fast_f
      000574 E5 81            [12] 2905 	mov	a,sp
      000576 24 F6            [12] 2906 	add	a,#0xf6
      000578 F5 81            [12] 2907 	mov	sp,a
                           0004E6  2908 	C$main.c$98$1$80 ==.
                                   2909 ;	C:\Users\202019050169\Downloads\trabalho\main.c:98: m1 = le_tec() * 10;
      00057A 12 07 F9         [24] 2910 	lcall	_le_tec
      00057D E5 82            [12] 2911 	mov	a,dpl
      00057F 75 F0 0A         [24] 2912 	mov	b,#0x0a
      000582 A4               [48] 2913 	mul	ab
      000583 FE               [12] 2914 	mov	r6,a
      000584 AF F0            [24] 2915 	mov	r7,b
                           0004F2  2916 	C$main.c$99$1$80 ==.
                                   2917 ;	C:\Users\202019050169\Downloads\trabalho\main.c:99: resetar_tempo(m1);
      000586 8E 82            [24] 2918 	mov	dpl,r6
      000588 8F 83            [24] 2919 	mov	dph,r7
      00058A C0 07            [24] 2920 	push	ar7
      00058C C0 06            [24] 2921 	push	ar6
      00058E 12 05 30         [24] 2922 	lcall	_resetar_tempo
      000591 D0 06            [24] 2923 	pop	ar6
      000593 D0 07            [24] 2924 	pop	ar7
                           000501  2925 	C$main.c$101$1$80 ==.
                                   2926 ;	C:\Users\202019050169\Downloads\trabalho\main.c:101: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      000595 C0 07            [24] 2927 	push	ar7
      000597 C0 06            [24] 2928 	push	ar6
      000599 E4               [12] 2929 	clr	a
      00059A C0 E0            [24] 2930 	push	acc
      00059C C0 E0            [24] 2931 	push	acc
      00059E C0 E0            [24] 2932 	push	acc
      0005A0 C0 E0            [24] 2933 	push	acc
      0005A2 C0 E0            [24] 2934 	push	acc
      0005A4 C0 E0            [24] 2935 	push	acc
      0005A6 C0 06            [24] 2936 	push	ar6
      0005A8 C0 07            [24] 2937 	push	ar7
      0005AA 74 5D            [12] 2938 	mov	a,#___str_2
      0005AC C0 E0            [24] 2939 	push	acc
      0005AE 74 11            [12] 2940 	mov	a,#(___str_2 >> 8)
      0005B0 C0 E0            [24] 2941 	push	acc
      0005B2 12 09 7C         [24] 2942 	lcall	_printf_fast_f
      0005B5 E5 81            [12] 2943 	mov	a,sp
      0005B7 24 F6            [12] 2944 	add	a,#0xf6
      0005B9 F5 81            [12] 2945 	mov	sp,a
                           000527  2946 	C$main.c$102$1$80 ==.
                                   2947 ;	C:\Users\202019050169\Downloads\trabalho\main.c:102: m2 = le_tec();
      0005BB 12 07 F9         [24] 2948 	lcall	_le_tec
                           00052A  2949 	C$main.c$103$1$80 ==.
                                   2950 ;	C:\Users\202019050169\Downloads\trabalho\main.c:103: resetar_tempo(m2);
      0005BE AC 82            [24] 2951 	mov	r4,dpl
      0005C0 7D 00            [12] 2952 	mov	r5,#0x00
      0005C2 8D 83            [24] 2953 	mov	dph,r5
      0005C4 C0 05            [24] 2954 	push	ar5
      0005C6 C0 04            [24] 2955 	push	ar4
      0005C8 12 05 30         [24] 2956 	lcall	_resetar_tempo
      0005CB D0 04            [24] 2957 	pop	ar4
      0005CD D0 05            [24] 2958 	pop	ar5
      0005CF D0 06            [24] 2959 	pop	ar6
      0005D1 D0 07            [24] 2960 	pop	ar7
                           00053F  2961 	C$main.c$105$1$80 ==.
                                   2962 ;	C:\Users\202019050169\Downloads\trabalho\main.c:105: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      0005D3 C0 07            [24] 2963 	push	ar7
      0005D5 C0 06            [24] 2964 	push	ar6
      0005D7 C0 05            [24] 2965 	push	ar5
      0005D9 C0 04            [24] 2966 	push	ar4
      0005DB E4               [12] 2967 	clr	a
      0005DC C0 E0            [24] 2968 	push	acc
      0005DE C0 E0            [24] 2969 	push	acc
      0005E0 C0 E0            [24] 2970 	push	acc
      0005E2 C0 E0            [24] 2971 	push	acc
      0005E4 C0 04            [24] 2972 	push	ar4
      0005E6 C0 05            [24] 2973 	push	ar5
      0005E8 C0 06            [24] 2974 	push	ar6
      0005EA C0 07            [24] 2975 	push	ar7
      0005EC 74 5D            [12] 2976 	mov	a,#___str_2
      0005EE C0 E0            [24] 2977 	push	acc
      0005F0 74 11            [12] 2978 	mov	a,#(___str_2 >> 8)
      0005F2 C0 E0            [24] 2979 	push	acc
      0005F4 12 09 7C         [24] 2980 	lcall	_printf_fast_f
      0005F7 E5 81            [12] 2981 	mov	a,sp
      0005F9 24 F6            [12] 2982 	add	a,#0xf6
      0005FB F5 81            [12] 2983 	mov	sp,a
                           000569  2984 	C$main.c$106$1$80 ==.
                                   2985 ;	C:\Users\202019050169\Downloads\trabalho\main.c:106: s1 = le_tec() * 10;
      0005FD 12 07 F9         [24] 2986 	lcall	_le_tec
      000600 E5 82            [12] 2987 	mov	a,dpl
      000602 75 F0 0A         [24] 2988 	mov	b,#0x0a
      000605 A4               [48] 2989 	mul	ab
      000606 FA               [12] 2990 	mov	r2,a
      000607 AB F0            [24] 2991 	mov	r3,b
                           000575  2992 	C$main.c$107$1$80 ==.
                                   2993 ;	C:\Users\202019050169\Downloads\trabalho\main.c:107: resetar_tempo(s1);
      000609 8A 82            [24] 2994 	mov	dpl,r2
      00060B 8B 83            [24] 2995 	mov	dph,r3
      00060D C0 03            [24] 2996 	push	ar3
      00060F C0 02            [24] 2997 	push	ar2
      000611 12 05 30         [24] 2998 	lcall	_resetar_tempo
      000614 D0 02            [24] 2999 	pop	ar2
      000616 D0 03            [24] 3000 	pop	ar3
      000618 D0 04            [24] 3001 	pop	ar4
      00061A D0 05            [24] 3002 	pop	ar5
      00061C D0 06            [24] 3003 	pop	ar6
      00061E D0 07            [24] 3004 	pop	ar7
                           00058C  3005 	C$main.c$108$1$80 ==.
                                   3006 ;	C:\Users\202019050169\Downloads\trabalho\main.c:108: if(s1 > 50)	s1 = 50;
      000620 C3               [12] 3007 	clr	c
      000621 74 32            [12] 3008 	mov	a,#0x32
      000623 9A               [12] 3009 	subb	a,r2
      000624 74 80            [12] 3010 	mov	a,#(0x00 ^ 0x80)
      000626 8B F0            [24] 3011 	mov	b,r3
      000628 63 F0 80         [24] 3012 	xrl	b,#0x80
      00062B 95 F0            [12] 3013 	subb	a,b
      00062D 50 04            [24] 3014 	jnc	00102$
      00062F 7A 32            [12] 3015 	mov	r2,#0x32
      000631 7B 00            [12] 3016 	mov	r3,#0x00
      000633                       3017 00102$:
                           00059F  3018 	C$main.c$110$1$80 ==.
                                   3019 ;	C:\Users\202019050169\Downloads\trabalho\main.c:110: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      000633 C0 07            [24] 3020 	push	ar7
      000635 C0 06            [24] 3021 	push	ar6
      000637 C0 05            [24] 3022 	push	ar5
      000639 C0 04            [24] 3023 	push	ar4
      00063B C0 03            [24] 3024 	push	ar3
      00063D C0 02            [24] 3025 	push	ar2
      00063F E4               [12] 3026 	clr	a
      000640 C0 E0            [24] 3027 	push	acc
      000642 C0 E0            [24] 3028 	push	acc
      000644 C0 02            [24] 3029 	push	ar2
      000646 C0 03            [24] 3030 	push	ar3
      000648 C0 04            [24] 3031 	push	ar4
      00064A C0 05            [24] 3032 	push	ar5
      00064C C0 06            [24] 3033 	push	ar6
      00064E C0 07            [24] 3034 	push	ar7
      000650 74 5D            [12] 3035 	mov	a,#___str_2
      000652 C0 E0            [24] 3036 	push	acc
      000654 74 11            [12] 3037 	mov	a,#(___str_2 >> 8)
      000656 C0 E0            [24] 3038 	push	acc
      000658 12 09 7C         [24] 3039 	lcall	_printf_fast_f
      00065B E5 81            [12] 3040 	mov	a,sp
      00065D 24 F6            [12] 3041 	add	a,#0xf6
      00065F F5 81            [12] 3042 	mov	sp,a
                           0005CD  3043 	C$main.c$111$1$80 ==.
                                   3044 ;	C:\Users\202019050169\Downloads\trabalho\main.c:111: s2 = le_tec();
      000661 12 07 F9         [24] 3045 	lcall	_le_tec
      000664 A8 82            [24] 3046 	mov	r0,dpl
      000666 79 00            [12] 3047 	mov	r1,#0x00
                           0005D4  3048 	C$main.c$112$1$80 ==.
                                   3049 ;	C:\Users\202019050169\Downloads\trabalho\main.c:112: resetar_tempo(s2);
      000668 88 82            [24] 3050 	mov	dpl,r0
      00066A 89 83            [24] 3051 	mov	dph,r1
      00066C C0 01            [24] 3052 	push	ar1
      00066E C0 00            [24] 3053 	push	ar0
      000670 12 05 30         [24] 3054 	lcall	_resetar_tempo
      000673 D0 00            [24] 3055 	pop	ar0
      000675 D0 01            [24] 3056 	pop	ar1
      000677 D0 02            [24] 3057 	pop	ar2
      000679 D0 03            [24] 3058 	pop	ar3
      00067B D0 04            [24] 3059 	pop	ar4
      00067D D0 05            [24] 3060 	pop	ar5
      00067F D0 06            [24] 3061 	pop	ar6
      000681 D0 07            [24] 3062 	pop	ar7
                           0005EF  3063 	C$main.c$114$1$80 ==.
                                   3064 ;	C:\Users\202019050169\Downloads\trabalho\main.c:114: printf_fast_f("\x02 T: %d %d %d %d", m1, m2, s1, s2); // Feedback visual ou mensagem
      000683 C0 07            [24] 3065 	push	ar7
      000685 C0 06            [24] 3066 	push	ar6
      000687 C0 05            [24] 3067 	push	ar5
      000689 C0 04            [24] 3068 	push	ar4
      00068B C0 03            [24] 3069 	push	ar3
      00068D C0 02            [24] 3070 	push	ar2
      00068F C0 01            [24] 3071 	push	ar1
      000691 C0 00            [24] 3072 	push	ar0
      000693 C0 00            [24] 3073 	push	ar0
      000695 C0 01            [24] 3074 	push	ar1
      000697 C0 02            [24] 3075 	push	ar2
      000699 C0 03            [24] 3076 	push	ar3
      00069B C0 04            [24] 3077 	push	ar4
      00069D C0 05            [24] 3078 	push	ar5
      00069F C0 06            [24] 3079 	push	ar6
      0006A1 C0 07            [24] 3080 	push	ar7
      0006A3 74 5D            [12] 3081 	mov	a,#___str_2
      0006A5 C0 E0            [24] 3082 	push	acc
      0006A7 74 11            [12] 3083 	mov	a,#(___str_2 >> 8)
      0006A9 C0 E0            [24] 3084 	push	acc
      0006AB 12 09 7C         [24] 3085 	lcall	_printf_fast_f
      0006AE E5 81            [12] 3086 	mov	a,sp
      0006B0 24 F6            [12] 3087 	add	a,#0xf6
      0006B2 F5 81            [12] 3088 	mov	sp,a
      0006B4 D0 00            [24] 3089 	pop	ar0
      0006B6 D0 01            [24] 3090 	pop	ar1
      0006B8 D0 02            [24] 3091 	pop	ar2
      0006BA D0 03            [24] 3092 	pop	ar3
      0006BC D0 04            [24] 3093 	pop	ar4
      0006BE D0 05            [24] 3094 	pop	ar5
      0006C0 D0 06            [24] 3095 	pop	ar6
      0006C2 D0 07            [24] 3096 	pop	ar7
                           000630  3097 	C$main.c$116$1$80 ==.
                                   3098 ;	C:\Users\202019050169\Downloads\trabalho\main.c:116: tempoReal = ((m1 + m2) * 60) + (s1 + s2);
      0006C4 EC               [12] 3099 	mov	a,r4
      0006C5 2E               [12] 3100 	add	a,r6
      0006C6 F5 14            [12] 3101 	mov	__mulint_PARM_2,a
      0006C8 ED               [12] 3102 	mov	a,r5
      0006C9 3F               [12] 3103 	addc	a,r7
      0006CA F5 15            [12] 3104 	mov	(__mulint_PARM_2 + 1),a
      0006CC 90 00 3C         [24] 3105 	mov	dptr,#0x003c
      0006CF C0 03            [24] 3106 	push	ar3
      0006D1 C0 02            [24] 3107 	push	ar2
      0006D3 C0 01            [24] 3108 	push	ar1
      0006D5 C0 00            [24] 3109 	push	ar0
      0006D7 12 0E 40         [24] 3110 	lcall	__mulint
      0006DA AE 82            [24] 3111 	mov	r6,dpl
      0006DC AF 83            [24] 3112 	mov	r7,dph
      0006DE D0 00            [24] 3113 	pop	ar0
      0006E0 D0 01            [24] 3114 	pop	ar1
      0006E2 D0 02            [24] 3115 	pop	ar2
      0006E4 D0 03            [24] 3116 	pop	ar3
      0006E6 E8               [12] 3117 	mov	a,r0
      0006E7 2A               [12] 3118 	add	a,r2
      0006E8 FA               [12] 3119 	mov	r2,a
      0006E9 E9               [12] 3120 	mov	a,r1
      0006EA 3B               [12] 3121 	addc	a,r3
      0006EB FB               [12] 3122 	mov	r3,a
      0006EC EA               [12] 3123 	mov	a,r2
      0006ED 2E               [12] 3124 	add	a,r6
      0006EE F5 82            [12] 3125 	mov	dpl,a
      0006F0 EB               [12] 3126 	mov	a,r3
      0006F1 3F               [12] 3127 	addc	a,r7
      0006F2 F5 83            [12] 3128 	mov	dph,a
                           000660  3129 	C$main.c$117$1$80 ==.
                                   3130 ;	C:\Users\202019050169\Downloads\trabalho\main.c:117: return tempoReal;
                           000660  3131 	C$main.c$119$1$80 ==.
                           000660  3132 	XG$definir_tempo_botao$0$0 ==.
      0006F4 22               [24] 3133 	ret
                                   3134 ;------------------------------------------------------------
                                   3135 ;Allocation info for local variables in function 'definir_tempo_bluetooth'
                                   3136 ;------------------------------------------------------------
                                   3137 ;tempoReal                 Allocated to registers r6 r7 
                                   3138 ;------------------------------------------------------------
                           000661  3139 	G$definir_tempo_bluetooth$0$0 ==.
                           000661  3140 	C$main.c$128$1$80 ==.
                                   3141 ;	C:\Users\202019050169\Downloads\trabalho\main.c:128: int definir_tempo_bluetooth() {
                                   3142 ;	-----------------------------------------
                                   3143 ;	 function definir_tempo_bluetooth
                                   3144 ;	-----------------------------------------
      0006F5                       3145 _definir_tempo_bluetooth:
                           000661  3146 	C$main.c$130$1$81 ==.
                                   3147 ;	C:\Users\202019050169\Downloads\trabalho\main.c:130: int tempoReal = (int)TECLA;
      0006F5 AE 0B            [24] 3148 	mov	r6,_TECLA
      0006F7 7F 00            [12] 3149 	mov	r7,#0x00
                           000665  3150 	C$main.c$132$1$81 ==.
                                   3151 ;	C:\Users\202019050169\Downloads\trabalho\main.c:132: limpa_glcd(ESQ);
      0006F9 C2 08            [12] 3152 	clr	_limpa_glcd_PARM_1
      0006FB C0 07            [24] 3153 	push	ar7
      0006FD C0 06            [24] 3154 	push	ar6
      0006FF 12 02 6E         [24] 3155 	lcall	_limpa_glcd
                           00066E  3156 	C$main.c$133$1$81 ==.
                                   3157 ;	C:\Users\202019050169\Downloads\trabalho\main.c:133: limpa_glcd(DIR);
      000702 D2 08            [12] 3158 	setb	_limpa_glcd_PARM_1
      000704 12 02 6E         [24] 3159 	lcall	_limpa_glcd
                           000673  3160 	C$main.c$134$1$81 ==.
                                   3161 ;	C:\Users\202019050169\Downloads\trabalho\main.c:134: conf_pag(0, ESQ);
      000707 C2 07            [12] 3162 	clr	_conf_pag_PARM_2
      000709 75 82 00         [24] 3163 	mov	dpl,#0x00
      00070C 12 02 5A         [24] 3164 	lcall	_conf_pag
                           00067B  3165 	C$main.c$135$1$81 ==.
                                   3166 ;	C:\Users\202019050169\Downloads\trabalho\main.c:135: conf_pag(0, DIR);
      00070F D2 07            [12] 3167 	setb	_conf_pag_PARM_2
      000711 75 82 00         [24] 3168 	mov	dpl,#0x00
      000714 12 02 5A         [24] 3169 	lcall	_conf_pag
      000717 D0 06            [24] 3170 	pop	ar6
      000719 D0 07            [24] 3171 	pop	ar7
                           000687  3172 	C$main.c$137$1$81 ==.
                                   3173 ;	C:\Users\202019050169\Downloads\trabalho\main.c:137: printf_fast_f("Tempo %d:", tempoReal);
      00071B C0 07            [24] 3174 	push	ar7
      00071D C0 06            [24] 3175 	push	ar6
      00071F C0 06            [24] 3176 	push	ar6
      000721 C0 07            [24] 3177 	push	ar7
      000723 74 6E            [12] 3178 	mov	a,#___str_3
      000725 C0 E0            [24] 3179 	push	acc
      000727 74 11            [12] 3180 	mov	a,#(___str_3 >> 8)
      000729 C0 E0            [24] 3181 	push	acc
      00072B 12 09 7C         [24] 3182 	lcall	_printf_fast_f
      00072E E5 81            [12] 3183 	mov	a,sp
      000730 24 FC            [12] 3184 	add	a,#0xfc
      000732 F5 81            [12] 3185 	mov	sp,a
      000734 D0 06            [24] 3186 	pop	ar6
      000736 D0 07            [24] 3187 	pop	ar7
                           0006A4  3188 	C$main.c$139$1$81 ==.
                                   3189 ;	C:\Users\202019050169\Downloads\trabalho\main.c:139: return tempoReal;
      000738 8E 82            [24] 3190 	mov	dpl,r6
      00073A 8F 83            [24] 3191 	mov	dph,r7
                           0006A8  3192 	C$main.c$141$1$81 ==.
                           0006A8  3193 	XG$definir_tempo_bluetooth$0$0 ==.
      00073C 22               [24] 3194 	ret
                                   3195 ;------------------------------------------------------------
                                   3196 ;Allocation info for local variables in function 'escolher_entrada'
                                   3197 ;------------------------------------------------------------
                                   3198 ;tecla_menu                Allocated to registers r6 r7 
                                   3199 ;tempo_digital             Allocated to registers r4 r6 
                                   3200 ;------------------------------------------------------------
                           0006A9  3201 	G$escolher_entrada$0$0 ==.
                           0006A9  3202 	C$main.c$150$1$81 ==.
                                   3203 ;	C:\Users\202019050169\Downloads\trabalho\main.c:150: void escolher_entrada() {
                                   3204 ;	-----------------------------------------
                                   3205 ;	 function escolher_entrada
                                   3206 ;	-----------------------------------------
      00073D                       3207 _escolher_entrada:
                           0006A9  3208 	C$main.c$154$1$82 ==.
                                   3209 ;	C:\Users\202019050169\Downloads\trabalho\main.c:154: limpa_glcd(ESQ);
      00073D C2 08            [12] 3210 	clr	_limpa_glcd_PARM_1
      00073F 12 02 6E         [24] 3211 	lcall	_limpa_glcd
                           0006AE  3212 	C$main.c$155$1$82 ==.
                                   3213 ;	C:\Users\202019050169\Downloads\trabalho\main.c:155: limpa_glcd(DIR);
      000742 D2 08            [12] 3214 	setb	_limpa_glcd_PARM_1
      000744 12 02 6E         [24] 3215 	lcall	_limpa_glcd
                           0006B3  3216 	C$main.c$156$1$82 ==.
                                   3217 ;	C:\Users\202019050169\Downloads\trabalho\main.c:156: conf_pag(0, ESQ);
      000747 C2 07            [12] 3218 	clr	_conf_pag_PARM_2
      000749 75 82 00         [24] 3219 	mov	dpl,#0x00
      00074C 12 02 5A         [24] 3220 	lcall	_conf_pag
                           0006BB  3221 	C$main.c$157$1$82 ==.
                                   3222 ;	C:\Users\202019050169\Downloads\trabalho\main.c:157: conf_pag(0, DIR);
      00074F D2 07            [12] 3223 	setb	_conf_pag_PARM_2
      000751 75 82 00         [24] 3224 	mov	dpl,#0x00
      000754 12 02 5A         [24] 3225 	lcall	_conf_pag
                           0006C3  3226 	C$main.c$159$1$82 ==.
                                   3227 ;	C:\Users\202019050169\Downloads\trabalho\main.c:159: printf_fast_f("\x01 Selecione o");
      000757 74 78            [12] 3228 	mov	a,#___str_4
      000759 C0 E0            [24] 3229 	push	acc
      00075B 74 11            [12] 3230 	mov	a,#(___str_4 >> 8)
      00075D C0 E0            [24] 3231 	push	acc
      00075F 12 09 7C         [24] 3232 	lcall	_printf_fast_f
      000762 15 81            [12] 3233 	dec	sp
      000764 15 81            [12] 3234 	dec	sp
                           0006D2  3235 	C$main.c$160$1$82 ==.
                                   3236 ;	C:\Users\202019050169\Downloads\trabalho\main.c:160: printf_fast_f("\x02 tipo entrada:");
      000766 74 86            [12] 3237 	mov	a,#___str_5
      000768 C0 E0            [24] 3238 	push	acc
      00076A 74 11            [12] 3239 	mov	a,#(___str_5 >> 8)
      00076C C0 E0            [24] 3240 	push	acc
      00076E 12 09 7C         [24] 3241 	lcall	_printf_fast_f
      000771 15 81            [12] 3242 	dec	sp
      000773 15 81            [12] 3243 	dec	sp
                           0006E1  3244 	C$main.c$161$1$82 ==.
                                   3245 ;	C:\Users\202019050169\Downloads\trabalho\main.c:161: printf_fast_f("\x04 a - Manual");
      000775 74 96            [12] 3246 	mov	a,#___str_6
      000777 C0 E0            [24] 3247 	push	acc
      000779 74 11            [12] 3248 	mov	a,#(___str_6 >> 8)
      00077B C0 E0            [24] 3249 	push	acc
      00077D 12 09 7C         [24] 3250 	lcall	_printf_fast_f
      000780 15 81            [12] 3251 	dec	sp
      000782 15 81            [12] 3252 	dec	sp
                           0006F0  3253 	C$main.c$162$1$82 ==.
                                   3254 ;	C:\Users\202019050169\Downloads\trabalho\main.c:162: printf_fast_f("\x05 b - Digital");
      000784 74 A3            [12] 3255 	mov	a,#___str_7
      000786 C0 E0            [24] 3256 	push	acc
      000788 74 11            [12] 3257 	mov	a,#(___str_7 >> 8)
      00078A C0 E0            [24] 3258 	push	acc
      00078C 12 09 7C         [24] 3259 	lcall	_printf_fast_f
      00078F 15 81            [12] 3260 	dec	sp
      000791 15 81            [12] 3261 	dec	sp
                           0006FF  3262 	C$main.c$164$1$82 ==.
                                   3263 ;	C:\Users\202019050169\Downloads\trabalho\main.c:164: tecla_menu = 0;
      000793 7E 00            [12] 3264 	mov	r6,#0x00
      000795 7F 00            [12] 3265 	mov	r7,#0x00
                           000703  3266 	C$main.c$166$1$82 ==.
                                   3267 ;	C:\Users\202019050169\Downloads\trabalho\main.c:166: while(tecla_menu != MENU_MANUAL || tecla_menu != MENU_DIGITAL) {
      000797                       3268 00102$:
      000797 BE 64 0B         [24] 3269 	cjne	r6,#0x64,00103$
      00079A BF 00 08         [24] 3270 	cjne	r7,#0x00,00103$
      00079D BE 65 05         [24] 3271 	cjne	r6,#0x65,00131$
      0007A0 BF 00 02         [24] 3272 	cjne	r7,#0x00,00131$
      0007A3 80 0B            [24] 3273 	sjmp	00104$
      0007A5                       3274 00131$:
      0007A5                       3275 00103$:
                           000711  3276 	C$main.c$167$2$83 ==.
                                   3277 ;	C:\Users\202019050169\Downloads\trabalho\main.c:167: tecla_menu = le_tec();
      0007A5 12 07 F9         [24] 3278 	lcall	_le_tec
      0007A8 AD 82            [24] 3279 	mov	r5,dpl
      0007AA 8D 06            [24] 3280 	mov	ar6,r5
      0007AC 7F 00            [12] 3281 	mov	r7,#0x00
      0007AE 80 E7            [24] 3282 	sjmp	00102$
      0007B0                       3283 00104$:
                           00071C  3284 	C$main.c$170$1$82 ==.
                                   3285 ;	C:\Users\202019050169\Downloads\trabalho\main.c:170: printf_fast_f("\x06 Tudo pronto!!");
      0007B0 C0 07            [24] 3286 	push	ar7
      0007B2 C0 06            [24] 3287 	push	ar6
      0007B4 74 B1            [12] 3288 	mov	a,#___str_8
      0007B6 C0 E0            [24] 3289 	push	acc
      0007B8 74 11            [12] 3290 	mov	a,#(___str_8 >> 8)
      0007BA C0 E0            [24] 3291 	push	acc
      0007BC 12 09 7C         [24] 3292 	lcall	_printf_fast_f
      0007BF 15 81            [12] 3293 	dec	sp
      0007C1 15 81            [12] 3294 	dec	sp
      0007C3 D0 06            [24] 3295 	pop	ar6
      0007C5 D0 07            [24] 3296 	pop	ar7
                           000733  3297 	C$main.c$172$2$84 ==.
                                   3298 ;	C:\Users\202019050169\Downloads\trabalho\main.c:172: while(1)
      0007C7 E4               [12] 3299 	clr	a
      0007C8 BE 65 04         [24] 3300 	cjne	r6,#0x65,00132$
      0007CB BF 00 01         [24] 3301 	cjne	r7,#0x00,00132$
      0007CE 04               [12] 3302 	inc	a
      0007CF                       3303 00132$:
      0007CF FD               [12] 3304 	mov	r5,a
      0007D0 E4               [12] 3305 	clr	a
      0007D1 BE 64 04         [24] 3306 	cjne	r6,#0x64,00134$
      0007D4 BF 00 01         [24] 3307 	cjne	r7,#0x00,00134$
      0007D7 04               [12] 3308 	inc	a
      0007D8                       3309 00134$:
      0007D8 FF               [12] 3310 	mov	r7,a
      0007D9                       3311 00110$:
                           000745  3312 	C$main.c$175$2$84 ==.
                                   3313 ;	C:\Users\202019050169\Downloads\trabalho\main.c:175: if(tecla_menu==MENU_MANUAL)
      0007D9 EF               [12] 3314 	mov	a,r7
      0007DA 60 08            [24] 3315 	jz	00106$
                           000748  3316 	C$main.c$177$3$85 ==.
                                   3317 ;	C:\Users\202019050169\Downloads\trabalho\main.c:177: tempo_digital = definir_tempo_botao();
      0007DC 12 05 3E         [24] 3318 	lcall	_definir_tempo_botao
                           00074B  3319 	C$main.c$178$3$85 ==.
                                   3320 ;	C:\Users\202019050169\Downloads\trabalho\main.c:178: contagemRegressiva(tempo_digital);
      0007DF 12 08 58         [24] 3321 	lcall	_contagemRegressiva
                           00074E  3322 	C$main.c$179$3$85 ==.
                                   3323 ;	C:\Users\202019050169\Downloads\trabalho\main.c:179: break;
      0007E2 80 09            [24] 3324 	sjmp	00112$
      0007E4                       3325 00106$:
                           000750  3326 	C$main.c$182$2$84 ==.
                                   3327 ;	C:\Users\202019050169\Downloads\trabalho\main.c:182: if(tecla_menu==MENU_DIGITAL)
      0007E4 ED               [12] 3328 	mov	a,r5
      0007E5 60 F2            [24] 3329 	jz	00110$
                           000753  3330 	C$main.c$184$3$86 ==.
                                   3331 ;	C:\Users\202019050169\Downloads\trabalho\main.c:184: tempo_digital = definir_tempo_bluetooth();
      0007E7 12 06 F5         [24] 3332 	lcall	_definir_tempo_bluetooth
                           000756  3333 	C$main.c$185$3$86 ==.
                                   3334 ;	C:\Users\202019050169\Downloads\trabalho\main.c:185: contagemRegressiva(tempo_digital);
      0007EA 12 08 58         [24] 3335 	lcall	_contagemRegressiva
                           000759  3336 	C$main.c$186$1$82 ==.
                                   3337 ;	C:\Users\202019050169\Downloads\trabalho\main.c:186: break;
      0007ED                       3338 00112$:
                           000759  3339 	C$main.c$193$1$82 ==.
                           000759  3340 	XG$escolher_entrada$0$0 ==.
      0007ED 22               [24] 3341 	ret
                                   3342 ;------------------------------------------------------------
                                   3343 ;Allocation info for local variables in function 'uart_ISR'
                                   3344 ;------------------------------------------------------------
                           00075A  3345 	G$uart_ISR$0$0 ==.
                           00075A  3346 	C$main.c$203$1$82 ==.
                                   3347 ;	C:\Users\202019050169\Downloads\trabalho\main.c:203: void uart_ISR() __interrupt 4{
                                   3348 ;	-----------------------------------------
                                   3349 ;	 function uart_ISR
                                   3350 ;	-----------------------------------------
      0007EE                       3351 _uart_ISR:
                           00075A  3352 	C$main.c$205$1$87 ==.
                                   3353 ;	C:\Users\202019050169\Downloads\trabalho\main.c:205: if(RI0 == 1){
      0007EE 30 98 07         [24] 3354 	jnb	_RI0,00103$
                           00075D  3355 	C$main.c$206$2$88 ==.
                                   3356 ;	C:\Users\202019050169\Downloads\trabalho\main.c:206: x = 1;
      0007F1 D2 0B            [12] 3357 	setb	_x
                           00075F  3358 	C$main.c$207$2$88 ==.
                                   3359 ;	C:\Users\202019050169\Downloads\trabalho\main.c:207: tecla = SBUF0;
      0007F3 85 99 0C         [24] 3360 	mov	_tecla,_SBUF0
                           000762  3361 	C$main.c$208$2$88 ==.
                                   3362 ;	C:\Users\202019050169\Downloads\trabalho\main.c:208: RI0 = 0;
      0007F6 C2 98            [12] 3363 	clr	_RI0
      0007F8                       3364 00103$:
                           000764  3365 	C$main.c$210$1$87 ==.
                           000764  3366 	XG$uart_ISR$0$0 ==.
      0007F8 32               [24] 3367 	reti
                                   3368 ;	eliminated unneeded mov psw,# (no regs used in bank)
                                   3369 ;	eliminated unneeded push/pop psw
                                   3370 ;	eliminated unneeded push/pop dpl
                                   3371 ;	eliminated unneeded push/pop dph
                                   3372 ;	eliminated unneeded push/pop b
                                   3373 ;	eliminated unneeded push/pop acc
                                   3374 ;------------------------------------------------------------
                                   3375 ;Allocation info for local variables in function 'le_tec'
                                   3376 ;------------------------------------------------------------
                           000765  3377 	G$le_tec$0$0 ==.
                           000765  3378 	C$main.c$219$1$87 ==.
                                   3379 ;	C:\Users\202019050169\Downloads\trabalho\main.c:219: unsigned char le_tec(void){
                                   3380 ;	-----------------------------------------
                                   3381 ;	 function le_tec
                                   3382 ;	-----------------------------------------
      0007F9                       3383 _le_tec:
                           000765  3384 	C$main.c$221$1$90 ==.
                                   3385 ;	C:\Users\202019050169\Downloads\trabalho\main.c:221: if(P3_0==0)
      0007F9 20 B0 05         [24] 3386 	jb	_P3_0,00122$
                           000768  3387 	C$main.c$222$1$90 ==.
                                   3388 ;	C:\Users\202019050169\Downloads\trabalho\main.c:222: return 0;
      0007FC 75 82 00         [24] 3389 	mov	dpl,#0x00
      0007FF 80 3B            [24] 3390 	sjmp	00124$
      000801                       3391 00122$:
                           00076D  3392 	C$main.c$223$1$90 ==.
                                   3393 ;	C:\Users\202019050169\Downloads\trabalho\main.c:223: else if(P3_1==0)
      000801 20 B1 05         [24] 3394 	jb	_P3_1,00119$
                           000770  3395 	C$main.c$224$1$90 ==.
                                   3396 ;	C:\Users\202019050169\Downloads\trabalho\main.c:224: return 1;
      000804 75 82 01         [24] 3397 	mov	dpl,#0x01
      000807 80 33            [24] 3398 	sjmp	00124$
      000809                       3399 00119$:
                           000775  3400 	C$main.c$225$1$90 ==.
                                   3401 ;	C:\Users\202019050169\Downloads\trabalho\main.c:225: else if(P3_2==0)
      000809 20 B2 05         [24] 3402 	jb	_P3_2,00116$
                           000778  3403 	C$main.c$226$1$90 ==.
                                   3404 ;	C:\Users\202019050169\Downloads\trabalho\main.c:226: return 2;
      00080C 75 82 02         [24] 3405 	mov	dpl,#0x02
      00080F 80 2B            [24] 3406 	sjmp	00124$
      000811                       3407 00116$:
                           00077D  3408 	C$main.c$227$1$90 ==.
                                   3409 ;	C:\Users\202019050169\Downloads\trabalho\main.c:227: else if(P3_3==0)
      000811 20 B3 05         [24] 3410 	jb	_P3_3,00113$
                           000780  3411 	C$main.c$228$1$90 ==.
                                   3412 ;	C:\Users\202019050169\Downloads\trabalho\main.c:228: return 3;
      000814 75 82 03         [24] 3413 	mov	dpl,#0x03
      000817 80 23            [24] 3414 	sjmp	00124$
      000819                       3415 00113$:
                           000785  3416 	C$main.c$229$1$90 ==.
                                   3417 ;	C:\Users\202019050169\Downloads\trabalho\main.c:229: else if(P3_4==0)
      000819 20 B4 05         [24] 3418 	jb	_P3_4,00110$
                           000788  3419 	C$main.c$230$1$90 ==.
                                   3420 ;	C:\Users\202019050169\Downloads\trabalho\main.c:230: return 4;
      00081C 75 82 04         [24] 3421 	mov	dpl,#0x04
      00081F 80 1B            [24] 3422 	sjmp	00124$
      000821                       3423 00110$:
                           00078D  3424 	C$main.c$231$1$90 ==.
                                   3425 ;	C:\Users\202019050169\Downloads\trabalho\main.c:231: else if(P3_5==0)
      000821 20 B5 05         [24] 3426 	jb	_P3_5,00107$
                           000790  3427 	C$main.c$232$1$90 ==.
                                   3428 ;	C:\Users\202019050169\Downloads\trabalho\main.c:232: return 5;
      000824 75 82 05         [24] 3429 	mov	dpl,#0x05
      000827 80 13            [24] 3430 	sjmp	00124$
      000829                       3431 00107$:
                           000795  3432 	C$main.c$233$1$90 ==.
                                   3433 ;	C:\Users\202019050169\Downloads\trabalho\main.c:233: else if(P3_6==0)
      000829 20 B6 05         [24] 3434 	jb	_P3_6,00104$
                           000798  3435 	C$main.c$234$1$90 ==.
                                   3436 ;	C:\Users\202019050169\Downloads\trabalho\main.c:234: return 6;
      00082C 75 82 06         [24] 3437 	mov	dpl,#0x06
      00082F 80 0B            [24] 3438 	sjmp	00124$
      000831                       3439 00104$:
                           00079D  3440 	C$main.c$235$1$90 ==.
                                   3441 ;	C:\Users\202019050169\Downloads\trabalho\main.c:235: else if(P3_7==0)
      000831 20 B7 05         [24] 3442 	jb	_P3_7,00108$
                           0007A0  3443 	C$main.c$236$1$90 ==.
                                   3444 ;	C:\Users\202019050169\Downloads\trabalho\main.c:236: return 7;
      000834 75 82 07         [24] 3445 	mov	dpl,#0x07
      000837 80 03            [24] 3446 	sjmp	00124$
      000839                       3447 00108$:
                           0007A5  3448 	C$main.c$237$1$90 ==.
                                   3449 ;	C:\Users\202019050169\Downloads\trabalho\main.c:237: return TECS_OPEN;
      000839 75 82 FF         [24] 3450 	mov	dpl,#0xff
      00083C                       3451 00124$:
                           0007A8  3452 	C$main.c$239$1$90 ==.
                           0007A8  3453 	XG$le_tec$0$0 ==.
      00083C 22               [24] 3454 	ret
                                   3455 ;------------------------------------------------------------
                                   3456 ;Allocation info for local variables in function 'limpa_tela'
                                   3457 ;------------------------------------------------------------
                           0007A9  3458 	G$limpa_tela$0$0 ==.
                           0007A9  3459 	C$main.c$249$1$90 ==.
                                   3460 ;	C:\Users\202019050169\Downloads\trabalho\main.c:249: void limpa_tela() {
                                   3461 ;	-----------------------------------------
                                   3462 ;	 function limpa_tela
                                   3463 ;	-----------------------------------------
      00083D                       3464 _limpa_tela:
                           0007A9  3465 	C$main.c$250$1$91 ==.
                                   3466 ;	C:\Users\202019050169\Downloads\trabalho\main.c:250: limpa_glcd(ESQ);
      00083D C2 08            [12] 3467 	clr	_limpa_glcd_PARM_1
      00083F 12 02 6E         [24] 3468 	lcall	_limpa_glcd
                           0007AE  3469 	C$main.c$251$1$91 ==.
                                   3470 ;	C:\Users\202019050169\Downloads\trabalho\main.c:251: limpa_glcd(DIR);
      000842 D2 08            [12] 3471 	setb	_limpa_glcd_PARM_1
      000844 12 02 6E         [24] 3472 	lcall	_limpa_glcd
                           0007B3  3473 	C$main.c$252$1$91 ==.
                                   3474 ;	C:\Users\202019050169\Downloads\trabalho\main.c:252: conf_pag(0, ESQ);
      000847 C2 07            [12] 3475 	clr	_conf_pag_PARM_2
      000849 75 82 00         [24] 3476 	mov	dpl,#0x00
      00084C 12 02 5A         [24] 3477 	lcall	_conf_pag
                           0007BB  3478 	C$main.c$253$1$91 ==.
                                   3479 ;	C:\Users\202019050169\Downloads\trabalho\main.c:253: conf_pag(0, DIR);
      00084F D2 07            [12] 3480 	setb	_conf_pag_PARM_2
      000851 75 82 00         [24] 3481 	mov	dpl,#0x00
      000854 12 02 5A         [24] 3482 	lcall	_conf_pag
                           0007C3  3483 	C$main.c$254$1$91 ==.
                           0007C3  3484 	XG$limpa_tela$0$0 ==.
      000857 22               [24] 3485 	ret
                                   3486 ;------------------------------------------------------------
                                   3487 ;Allocation info for local variables in function 'contagemRegressiva'
                                   3488 ;------------------------------------------------------------
                                   3489 ;tempoTotal                Allocated to registers r6 r7 
                                   3490 ;minutos                   Allocated to registers r4 r5 
                                   3491 ;segundos                  Allocated to registers r2 r3 
                                   3492 ;tempoRestante             Allocated to registers r6 r7 
                                   3493 ;------------------------------------------------------------
                           0007C4  3494 	G$contagemRegressiva$0$0 ==.
                           0007C4  3495 	C$main.c$263$1$91 ==.
                                   3496 ;	C:\Users\202019050169\Downloads\trabalho\main.c:263: void contagemRegressiva(int tempoTotal) {
                                   3497 ;	-----------------------------------------
                                   3498 ;	 function contagemRegressiva
                                   3499 ;	-----------------------------------------
      000858                       3500 _contagemRegressiva:
      000858 AE 82            [24] 3501 	mov	r6,dpl
      00085A AF 83            [24] 3502 	mov	r7,dph
                           0007C8  3503 	C$main.c$268$1$93 ==.
                                   3504 ;	C:\Users\202019050169\Downloads\trabalho\main.c:268: MOTOR = 0; // RELE ? ao Contr?rio
      00085C C2 B7            [12] 3505 	clr	_P3_7
                           0007CA  3506 	C$main.c$269$1$93 ==.
                                   3507 ;	C:\Users\202019050169\Downloads\trabalho\main.c:269: MICROONDAS = 1;		
      00085E D2 B6            [12] 3508 	setb	_P3_6
                           0007CC  3509 	C$main.c$271$1$93 ==.
                                   3510 ;	C:\Users\202019050169\Downloads\trabalho\main.c:271: limpa_glcd(ESQ);
      000860 C2 08            [12] 3511 	clr	_limpa_glcd_PARM_1
      000862 C0 07            [24] 3512 	push	ar7
      000864 C0 06            [24] 3513 	push	ar6
      000866 12 02 6E         [24] 3514 	lcall	_limpa_glcd
                           0007D5  3515 	C$main.c$272$1$93 ==.
                                   3516 ;	C:\Users\202019050169\Downloads\trabalho\main.c:272: limpa_glcd(DIR);
      000869 D2 08            [12] 3517 	setb	_limpa_glcd_PARM_1
      00086B 12 02 6E         [24] 3518 	lcall	_limpa_glcd
                           0007DA  3519 	C$main.c$273$1$93 ==.
                                   3520 ;	C:\Users\202019050169\Downloads\trabalho\main.c:273: conf_pag(0, ESQ);
      00086E C2 07            [12] 3521 	clr	_conf_pag_PARM_2
      000870 75 82 00         [24] 3522 	mov	dpl,#0x00
      000873 12 02 5A         [24] 3523 	lcall	_conf_pag
                           0007E2  3524 	C$main.c$274$1$93 ==.
                                   3525 ;	C:\Users\202019050169\Downloads\trabalho\main.c:274: conf_pag(0, DIR);
      000876 D2 07            [12] 3526 	setb	_conf_pag_PARM_2
      000878 75 82 00         [24] 3527 	mov	dpl,#0x00
      00087B 12 02 5A         [24] 3528 	lcall	_conf_pag
      00087E D0 06            [24] 3529 	pop	ar6
      000880 D0 07            [24] 3530 	pop	ar7
                           0007EE  3531 	C$main.c$276$2$94 ==.
                                   3532 ;	C:\Users\202019050169\Downloads\trabalho\main.c:276: while (tempoRestante >= 0) {
      000882                       3533 00101$:
      000882 EF               [12] 3534 	mov	a,r7
      000883 30 E7 03         [24] 3535 	jnb	acc.7,00113$
      000886 02 09 0D         [24] 3536 	ljmp	00103$
      000889                       3537 00113$:
                           0007F5  3538 	C$main.c$277$1$93 ==.
                                   3539 ;	C:\Users\202019050169\Downloads\trabalho\main.c:277: minutos = tempoRestante / 60;
      000889 75 14 3C         [24] 3540 	mov	__divsint_PARM_2,#0x3c
      00088C 75 15 00         [24] 3541 	mov	(__divsint_PARM_2 + 1),#0x00
      00088F 8E 82            [24] 3542 	mov	dpl,r6
      000891 8F 83            [24] 3543 	mov	dph,r7
      000893 C0 07            [24] 3544 	push	ar7
      000895 C0 06            [24] 3545 	push	ar6
      000897 12 0F 25         [24] 3546 	lcall	__divsint
      00089A AC 82            [24] 3547 	mov	r4,dpl
      00089C AD 83            [24] 3548 	mov	r5,dph
      00089E D0 06            [24] 3549 	pop	ar6
      0008A0 D0 07            [24] 3550 	pop	ar7
                           00080E  3551 	C$main.c$278$1$93 ==.
                                   3552 ;	C:\Users\202019050169\Downloads\trabalho\main.c:278: segundos = tempoRestante % 60;
      0008A2 75 14 3C         [24] 3553 	mov	__modsint_PARM_2,#0x3c
      0008A5 75 15 00         [24] 3554 	mov	(__modsint_PARM_2 + 1),#0x00
      0008A8 8E 82            [24] 3555 	mov	dpl,r6
      0008AA 8F 83            [24] 3556 	mov	dph,r7
      0008AC C0 07            [24] 3557 	push	ar7
      0008AE C0 06            [24] 3558 	push	ar6
      0008B0 C0 05            [24] 3559 	push	ar5
      0008B2 C0 04            [24] 3560 	push	ar4
      0008B4 12 0E EF         [24] 3561 	lcall	__modsint
      0008B7 AA 82            [24] 3562 	mov	r2,dpl
      0008B9 AB 83            [24] 3563 	mov	r3,dph
                           000827  3564 	C$main.c$280$2$94 ==.
                                   3565 ;	C:\Users\202019050169\Downloads\trabalho\main.c:280: printf_fast_f("\x01 Start Timer..");
      0008BB C0 03            [24] 3566 	push	ar3
      0008BD C0 02            [24] 3567 	push	ar2
      0008BF 74 C1            [12] 3568 	mov	a,#___str_9
      0008C1 C0 E0            [24] 3569 	push	acc
      0008C3 74 11            [12] 3570 	mov	a,#(___str_9 >> 8)
      0008C5 C0 E0            [24] 3571 	push	acc
      0008C7 12 09 7C         [24] 3572 	lcall	_printf_fast_f
      0008CA 15 81            [12] 3573 	dec	sp
      0008CC 15 81            [12] 3574 	dec	sp
      0008CE D0 02            [24] 3575 	pop	ar2
      0008D0 D0 03            [24] 3576 	pop	ar3
      0008D2 D0 04            [24] 3577 	pop	ar4
      0008D4 D0 05            [24] 3578 	pop	ar5
                           000842  3579 	C$main.c$281$2$94 ==.
                                   3580 ;	C:\Users\202019050169\Downloads\trabalho\main.c:281: printf_fast_f("\x02 %02d:%02d", minutos, segundos);
      0008D6 C0 02            [24] 3581 	push	ar2
      0008D8 C0 03            [24] 3582 	push	ar3
      0008DA C0 04            [24] 3583 	push	ar4
      0008DC C0 05            [24] 3584 	push	ar5
      0008DE 74 D1            [12] 3585 	mov	a,#___str_10
      0008E0 C0 E0            [24] 3586 	push	acc
      0008E2 74 11            [12] 3587 	mov	a,#(___str_10 >> 8)
      0008E4 C0 E0            [24] 3588 	push	acc
      0008E6 12 09 7C         [24] 3589 	lcall	_printf_fast_f
      0008E9 E5 81            [12] 3590 	mov	a,sp
      0008EB 24 FA            [12] 3591 	add	a,#0xfa
      0008ED F5 81            [12] 3592 	mov	sp,a
      0008EF D0 06            [24] 3593 	pop	ar6
                           00085D  3594 	C$main.c$282$2$94 ==.
                                   3595 ;	C:\Users\202019050169\Downloads\trabalho\main.c:282: esc_RAM_SPI(ENDERECO, tempoRestante);
      0008F1 8E 14            [24] 3596 	mov	_esc_RAM_SPI_PARM_2,r6
      0008F3 90 00 01         [24] 3597 	mov	dptr,#0x0001
      0008F6 C0 06            [24] 3598 	push	ar6
      0008F8 12 04 32         [24] 3599 	lcall	_esc_RAM_SPI
                           000867  3600 	C$main.c$283$2$94 ==.
                                   3601 ;	C:\Users\202019050169\Downloads\trabalho\main.c:283: delay_ms(1000); // Espera 1 segundo
      0008FB 90 03 E8         [24] 3602 	mov	dptr,#0x03e8
      0008FE 12 03 E0         [24] 3603 	lcall	_delay_ms
      000901 D0 06            [24] 3604 	pop	ar6
      000903 D0 07            [24] 3605 	pop	ar7
                           000871  3606 	C$main.c$284$2$94 ==.
                                   3607 ;	C:\Users\202019050169\Downloads\trabalho\main.c:284: tempoRestante--;
      000905 1E               [12] 3608 	dec	r6
      000906 BE FF 01         [24] 3609 	cjne	r6,#0xff,00114$
      000909 1F               [12] 3610 	dec	r7
      00090A                       3611 00114$:
      00090A 02 08 82         [24] 3612 	ljmp	00101$
      00090D                       3613 00103$:
                           000879  3614 	C$main.c$287$1$93 ==.
                                   3615 ;	C:\Users\202019050169\Downloads\trabalho\main.c:287: MOTOR = 1;
      00090D D2 B7            [12] 3616 	setb	_P3_7
                           00087B  3617 	C$main.c$288$1$93 ==.
                                   3618 ;	C:\Users\202019050169\Downloads\trabalho\main.c:288: MICROONDAS = 0;
      00090F C2 B6            [12] 3619 	clr	_P3_6
                           00087D  3620 	C$main.c$290$1$93 ==.
                                   3621 ;	C:\Users\202019050169\Downloads\trabalho\main.c:290: ligar_buzzer();
      000911 12 05 06         [24] 3622 	lcall	_ligar_buzzer
                           000880  3623 	C$main.c$291$1$93 ==.
                                   3624 ;	C:\Users\202019050169\Downloads\trabalho\main.c:291: printf_fast_f("\x07 Pronto");
      000914 74 DD            [12] 3625 	mov	a,#___str_11
      000916 C0 E0            [24] 3626 	push	acc
      000918 74 11            [12] 3627 	mov	a,#(___str_11 >> 8)
      00091A C0 E0            [24] 3628 	push	acc
      00091C 12 09 7C         [24] 3629 	lcall	_printf_fast_f
      00091F 15 81            [12] 3630 	dec	sp
      000921 15 81            [12] 3631 	dec	sp
                           00088F  3632 	C$main.c$292$1$93 ==.
                                   3633 ;	C:\Users\202019050169\Downloads\trabalho\main.c:292: delay_ms(1000);
      000923 90 03 E8         [24] 3634 	mov	dptr,#0x03e8
      000926 12 03 E0         [24] 3635 	lcall	_delay_ms
                           000895  3636 	C$main.c$294$1$93 ==.
                           000895  3637 	XG$contagemRegressiva$0$0 ==.
      000929 22               [24] 3638 	ret
                                   3639 ;------------------------------------------------------------
                                   3640 ;Allocation info for local variables in function 'main'
                                   3641 ;------------------------------------------------------------
                                   3642 ;aux                       Allocated to registers r7 r6 
                                   3643 ;------------------------------------------------------------
                           000896  3644 	G$main$0$0 ==.
                           000896  3645 	C$main.c$303$1$93 ==.
                                   3646 ;	C:\Users\202019050169\Downloads\trabalho\main.c:303: void main(void)
                                   3647 ;	-----------------------------------------
                                   3648 ;	 function main
                                   3649 ;	-----------------------------------------
      00092A                       3650 _main:
                           000896  3651 	C$main.c$306$1$96 ==.
                                   3652 ;	C:\Users\202019050169\Downloads\trabalho\main.c:306: buzzer = 0;
      00092A C2 B5            [12] 3653 	clr	_P3_5
                           000898  3654 	C$main.c$308$1$96 ==.
                                   3655 ;	C:\Users\202019050169\Downloads\trabalho\main.c:308: Init_Device();
      00092C 12 01 2D         [24] 3656 	lcall	_Init_Device
                           00089B  3657 	C$main.c$309$1$96 ==.
                                   3658 ;	C:\Users\202019050169\Downloads\trabalho\main.c:309: setup();
      00092F 12 03 DC         [24] 3659 	lcall	_setup
                           00089E  3660 	C$main.c$311$1$96 ==.
                                   3661 ;	C:\Users\202019050169\Downloads\trabalho\main.c:311: init_GLCD();
      000932 12 01 DF         [24] 3662 	lcall	_init_GLCD
                           0008A1  3663 	C$main.c$312$1$96 ==.
                                   3664 ;	C:\Users\202019050169\Downloads\trabalho\main.c:312: limpa_tela();
      000935 12 08 3D         [24] 3665 	lcall	_limpa_tela
                           0008A4  3666 	C$main.c$314$1$96 ==.
                                   3667 ;	C:\Users\202019050169\Downloads\trabalho\main.c:314: esc_RAM_SPI(ENDERECO, 5);
      000938 75 14 05         [24] 3668 	mov	_esc_RAM_SPI_PARM_2,#0x05
      00093B 90 00 01         [24] 3669 	mov	dptr,#0x0001
      00093E 12 04 32         [24] 3670 	lcall	_esc_RAM_SPI
                           0008AD  3671 	C$main.c$315$1$96 ==.
                                   3672 ;	C:\Users\202019050169\Downloads\trabalho\main.c:315: aux = le_RAM_SPI(ENDERECO);
      000941 90 00 01         [24] 3673 	mov	dptr,#0x0001
      000944 12 04 5A         [24] 3674 	lcall	_le_RAM_SPI
      000947 AF 82            [24] 3675 	mov	r7,dpl
      000949 7E 00            [12] 3676 	mov	r6,#0x00
                           0008B7  3677 	C$main.c$317$1$96 ==.
                                   3678 ;	C:\Users\202019050169\Downloads\trabalho\main.c:317: printf_fast_f("\x01 Tempo: %d s",aux);
      00094B C0 07            [24] 3679 	push	ar7
      00094D C0 06            [24] 3680 	push	ar6
      00094F C0 07            [24] 3681 	push	ar7
      000951 C0 06            [24] 3682 	push	ar6
      000953 74 E6            [12] 3683 	mov	a,#___str_12
      000955 C0 E0            [24] 3684 	push	acc
      000957 74 11            [12] 3685 	mov	a,#(___str_12 >> 8)
      000959 C0 E0            [24] 3686 	push	acc
      00095B 12 09 7C         [24] 3687 	lcall	_printf_fast_f
      00095E E5 81            [12] 3688 	mov	a,sp
      000960 24 FC            [12] 3689 	add	a,#0xfc
      000962 F5 81            [12] 3690 	mov	sp,a
                           0008D0  3691 	C$main.c$319$1$96 ==.
                                   3692 ;	C:\Users\202019050169\Downloads\trabalho\main.c:319: delay_ms(5000);
      000964 90 13 88         [24] 3693 	mov	dptr,#0x1388
      000967 12 03 E0         [24] 3694 	lcall	_delay_ms
      00096A D0 06            [24] 3695 	pop	ar6
      00096C D0 07            [24] 3696 	pop	ar7
                           0008DA  3697 	C$main.c$321$1$96 ==.
                                   3698 ;	C:\Users\202019050169\Downloads\trabalho\main.c:321: contagemRegressiva(aux);
      00096E 8F 82            [24] 3699 	mov	dpl,r7
      000970 8E 83            [24] 3700 	mov	dph,r6
      000972 12 08 58         [24] 3701 	lcall	_contagemRegressiva
                           0008E1  3702 	C$main.c$324$1$96 ==.
                                   3703 ;	C:\Users\202019050169\Downloads\trabalho\main.c:324: delay_ms(120000);
      000975 90 D4 C0         [24] 3704 	mov	dptr,#0xd4c0
      000978 12 03 E0         [24] 3705 	lcall	_delay_ms
                           0008E7  3706 	C$main.c$358$1$96 ==.
                           0008E7  3707 	XG$main$0$0 ==.
      00097B 22               [24] 3708 	ret
                                   3709 	.area CSEG    (CODE)
                                   3710 	.area CONST   (CODE)
                           000000  3711 G$fonte$0$0 == .
      000F61                       3712 _fonte:
      000F61 00                    3713 	.db #0x00	; 0
      000F62 00                    3714 	.db #0x00	; 0
      000F63 00                    3715 	.db #0x00	; 0
      000F64 00                    3716 	.db #0x00	; 0
      000F65 00                    3717 	.db #0x00	; 0
      000F66 00                    3718 	.db #0x00	; 0
      000F67 00                    3719 	.db #0x00	; 0
      000F68 5F                    3720 	.db #0x5f	; 95
      000F69 00                    3721 	.db #0x00	; 0
      000F6A 00                    3722 	.db #0x00	; 0
      000F6B 00                    3723 	.db #0x00	; 0
      000F6C 07                    3724 	.db #0x07	; 7
      000F6D 00                    3725 	.db #0x00	; 0
      000F6E 07                    3726 	.db #0x07	; 7
      000F6F 00                    3727 	.db #0x00	; 0
      000F70 14                    3728 	.db #0x14	; 20
      000F71 7F                    3729 	.db #0x7f	; 127
      000F72 14                    3730 	.db #0x14	; 20
      000F73 7F                    3731 	.db #0x7f	; 127
      000F74 14                    3732 	.db #0x14	; 20
      000F75 24                    3733 	.db #0x24	; 36
      000F76 2A                    3734 	.db #0x2a	; 42
      000F77 7F                    3735 	.db #0x7f	; 127
      000F78 2A                    3736 	.db #0x2a	; 42
      000F79 12                    3737 	.db #0x12	; 18
      000F7A 23                    3738 	.db #0x23	; 35
      000F7B 13                    3739 	.db #0x13	; 19
      000F7C 08                    3740 	.db #0x08	; 8
      000F7D 64                    3741 	.db #0x64	; 100	'd'
      000F7E 62                    3742 	.db #0x62	; 98	'b'
      000F7F 36                    3743 	.db #0x36	; 54	'6'
      000F80 49                    3744 	.db #0x49	; 73	'I'
      000F81 55                    3745 	.db #0x55	; 85	'U'
      000F82 22                    3746 	.db #0x22	; 34
      000F83 50                    3747 	.db #0x50	; 80	'P'
      000F84 00                    3748 	.db #0x00	; 0
      000F85 05                    3749 	.db #0x05	; 5
      000F86 03                    3750 	.db #0x03	; 3
      000F87 00                    3751 	.db #0x00	; 0
      000F88 00                    3752 	.db #0x00	; 0
      000F89 00                    3753 	.db #0x00	; 0
      000F8A 1C                    3754 	.db #0x1c	; 28
      000F8B 22                    3755 	.db #0x22	; 34
      000F8C 41                    3756 	.db #0x41	; 65	'A'
      000F8D 00                    3757 	.db #0x00	; 0
      000F8E 00                    3758 	.db #0x00	; 0
      000F8F 41                    3759 	.db #0x41	; 65	'A'
      000F90 22                    3760 	.db #0x22	; 34
      000F91 1C                    3761 	.db #0x1c	; 28
      000F92 00                    3762 	.db #0x00	; 0
      000F93 08                    3763 	.db #0x08	; 8
      000F94 2A                    3764 	.db #0x2a	; 42
      000F95 1C                    3765 	.db #0x1c	; 28
      000F96 2A                    3766 	.db #0x2a	; 42
      000F97 08                    3767 	.db #0x08	; 8
      000F98 08                    3768 	.db #0x08	; 8
      000F99 08                    3769 	.db #0x08	; 8
      000F9A 3E                    3770 	.db #0x3e	; 62
      000F9B 08                    3771 	.db #0x08	; 8
      000F9C 08                    3772 	.db #0x08	; 8
      000F9D 00                    3773 	.db #0x00	; 0
      000F9E 50                    3774 	.db #0x50	; 80	'P'
      000F9F 30                    3775 	.db #0x30	; 48	'0'
      000FA0 00                    3776 	.db #0x00	; 0
      000FA1 00                    3777 	.db #0x00	; 0
      000FA2 08                    3778 	.db #0x08	; 8
      000FA3 08                    3779 	.db #0x08	; 8
      000FA4 08                    3780 	.db #0x08	; 8
      000FA5 08                    3781 	.db #0x08	; 8
      000FA6 08                    3782 	.db #0x08	; 8
      000FA7 00                    3783 	.db #0x00	; 0
      000FA8 30                    3784 	.db #0x30	; 48	'0'
      000FA9 30                    3785 	.db #0x30	; 48	'0'
      000FAA 00                    3786 	.db #0x00	; 0
      000FAB 00                    3787 	.db #0x00	; 0
      000FAC 20                    3788 	.db #0x20	; 32
      000FAD 10                    3789 	.db #0x10	; 16
      000FAE 08                    3790 	.db #0x08	; 8
      000FAF 04                    3791 	.db #0x04	; 4
      000FB0 02                    3792 	.db #0x02	; 2
      000FB1 3E                    3793 	.db #0x3e	; 62
      000FB2 51                    3794 	.db #0x51	; 81	'Q'
      000FB3 49                    3795 	.db #0x49	; 73	'I'
      000FB4 45                    3796 	.db #0x45	; 69	'E'
      000FB5 3E                    3797 	.db #0x3e	; 62
      000FB6 00                    3798 	.db #0x00	; 0
      000FB7 42                    3799 	.db #0x42	; 66	'B'
      000FB8 7F                    3800 	.db #0x7f	; 127
      000FB9 40                    3801 	.db #0x40	; 64
      000FBA 00                    3802 	.db #0x00	; 0
      000FBB 42                    3803 	.db #0x42	; 66	'B'
      000FBC 61                    3804 	.db #0x61	; 97	'a'
      000FBD 51                    3805 	.db #0x51	; 81	'Q'
      000FBE 49                    3806 	.db #0x49	; 73	'I'
      000FBF 46                    3807 	.db #0x46	; 70	'F'
      000FC0 21                    3808 	.db #0x21	; 33
      000FC1 41                    3809 	.db #0x41	; 65	'A'
      000FC2 45                    3810 	.db #0x45	; 69	'E'
      000FC3 4B                    3811 	.db #0x4b	; 75	'K'
      000FC4 31                    3812 	.db #0x31	; 49	'1'
      000FC5 18                    3813 	.db #0x18	; 24
      000FC6 14                    3814 	.db #0x14	; 20
      000FC7 12                    3815 	.db #0x12	; 18
      000FC8 7F                    3816 	.db #0x7f	; 127
      000FC9 10                    3817 	.db #0x10	; 16
      000FCA 27                    3818 	.db #0x27	; 39
      000FCB 45                    3819 	.db #0x45	; 69	'E'
      000FCC 45                    3820 	.db #0x45	; 69	'E'
      000FCD 45                    3821 	.db #0x45	; 69	'E'
      000FCE 39                    3822 	.db #0x39	; 57	'9'
      000FCF 3C                    3823 	.db #0x3c	; 60
      000FD0 4A                    3824 	.db #0x4a	; 74	'J'
      000FD1 49                    3825 	.db #0x49	; 73	'I'
      000FD2 49                    3826 	.db #0x49	; 73	'I'
      000FD3 30                    3827 	.db #0x30	; 48	'0'
      000FD4 01                    3828 	.db #0x01	; 1
      000FD5 71                    3829 	.db #0x71	; 113	'q'
      000FD6 09                    3830 	.db #0x09	; 9
      000FD7 05                    3831 	.db #0x05	; 5
      000FD8 03                    3832 	.db #0x03	; 3
      000FD9 36                    3833 	.db #0x36	; 54	'6'
      000FDA 49                    3834 	.db #0x49	; 73	'I'
      000FDB 49                    3835 	.db #0x49	; 73	'I'
      000FDC 49                    3836 	.db #0x49	; 73	'I'
      000FDD 36                    3837 	.db #0x36	; 54	'6'
      000FDE 06                    3838 	.db #0x06	; 6
      000FDF 49                    3839 	.db #0x49	; 73	'I'
      000FE0 49                    3840 	.db #0x49	; 73	'I'
      000FE1 29                    3841 	.db #0x29	; 41
      000FE2 1E                    3842 	.db #0x1e	; 30
      000FE3 00                    3843 	.db #0x00	; 0
      000FE4 36                    3844 	.db #0x36	; 54	'6'
      000FE5 36                    3845 	.db #0x36	; 54	'6'
      000FE6 00                    3846 	.db #0x00	; 0
      000FE7 00                    3847 	.db #0x00	; 0
      000FE8 00                    3848 	.db #0x00	; 0
      000FE9 56                    3849 	.db #0x56	; 86	'V'
      000FEA 36                    3850 	.db #0x36	; 54	'6'
      000FEB 00                    3851 	.db #0x00	; 0
      000FEC 00                    3852 	.db #0x00	; 0
      000FED 00                    3853 	.db #0x00	; 0
      000FEE 08                    3854 	.db #0x08	; 8
      000FEF 14                    3855 	.db #0x14	; 20
      000FF0 22                    3856 	.db #0x22	; 34
      000FF1 41                    3857 	.db #0x41	; 65	'A'
      000FF2 14                    3858 	.db #0x14	; 20
      000FF3 14                    3859 	.db #0x14	; 20
      000FF4 14                    3860 	.db #0x14	; 20
      000FF5 14                    3861 	.db #0x14	; 20
      000FF6 14                    3862 	.db #0x14	; 20
      000FF7 41                    3863 	.db #0x41	; 65	'A'
      000FF8 22                    3864 	.db #0x22	; 34
      000FF9 14                    3865 	.db #0x14	; 20
      000FFA 08                    3866 	.db #0x08	; 8
      000FFB 00                    3867 	.db #0x00	; 0
      000FFC 02                    3868 	.db #0x02	; 2
      000FFD 01                    3869 	.db #0x01	; 1
      000FFE 51                    3870 	.db #0x51	; 81	'Q'
      000FFF 09                    3871 	.db #0x09	; 9
      001000 06                    3872 	.db #0x06	; 6
      001001 32                    3873 	.db #0x32	; 50	'2'
      001002 49                    3874 	.db #0x49	; 73	'I'
      001003 79                    3875 	.db #0x79	; 121	'y'
      001004 41                    3876 	.db #0x41	; 65	'A'
      001005 3E                    3877 	.db #0x3e	; 62
      001006 7E                    3878 	.db #0x7e	; 126
      001007 11                    3879 	.db #0x11	; 17
      001008 11                    3880 	.db #0x11	; 17
      001009 11                    3881 	.db #0x11	; 17
      00100A 7E                    3882 	.db #0x7e	; 126
      00100B 7F                    3883 	.db #0x7f	; 127
      00100C 49                    3884 	.db #0x49	; 73	'I'
      00100D 49                    3885 	.db #0x49	; 73	'I'
      00100E 49                    3886 	.db #0x49	; 73	'I'
      00100F 36                    3887 	.db #0x36	; 54	'6'
      001010 3E                    3888 	.db #0x3e	; 62
      001011 41                    3889 	.db #0x41	; 65	'A'
      001012 41                    3890 	.db #0x41	; 65	'A'
      001013 41                    3891 	.db #0x41	; 65	'A'
      001014 22                    3892 	.db #0x22	; 34
      001015 7F                    3893 	.db #0x7f	; 127
      001016 41                    3894 	.db #0x41	; 65	'A'
      001017 41                    3895 	.db #0x41	; 65	'A'
      001018 22                    3896 	.db #0x22	; 34
      001019 1C                    3897 	.db #0x1c	; 28
      00101A 7F                    3898 	.db #0x7f	; 127
      00101B 49                    3899 	.db #0x49	; 73	'I'
      00101C 49                    3900 	.db #0x49	; 73	'I'
      00101D 49                    3901 	.db #0x49	; 73	'I'
      00101E 41                    3902 	.db #0x41	; 65	'A'
      00101F 7F                    3903 	.db #0x7f	; 127
      001020 09                    3904 	.db #0x09	; 9
      001021 09                    3905 	.db #0x09	; 9
      001022 01                    3906 	.db #0x01	; 1
      001023 01                    3907 	.db #0x01	; 1
      001024 3E                    3908 	.db #0x3e	; 62
      001025 41                    3909 	.db #0x41	; 65	'A'
      001026 41                    3910 	.db #0x41	; 65	'A'
      001027 51                    3911 	.db #0x51	; 81	'Q'
      001028 32                    3912 	.db #0x32	; 50	'2'
      001029 7F                    3913 	.db #0x7f	; 127
      00102A 08                    3914 	.db #0x08	; 8
      00102B 08                    3915 	.db #0x08	; 8
      00102C 08                    3916 	.db #0x08	; 8
      00102D 7F                    3917 	.db #0x7f	; 127
      00102E 00                    3918 	.db #0x00	; 0
      00102F 41                    3919 	.db #0x41	; 65	'A'
      001030 7F                    3920 	.db #0x7f	; 127
      001031 41                    3921 	.db #0x41	; 65	'A'
      001032 00                    3922 	.db #0x00	; 0
      001033 20                    3923 	.db #0x20	; 32
      001034 40                    3924 	.db #0x40	; 64
      001035 41                    3925 	.db #0x41	; 65	'A'
      001036 3F                    3926 	.db #0x3f	; 63
      001037 01                    3927 	.db #0x01	; 1
      001038 7F                    3928 	.db #0x7f	; 127
      001039 08                    3929 	.db #0x08	; 8
      00103A 14                    3930 	.db #0x14	; 20
      00103B 22                    3931 	.db #0x22	; 34
      00103C 41                    3932 	.db #0x41	; 65	'A'
      00103D 7F                    3933 	.db #0x7f	; 127
      00103E 40                    3934 	.db #0x40	; 64
      00103F 40                    3935 	.db #0x40	; 64
      001040 40                    3936 	.db #0x40	; 64
      001041 40                    3937 	.db #0x40	; 64
      001042 7F                    3938 	.db #0x7f	; 127
      001043 02                    3939 	.db #0x02	; 2
      001044 04                    3940 	.db #0x04	; 4
      001045 02                    3941 	.db #0x02	; 2
      001046 7F                    3942 	.db #0x7f	; 127
      001047 7F                    3943 	.db #0x7f	; 127
      001048 04                    3944 	.db #0x04	; 4
      001049 08                    3945 	.db #0x08	; 8
      00104A 10                    3946 	.db #0x10	; 16
      00104B 7F                    3947 	.db #0x7f	; 127
      00104C 3E                    3948 	.db #0x3e	; 62
      00104D 41                    3949 	.db #0x41	; 65	'A'
      00104E 41                    3950 	.db #0x41	; 65	'A'
      00104F 41                    3951 	.db #0x41	; 65	'A'
      001050 3E                    3952 	.db #0x3e	; 62
      001051 7F                    3953 	.db #0x7f	; 127
      001052 09                    3954 	.db #0x09	; 9
      001053 09                    3955 	.db #0x09	; 9
      001054 09                    3956 	.db #0x09	; 9
      001055 06                    3957 	.db #0x06	; 6
      001056 3E                    3958 	.db #0x3e	; 62
      001057 41                    3959 	.db #0x41	; 65	'A'
      001058 51                    3960 	.db #0x51	; 81	'Q'
      001059 21                    3961 	.db #0x21	; 33
      00105A 5E                    3962 	.db #0x5e	; 94
      00105B 7F                    3963 	.db #0x7f	; 127
      00105C 09                    3964 	.db #0x09	; 9
      00105D 19                    3965 	.db #0x19	; 25
      00105E 29                    3966 	.db #0x29	; 41
      00105F 46                    3967 	.db #0x46	; 70	'F'
      001060 46                    3968 	.db #0x46	; 70	'F'
      001061 49                    3969 	.db #0x49	; 73	'I'
      001062 49                    3970 	.db #0x49	; 73	'I'
      001063 49                    3971 	.db #0x49	; 73	'I'
      001064 31                    3972 	.db #0x31	; 49	'1'
      001065 01                    3973 	.db #0x01	; 1
      001066 01                    3974 	.db #0x01	; 1
      001067 7F                    3975 	.db #0x7f	; 127
      001068 01                    3976 	.db #0x01	; 1
      001069 01                    3977 	.db #0x01	; 1
      00106A 3F                    3978 	.db #0x3f	; 63
      00106B 40                    3979 	.db #0x40	; 64
      00106C 40                    3980 	.db #0x40	; 64
      00106D 40                    3981 	.db #0x40	; 64
      00106E 3F                    3982 	.db #0x3f	; 63
      00106F 1F                    3983 	.db #0x1f	; 31
      001070 20                    3984 	.db #0x20	; 32
      001071 40                    3985 	.db #0x40	; 64
      001072 20                    3986 	.db #0x20	; 32
      001073 1F                    3987 	.db #0x1f	; 31
      001074 7F                    3988 	.db #0x7f	; 127
      001075 20                    3989 	.db #0x20	; 32
      001076 18                    3990 	.db #0x18	; 24
      001077 20                    3991 	.db #0x20	; 32
      001078 7F                    3992 	.db #0x7f	; 127
      001079 63                    3993 	.db #0x63	; 99	'c'
      00107A 14                    3994 	.db #0x14	; 20
      00107B 08                    3995 	.db #0x08	; 8
      00107C 14                    3996 	.db #0x14	; 20
      00107D 63                    3997 	.db #0x63	; 99	'c'
      00107E 03                    3998 	.db #0x03	; 3
      00107F 04                    3999 	.db #0x04	; 4
      001080 78                    4000 	.db #0x78	; 120	'x'
      001081 04                    4001 	.db #0x04	; 4
      001082 03                    4002 	.db #0x03	; 3
      001083 61                    4003 	.db #0x61	; 97	'a'
      001084 51                    4004 	.db #0x51	; 81	'Q'
      001085 49                    4005 	.db #0x49	; 73	'I'
      001086 45                    4006 	.db #0x45	; 69	'E'
      001087 43                    4007 	.db #0x43	; 67	'C'
      001088 00                    4008 	.db #0x00	; 0
      001089 00                    4009 	.db #0x00	; 0
      00108A 7F                    4010 	.db #0x7f	; 127
      00108B 41                    4011 	.db #0x41	; 65	'A'
      00108C 41                    4012 	.db #0x41	; 65	'A'
      00108D 02                    4013 	.db #0x02	; 2
      00108E 04                    4014 	.db #0x04	; 4
      00108F 08                    4015 	.db #0x08	; 8
      001090 10                    4016 	.db #0x10	; 16
      001091 20                    4017 	.db #0x20	; 32
      001092 41                    4018 	.db #0x41	; 65	'A'
      001093 41                    4019 	.db #0x41	; 65	'A'
      001094 7F                    4020 	.db #0x7f	; 127
      001095 00                    4021 	.db #0x00	; 0
      001096 00                    4022 	.db #0x00	; 0
      001097 04                    4023 	.db #0x04	; 4
      001098 02                    4024 	.db #0x02	; 2
      001099 01                    4025 	.db #0x01	; 1
      00109A 02                    4026 	.db #0x02	; 2
      00109B 04                    4027 	.db #0x04	; 4
      00109C 40                    4028 	.db #0x40	; 64
      00109D 40                    4029 	.db #0x40	; 64
      00109E 40                    4030 	.db #0x40	; 64
      00109F 40                    4031 	.db #0x40	; 64
      0010A0 40                    4032 	.db #0x40	; 64
      0010A1 00                    4033 	.db #0x00	; 0
      0010A2 01                    4034 	.db #0x01	; 1
      0010A3 02                    4035 	.db #0x02	; 2
      0010A4 04                    4036 	.db #0x04	; 4
      0010A5 00                    4037 	.db #0x00	; 0
      0010A6 20                    4038 	.db #0x20	; 32
      0010A7 54                    4039 	.db #0x54	; 84	'T'
      0010A8 54                    4040 	.db #0x54	; 84	'T'
      0010A9 54                    4041 	.db #0x54	; 84	'T'
      0010AA 78                    4042 	.db #0x78	; 120	'x'
      0010AB 7F                    4043 	.db #0x7f	; 127
      0010AC 48                    4044 	.db #0x48	; 72	'H'
      0010AD 44                    4045 	.db #0x44	; 68	'D'
      0010AE 44                    4046 	.db #0x44	; 68	'D'
      0010AF 38                    4047 	.db #0x38	; 56	'8'
      0010B0 38                    4048 	.db #0x38	; 56	'8'
      0010B1 44                    4049 	.db #0x44	; 68	'D'
      0010B2 44                    4050 	.db #0x44	; 68	'D'
      0010B3 44                    4051 	.db #0x44	; 68	'D'
      0010B4 20                    4052 	.db #0x20	; 32
      0010B5 38                    4053 	.db #0x38	; 56	'8'
      0010B6 44                    4054 	.db #0x44	; 68	'D'
      0010B7 44                    4055 	.db #0x44	; 68	'D'
      0010B8 48                    4056 	.db #0x48	; 72	'H'
      0010B9 7F                    4057 	.db #0x7f	; 127
      0010BA 38                    4058 	.db #0x38	; 56	'8'
      0010BB 54                    4059 	.db #0x54	; 84	'T'
      0010BC 54                    4060 	.db #0x54	; 84	'T'
      0010BD 54                    4061 	.db #0x54	; 84	'T'
      0010BE 18                    4062 	.db #0x18	; 24
      0010BF 08                    4063 	.db #0x08	; 8
      0010C0 7E                    4064 	.db #0x7e	; 126
      0010C1 09                    4065 	.db #0x09	; 9
      0010C2 01                    4066 	.db #0x01	; 1
      0010C3 02                    4067 	.db #0x02	; 2
      0010C4 08                    4068 	.db #0x08	; 8
      0010C5 14                    4069 	.db #0x14	; 20
      0010C6 54                    4070 	.db #0x54	; 84	'T'
      0010C7 54                    4071 	.db #0x54	; 84	'T'
      0010C8 3C                    4072 	.db #0x3c	; 60
      0010C9 7F                    4073 	.db #0x7f	; 127
      0010CA 08                    4074 	.db #0x08	; 8
      0010CB 04                    4075 	.db #0x04	; 4
      0010CC 04                    4076 	.db #0x04	; 4
      0010CD 78                    4077 	.db #0x78	; 120	'x'
      0010CE 00                    4078 	.db #0x00	; 0
      0010CF 44                    4079 	.db #0x44	; 68	'D'
      0010D0 7D                    4080 	.db #0x7d	; 125
      0010D1 40                    4081 	.db #0x40	; 64
      0010D2 00                    4082 	.db #0x00	; 0
      0010D3 20                    4083 	.db #0x20	; 32
      0010D4 40                    4084 	.db #0x40	; 64
      0010D5 44                    4085 	.db #0x44	; 68	'D'
      0010D6 3D                    4086 	.db #0x3d	; 61
      0010D7 00                    4087 	.db #0x00	; 0
      0010D8 00                    4088 	.db #0x00	; 0
      0010D9 7F                    4089 	.db #0x7f	; 127
      0010DA 10                    4090 	.db #0x10	; 16
      0010DB 28                    4091 	.db #0x28	; 40
      0010DC 44                    4092 	.db #0x44	; 68	'D'
      0010DD 00                    4093 	.db #0x00	; 0
      0010DE 41                    4094 	.db #0x41	; 65	'A'
      0010DF 7F                    4095 	.db #0x7f	; 127
      0010E0 40                    4096 	.db #0x40	; 64
      0010E1 00                    4097 	.db #0x00	; 0
      0010E2 7C                    4098 	.db #0x7c	; 124
      0010E3 04                    4099 	.db #0x04	; 4
      0010E4 18                    4100 	.db #0x18	; 24
      0010E5 04                    4101 	.db #0x04	; 4
      0010E6 78                    4102 	.db #0x78	; 120	'x'
      0010E7 7C                    4103 	.db #0x7c	; 124
      0010E8 08                    4104 	.db #0x08	; 8
      0010E9 04                    4105 	.db #0x04	; 4
      0010EA 04                    4106 	.db #0x04	; 4
      0010EB 78                    4107 	.db #0x78	; 120	'x'
      0010EC 38                    4108 	.db #0x38	; 56	'8'
      0010ED 44                    4109 	.db #0x44	; 68	'D'
      0010EE 44                    4110 	.db #0x44	; 68	'D'
      0010EF 44                    4111 	.db #0x44	; 68	'D'
      0010F0 38                    4112 	.db #0x38	; 56	'8'
      0010F1 7C                    4113 	.db #0x7c	; 124
      0010F2 14                    4114 	.db #0x14	; 20
      0010F3 14                    4115 	.db #0x14	; 20
      0010F4 14                    4116 	.db #0x14	; 20
      0010F5 08                    4117 	.db #0x08	; 8
      0010F6 08                    4118 	.db #0x08	; 8
      0010F7 14                    4119 	.db #0x14	; 20
      0010F8 14                    4120 	.db #0x14	; 20
      0010F9 18                    4121 	.db #0x18	; 24
      0010FA 7C                    4122 	.db #0x7c	; 124
      0010FB 7C                    4123 	.db #0x7c	; 124
      0010FC 08                    4124 	.db #0x08	; 8
      0010FD 04                    4125 	.db #0x04	; 4
      0010FE 04                    4126 	.db #0x04	; 4
      0010FF 08                    4127 	.db #0x08	; 8
      001100 48                    4128 	.db #0x48	; 72	'H'
      001101 54                    4129 	.db #0x54	; 84	'T'
      001102 54                    4130 	.db #0x54	; 84	'T'
      001103 54                    4131 	.db #0x54	; 84	'T'
      001104 20                    4132 	.db #0x20	; 32
      001105 04                    4133 	.db #0x04	; 4
      001106 3F                    4134 	.db #0x3f	; 63
      001107 44                    4135 	.db #0x44	; 68	'D'
      001108 40                    4136 	.db #0x40	; 64
      001109 20                    4137 	.db #0x20	; 32
      00110A 3C                    4138 	.db #0x3c	; 60
      00110B 40                    4139 	.db #0x40	; 64
      00110C 40                    4140 	.db #0x40	; 64
      00110D 20                    4141 	.db #0x20	; 32
      00110E 7C                    4142 	.db #0x7c	; 124
      00110F 1C                    4143 	.db #0x1c	; 28
      001110 20                    4144 	.db #0x20	; 32
      001111 40                    4145 	.db #0x40	; 64
      001112 20                    4146 	.db #0x20	; 32
      001113 1C                    4147 	.db #0x1c	; 28
      001114 3C                    4148 	.db #0x3c	; 60
      001115 40                    4149 	.db #0x40	; 64
      001116 30                    4150 	.db #0x30	; 48	'0'
      001117 40                    4151 	.db #0x40	; 64
      001118 3C                    4152 	.db #0x3c	; 60
      001119 44                    4153 	.db #0x44	; 68	'D'
      00111A 28                    4154 	.db #0x28	; 40
      00111B 10                    4155 	.db #0x10	; 16
      00111C 28                    4156 	.db #0x28	; 40
      00111D 44                    4157 	.db #0x44	; 68	'D'
      00111E 0C                    4158 	.db #0x0c	; 12
      00111F 50                    4159 	.db #0x50	; 80	'P'
      001120 50                    4160 	.db #0x50	; 80	'P'
      001121 50                    4161 	.db #0x50	; 80	'P'
      001122 3C                    4162 	.db #0x3c	; 60
      001123 44                    4163 	.db #0x44	; 68	'D'
      001124 64                    4164 	.db #0x64	; 100	'd'
      001125 54                    4165 	.db #0x54	; 84	'T'
      001126 4C                    4166 	.db #0x4c	; 76	'L'
      001127 44                    4167 	.db #0x44	; 68	'D'
      001128 00                    4168 	.db #0x00	; 0
      001129 08                    4169 	.db #0x08	; 8
      00112A 36                    4170 	.db #0x36	; 54	'6'
      00112B 41                    4171 	.db #0x41	; 65	'A'
      00112C 00                    4172 	.db #0x00	; 0
      00112D 00                    4173 	.db #0x00	; 0
      00112E 00                    4174 	.db #0x00	; 0
      00112F 7F                    4175 	.db #0x7f	; 127
      001130 00                    4176 	.db #0x00	; 0
      001131 00                    4177 	.db #0x00	; 0
      001132 00                    4178 	.db #0x00	; 0
      001133 41                    4179 	.db #0x41	; 65	'A'
      001134 36                    4180 	.db #0x36	; 54	'6'
      001135 08                    4181 	.db #0x08	; 8
      001136 00                    4182 	.db #0x00	; 0
      001137 08                    4183 	.db #0x08	; 8
      001138 08                    4184 	.db #0x08	; 8
      001139 2A                    4185 	.db #0x2a	; 42
      00113A 1C                    4186 	.db #0x1c	; 28
      00113B 08                    4187 	.db #0x08	; 8
      00113C 08                    4188 	.db #0x08	; 8
      00113D 1C                    4189 	.db #0x1c	; 28
      00113E 2A                    4190 	.db #0x2a	; 42
      00113F 08                    4191 	.db #0x08	; 8
      001140 08                    4192 	.db #0x08	; 8
                           0001E0  4193 Fmain$__str_0$0$0 == .
      001141                       4194 ___str_0:
      001141 02                    4195 	.db 0x02
      001142 20 45 52 52 4F 3A 20  4196 	.ascii " ERRO: mem=%05d"
             6D 65 6D 3D 25 30 35
             64
      001151 00                    4197 	.db 0x00
                           0001F1  4198 Fmain$__str_1$0$0 == .
      001152                       4199 ___str_1:
      001152 02                    4200 	.db 0x02
      001153 20 69 20 3D 20 25 30  4201 	.ascii " i = %05d"
             35 64
      00115C 00                    4202 	.db 0x00
                           0001FC  4203 Fmain$__str_2$0$0 == .
      00115D                       4204 ___str_2:
      00115D 02                    4205 	.db 0x02
      00115E 20 54 3A 20 25 64 20  4206 	.ascii " T: %d %d %d %d"
             25 64 20 25 64 20 25
             64
      00116D 00                    4207 	.db 0x00
                           00020D  4208 Fmain$__str_3$0$0 == .
      00116E                       4209 ___str_3:
      00116E 54 65 6D 70 6F 20 25  4210 	.ascii "Tempo %d:"
             64 3A
      001177 00                    4211 	.db 0x00
                           000217  4212 Fmain$__str_4$0$0 == .
      001178                       4213 ___str_4:
      001178 01                    4214 	.db 0x01
      001179 20 53 65 6C 65 63 69  4215 	.ascii " Selecione o"
             6F 6E 65 20 6F
      001185 00                    4216 	.db 0x00
                           000225  4217 Fmain$__str_5$0$0 == .
      001186                       4218 ___str_5:
      001186 02                    4219 	.db 0x02
      001187 20 74 69 70 6F 20 65  4220 	.ascii " tipo entrada:"
             6E 74 72 61 64 61 3A
      001195 00                    4221 	.db 0x00
                           000235  4222 Fmain$__str_6$0$0 == .
      001196                       4223 ___str_6:
      001196 04                    4224 	.db 0x04
      001197 20 61 20 2D 20 4D 61  4225 	.ascii " a - Manual"
             6E 75 61 6C
      0011A2 00                    4226 	.db 0x00
                           000242  4227 Fmain$__str_7$0$0 == .
      0011A3                       4228 ___str_7:
      0011A3 05                    4229 	.db 0x05
      0011A4 20 62 20 2D 20 44 69  4230 	.ascii " b - Digital"
             67 69 74 61 6C
      0011B0 00                    4231 	.db 0x00
                           000250  4232 Fmain$__str_8$0$0 == .
      0011B1                       4233 ___str_8:
      0011B1 06                    4234 	.db 0x06
      0011B2 20 54 75 64 6F 20 70  4235 	.ascii " Tudo pronto!!"
             72 6F 6E 74 6F 21 21
      0011C0 00                    4236 	.db 0x00
                           000260  4237 Fmain$__str_9$0$0 == .
      0011C1                       4238 ___str_9:
      0011C1 01                    4239 	.db 0x01
      0011C2 20 53 74 61 72 74 20  4240 	.ascii " Start Timer.."
             54 69 6D 65 72 2E 2E
      0011D0 00                    4241 	.db 0x00
                           000270  4242 Fmain$__str_10$0$0 == .
      0011D1                       4243 ___str_10:
      0011D1 02                    4244 	.db 0x02
      0011D2 20 25 30 32 64 3A 25  4245 	.ascii " %02d:%02d"
             30 32 64
      0011DC 00                    4246 	.db 0x00
                           00027C  4247 Fmain$__str_11$0$0 == .
      0011DD                       4248 ___str_11:
      0011DD 07                    4249 	.db 0x07
      0011DE 20 50 72 6F 6E 74 6F  4250 	.ascii " Pronto"
      0011E5 00                    4251 	.db 0x00
                           000285  4252 Fmain$__str_12$0$0 == .
      0011E6                       4253 ___str_12:
      0011E6 01                    4254 	.db 0x01
      0011E7 20 54 65 6D 70 6F 3A  4255 	.ascii " Tempo: %d s"
             20 25 64 20 73
      0011F3 00                    4256 	.db 0x00
                                   4257 	.area XINIT   (CODE)
                                   4258 	.area CABS    (ABS,CODE)
