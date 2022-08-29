
#ifndef PORT_HW_H_
#define PORT_HW_H_

#include "../utils/Bit_Math.h"
#include "../utils/STD_Types.h"



/*===========================================================*
 * GPIO REGISTERS                                            *
 *========================================================== */
typedef struct
{
    uint32 GPIODATA    ;
    uint32 GPIODIR     ;
    uint32 GPIOIS      ;
    uint32 GPIOIBE     ;
    uint32 GPIOIEV     ;
    uint32 GPIOIM      ;
    uint32 GPIORIS     ;
    uint32 GPIOMIS     ;
    uint32 GPIOICR     ;
    uint32 GPIOAFSEL   ;    

    uint8 Reserved_2[0xDC];
    uint32 GPIODR2R    ;    
    uint32 GPIODR4R    ;
    uint32 GPIODR8R    ;
    uint32 GPIOODR     ;
    uint32 GPIOPUR     ;
    uint32 GPIOPDR     ;
    uint32 GPIOSLR     ;
    uint32 GPIODEN     ;
    uint32 GPIOLOCK    ;
    uint32 GPIOCR      ;
    uint32 GPIOAMSEL   ;
    uint32 GPIOPCTL    ;
    uint32 GPIOADCCTL  ;
    uint32 GPIODMACTL  ;
}PORT_RegType;

#define PORTA_REG     (*((volatile PORT_RegType*)0x400043FC))
#define PORTB_REG     (*((volatile PORT_RegType*)0x400053FC))
#define PORTC_REG     (*((volatile PORT_RegType*)0x400063FC))
#define PORTD_REG     (*((volatile PORT_RegType*)0x400073FC))
#define PORTE_REG     (*((volatile PORT_RegType*)0x400243FC))
#define PORTF_REG     (*((volatile PORT_RegType*)0x400253FC))

/*===========================================================*
 * RCC REGISTERS                                             *
 *========================================================== */
typedef struct
{
    uint32 R0:1;
    uint32 R1:1;
    uint32 R2:1;
    uint32 R3:1;
    uint32 R4:1;
    uint32 R5:1;
    uint32 R6:1;
    uint32 R7:1;
}RCGC_TagType;

#define RCGCGPIO_REG    (*((volatile RCGC_TagType*)0x400FE608))
#define RCGCUART_REG    (*((volatile RCGC_TagType*)0x400FE618))
#define RCGCSSI_REG     (*((volatile RCGC_TagType*)0x400FE61C))
#define RCGCI2C_REG     (*((volatile RCGC_TagType*)0x400FE620))


#endif /* PORT_HW_H_ */
