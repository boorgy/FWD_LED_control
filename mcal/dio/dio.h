

#ifndef DIO_H_
#define DIO_H_

#include "../../utils/STD_Types.h"
#include "DIO_types.h"

/*=========================================
 * FUNCTIONS PROTOTYPES
 =========================================*/
STD_levelType Dio_ReadChannel(Dio_ChannelType ChannelId);

void Dio_ChannelWrite(Dio_ChannelType ChannelId, STD_levelType Level);

uint8 Dio_PortRead(Dio_PortType PortId );

void Dio_PortWrite( Dio_PortType PortId, uint8 Level);

void Dio_ChannelFlip( Dio_ChannelType ChannelId);

void Dio_PortFlip(Dio_PortType PortId);



#endif /* DIO_H_ */
