
#ifndef STD_TYPES_H_
#define STD_TYPES_H_


typedef unsigned char       uint8;
typedef unsigned short      uint16;
typedef unsigned int        uint32;


typedef signed char         sint8;
typedef signed short        sint16;
typedef signed int          sint32;


typedef float               float32;
typedef double              float64;


typedef enum
{
    STD_LOW=0,
    STD_HIGH=!STD_LOW
}STD_levelType;

typedef enum
{
    STD_off=0,
    STD_on=!STD_off
}STD_BoolType;

typedef enum
{
    STD_Suspended=0,
    STD_Active=!STD_Suspended
}STD_StatusType;

typedef enum
{
    false=0,
    true=!false
}boolean;

typedef enum
{
    DISABLE=0,
    ENABLE=1
}STD_EnType;

typedef enum
{
    E_OK,
    E_NOT_OK
}Std_ReturnType;


typedef void(*Ptr2FuncType)(void);



#endif /* STD_TYPES_H_ */
