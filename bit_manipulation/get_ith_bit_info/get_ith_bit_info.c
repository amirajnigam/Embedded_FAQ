#include <stdio.h>
#include <stdint.h>

uint8_t get_info(uint8_t n, uint8_t pos){

    uint8_t mask = (1 << pos);

    if(n & mask)
        return 1;
    else
        return 0;
}

int main(void)
{
    uint8_t n = 16;
    uint8_t pos = 4;

    printf("Value of %d bit in a number %d is:%d", pos, n, get_info(n, pos));

    return 0;
}