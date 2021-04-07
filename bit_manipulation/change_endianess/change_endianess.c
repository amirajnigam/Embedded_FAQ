//Task: swap the bytes in 32bit Integer Variable.

#include <stdio.h>
#include <stdint.h>    

uint32_t change_endianess(uint32_t num){
    uint32_t res = 0;

    res |= (num & 0x000000FF) << 24;
    res |= (num & 0x0000FF00) << 8;
    res |= (num & 0x00FF0000) >> 8;
    res |= (num & 0xFF000000) >> 24;

    return res; 

}

int main(void)
{
    uint32_t num = 0x11223344;
    printf("Orignal Number:0x%x\n", num);
    
    printf("Number after changing Endianess: 0x%x", change_endianess(num));
    return 0;
}