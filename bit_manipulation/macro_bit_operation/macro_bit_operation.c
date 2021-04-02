//Task:Write the macros to set, clear, toggle and check the bit of a given integer.

#include <stdio.h>
#include <stdint.h>

#define SET_BIT(num,pos)                    num |= (1<<pos)
#define CLEAR_BIT(num,pos)                  num &= ~(1<<pos)
#define TOGGLE_BIT(num, pos)                num ^= (1<<pos)
#define CHECK_BIT_IS_SET_OR_NOT(num, pos)   num & (1<<pos)


int main(void)
{
    uint8_t num = 2;
    uint8_t pos = 0;

    printf("Set bit: %d\n", SET_BIT(num,pos));
    printf("Clear bit: %d\n", CLEAR_BIT(num,pos));
    printf("Toggle bit: %d\n", TOGGLE_BIT(num,pos));
    printf("Toggle bit: %d\n", TOGGLE_BIT(num,pos));
    printf("Check bit: %d\n", CHECK_BIT_IS_SET_OR_NOT(num,pos));
    
    return 0;
}