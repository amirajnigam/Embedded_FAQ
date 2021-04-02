//i/p = 10000110
//o/p = 3
#include<stdio.h>
#include<stdint.h>

int main(void)

{
    uint8_t num = 0b10000110;
    int count = 0;

    while(num){
        if(num & 1)
            count++;
        num >>= 1;
    }

    printf("NUmber of set Bits:%d\n", count);
    
}