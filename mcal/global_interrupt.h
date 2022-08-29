
#ifndef GLOBAL_INTERRUPT_H_
#define GLOBAL_INTERRUPT_H_

#define GI_ENABLE()             __asm("    cpsie   i\n");
#define GI_DISABLE()            __asm("    cpsid   i\n");

#endif 
