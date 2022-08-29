

#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#include "STD_Types.h"


#define SET_BIT(u32Var,BitNo)		                             u32Var |= ((uint32)1<<BitNo)
#define CLR_BIT(u32Var,BitNo)		                             u32Var &= ~((uint32)1<<BitNo)
#define TOGGLE_BIT(u32Var,BitNo)		                         u32Var ^= ((uint32)1<<BitNo)
#define GET_BIT(u32Var,BitNo)		                            (u32Var >> BitNo) & (uint32)0x01

#define GET_REG(BASE_ADDR, REG_TYPE, REG_OFFSET)                (*((volatile REG_TYPE*)(BASE_ADDR+REG_OFFSET)))



#endif /* BIT_MATH_H_ */
