//Task: Clear all bits from MSB to the ith bit

#include<stdio.h>
#include <stdint.h>

void print_binary(uint8_t n){
    uint8_t no_of_bites = sizeof(n) * 8;
    for(int i = no_of_bites-1; i >=0; i--){
        if(n & (1<< i))
            printf("1");
        else
            printf("0");
    }

    printf("\n");
}


int main(void)
{
    uint8_t a = 10;
    uint8_t pos = 3;
   

    printf("Orignal Number:");
    print_binary(a);

    uint8_t mask = (1 << pos);
    mask = mask - 1;
    mask = ~mask;

    a = mask & a;

    printf("New Number:");
    print_binary(a);

    return 0;
}