//Task: If data is stored using 8 bits, then the left rotation of a data 32(‭‬00100000‬) by 2 becomes ‭128 (10000000).
//As similar to left rotation, if data is stored using 8 bits, then the right rotation of the data 32(‭‬00100000‬) by 2 becomes 8 (00001000).

#include <stdio.h>
#include <stdint.h>
#define NO_BITS 8

uint8_t left_rotation(uint8_t num, uint8_t pos){
    return ((num << pos) | num >> (NO_BITS - pos));
}

uint8_t right_rotation(uint8_t num, uint8_t pos){
    return ((num >> pos) | num << (NO_BITS - pos));
}

int main(void)
{
    uint8_t num = 10, pos = 5;
    //int no_of_bits = sizeof(num) * 8;

    printf("Left Shift operation result:%d\n", left_rotation(num, pos));
    printf("Right Shift operation result:%d", right_rotation(num, pos));

    return 0;
}