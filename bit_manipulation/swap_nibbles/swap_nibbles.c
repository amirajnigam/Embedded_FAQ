//Input:  01101010
//Output: 10100110

#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t num){
    
    uint8_t n = sizeof(num) * 8;
    for(int i = n-1; i >= 0; i--){
        if(num & (1<<i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main(void)
{
    uint8_t num = 0x6A; // or 0b01101010
    uint8_t new_num = 0;
    
    print_binary(num);
    new_num |= ((num & 0x0F) << 4);
    new_num |= ((num & 0xF0) >> 4); 
    print_binary(new_num);
    return 0;
}