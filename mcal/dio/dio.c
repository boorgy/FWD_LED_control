
#include "../../utils/STD_Types.h"
#include "../../utils/Bit_Math.h"
#include "../mcu_hw.h"
#include "dio.h"

STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId)
{
    STD_levelType ret;
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;
    switch(PortId)
    {
    case DIO_PORT_A:
        ret = GET_BIT(PORTA_REG.GPIODATA,ChannelPos);
        break;

    case DIO_PORT_B:
        ret = GET_BIT(PORTB_REG.GPIODATA,ChannelPos);
        break;

    case DIO_PORT_C:
        ret = GET_BIT(PORTC_REG.GPIODATA,ChannelPos);
        break;
		
    case DIO_PORT_D:
        ret = GET_BIT(PORTD_REG.GPIODATA,ChannelPos);
        break;
		
    case DIO_PORT_E:
        ret = GET_BIT(PORTE_REG.GPIODATA,ChannelPos);
        break;
		
    case DIO_PORT_F:
        ret = GET_BIT(PORTF_REG.GPIODATA,ChannelPos);
        break;
		
    default:
        /*error*/
        ret = 2;
        break;
    }
    return ret;

}
void Dio_ChannelWrite(Dio_ChannelType ChannelId, STD_levelType Level)
{
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;
    switch(PortId)
    {
    case DIO_PORT_A:
        if(Level == STD_LOW)
        {
            CLR_BIT(PORTA_REG.GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTA_REG.GPIODATA,ChannelPos);
        }
        break;

    case DIO_PORT_B:
        if(Level == STD_LOW)
        {
            CLR_BIT(PORTB_REG.GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTB_REG.GPIODATA,ChannelPos);
        }
        break;

    case DIO_PORT_C:
        if(Level == STD_LOW)
        {
            CLR_BIT(PORTC_REG.GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTC_REG.GPIODATA,ChannelPos);
        }
        break;
		
    case DIO_PORT_D:
        if(Level == STD_LOW)
        {
            CLR_BIT(PORTD_REG.GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTD_REG.GPIODATA,ChannelPos);
        }
        break;
		
    case DIO_PORT_E:
        if(Level == STD_LOW)
        {
            CLR_BIT(PORTE_REG.GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTE_REG.GPIODATA,ChannelPos);
        }
        break;
		
    case DIO_PORT_F:
        if(Level == STD_LOW)
        {
            CLR_BIT(PORTF_REG.GPIODATA,ChannelPos);
        }
        else
        {
            SET_BIT(PORTF_REG.GPIODATA,ChannelPos);
        }
        break;
		
    default:
        /*error*/
        break;
    }
}
uint8 Dio_PortRead(Dio_PortType PortId )
{
    uint8 ret;
    switch(PortId)
    {
    case DIO_PORT_A:
        ret = PORTA_REG.GPIODATA;
        break;

    case DIO_PORT_B:
        ret = PORTB_REG.GPIODATA;
        break;

    case DIO_PORT_C:
        ret = PORTC_REG.GPIODATA;
        break;
		
    case DIO_PORT_D:
        ret = PORTD_REG.GPIODATA;
        break;
		
    case DIO_PORT_E:
        ret = PORTE_REG.GPIODATA;
        break;
		
    case DIO_PORT_F:
        ret = PORTF_REG.GPIODATA;
        break;
		
    default:
        /*error*/
        break;
    }

    return ret;
}
void Dio_PortWrite( Dio_PortType PortId, uint8 value)
{
    switch(PortId)
    {
    case DIO_PORT_A:
        PORTA_REG.GPIODATA = value;
        break;
		
    case DIO_PORT_B:
        PORTB_REG.GPIODATA = value;
        break;

    case DIO_PORT_C:
        PORTC_REG.GPIODATA = value;
        break;
		
    case DIO_PORT_D:
        PORTD_REG.GPIODATA = value;
        break;
		
    case DIO_PORT_E:
        PORTE_REG.GPIODATA = value;
        break;
		
    case DIO_PORT_F:
        PORTF_REG.GPIODATA = value;
        break;
		
    default:
        /*error*/
        break;
    }
}
void Dio_ChannelFlip( Dio_ChannelType ChannelId)
{
    Dio_PortType PortId = ChannelId / 8;
    Dio_ChannelType ChannelPos = ChannelId % 8;

    switch(PortId)
    {
    case DIO_PORT_A:
        TOGGLE_BIT(PORTA_REG.GPIODATA,ChannelPos);
        break;

    case DIO_PORT_B:
        TOGGLE_BIT(PORTB_REG.GPIODATA,ChannelPos);
        break;

    case DIO_PORT_C:
        TOGGLE_BIT(PORTC_REG.GPIODATA,ChannelPos);
        break;
		
    case DIO_PORT_D:
        TOGGLE_BIT(PORTD_REG.GPIODATA,ChannelPos);
        break;
		
    case DIO_PORT_E:
        TOGGLE_BIT(PORTE_REG.GPIODATA,ChannelPos);
        break;
		
    case DIO_PORT_F:
        TOGGLE_BIT(PORTF_REG.GPIODATA,ChannelPos);
        break;
		
    default:
        /*error*/
        break;
    }

}
void Dio_PortFlip(Dio_PortType PortId)
{
    switch(PortId)
    {
    case DIO_PORT_A:
        PORTA_REG.GPIODATA = ~ PORTA_REG.GPIODATA;
        break;
		
    case DIO_PORT_B:
        PORTB_REG.GPIODATA = ~PORTB_REG.GPIODATA;
        break;
		
    case DIO_PORT_C:
        PORTC_REG.GPIODATA = ~PORTC_REG.GPIODATA;
        break;
		
    case DIO_PORT_D:
        PORTD_REG.GPIODATA = ~PORTD_REG.GPIODATA;
        break;
		
    case DIO_PORT_E:
        PORTE_REG.GPIODATA = ~PORTE_REG.GPIODATA;
        break;
		
    case DIO_PORT_F:
        PORTF_REG.GPIODATA = ~PORTF_REG.GPIODATA;
        break;
		
    default:
        /*error*/
        break;
    }
}



