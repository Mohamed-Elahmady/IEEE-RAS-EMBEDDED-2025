#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/* We dont use integer data type because it's size is a compiler dependant */

#define MCU_ARCH_8BIT      8
#define MCU_ARCH_16BIT     16
#define MCU_ARCH_32BIT     32
#define MCU_ARCH_64BIT     64

#define MCU_ARCH           (MCU_ARCH_8BIT)

#if (MCU_ARCH == MCU_ARCH_8BIT)
    typedef bool boolean;

    typedef unsigned char uint8;
    typedef unsigned short uint16;
    typedef unsigned long uint32;

    typedef signed char sint8;
    typedef signed short sint16;
    typedef signed long sint32;

    typedef float float32;
    typedef double float64;
#define HWR_8BIT(ADD)    (*(volatile uint8 *)(ADD))
#elif (MCU_ARCH == MCU_ARCH_16BIT)
    typedef bool boolean;

    typedef unsigned char uint8;
    typedef unsigned short uint16;
    typedef unsigned long uint32;
    typedef unsigned long long uint64;

    typedef signed char sint8;
    typedef signed short sint16;
    typedef signed long sint32;
    typedef signed long long sint64;

    typedef float float32;
    typedef double float64;
#define HWR_16BIT(ADD)    (*(volatile uint16 *)(ADD))
#elif (MCU_ARCH == MCU_ARCH_32BIT)
    typedef bool boolean;

    typedef unsigned char uint8;
    typedef unsigned short uint16;
    typedef unsigned long uint32;
    typedef unsigned long long uint64;


    typedef signed char sint8;
    typedef signed short sint16;
    typedef signed long sint32;
    typedef signed long long sint64;

    typedef float float32;
    typedef double float64;
#define HWR(ADD)    (*(volatile uint32 *)(ADD))
#elif (MCU_ARCH == MCU_ARCH_64BIT)
    typedef bool boolean;

    typedef unsigned char uint8;
    typedef unsigned short uint16;
    typedef unsigned long uint32;
    typedef unsigned long long uint64;

    typedef signed char sint8;
    typedef signed short sint16;
    typedef signed long sint32;
    typedef signed long long sint64;

    typedef float float32;
    typedef double float64;
    typedef long double float128;
#define HWR(ADD)    (*(volatile uint64 *)(ADD))
#endif

int main(){
    printf("===================================================\n");
    printf("size of uint8   : %zu\n",sizeof(uint8));
    printf("size of uint16  : %zu\n",sizeof(uint16));
    printf("size of uint32  : %zu\n",sizeof(uint32));

    printf("size of sint8   : %zu\n",sizeof(sint8));
    printf("size of sint16  : %zu\n",sizeof(sint16));
    printf("size of sint32  : %zu\n",sizeof(sint32));

    printf("size of float32 : %zu\n",sizeof(float32));
    printf("size of float64 : %zu\n",sizeof(float64));
    printf("===================================================\n");
    return 0;
}