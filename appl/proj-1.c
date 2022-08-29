





#include "../mcal/sys_ctr/SysCtr.h"
#include "../mcal/port_driver/port.h"
#include "../mcal/dio/dio.h"

int main()
{
	//Sys_Init
    SysCtr_init();
    Init_port();

    Dio_ChannelWrite(Dio_Channel_F3, STD_HIGH);
    Dio_ChannelWrite(Dio_Channel_F1, STD_HIGH);
    Dio_ChannelWrite(Dio_Channel_F2, STD_HIGH);
	Dio_ChannelWrite(Dio_Channel_F1, STD_LOW);

    while(1)
    {

    }
}


