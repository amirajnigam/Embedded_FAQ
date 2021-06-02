//Input: 10000110
//Output:01100001

#include <stdio.h>
#include <stdint.h>

void print_binary(uint8_t num, int n ){
    for(int i = n-1; i >= 0; i--){
        if(num & (1 << i))
            printf("1");
        else
            printf("0");
    }
    printf("\n");
}

int main(void)
{
    uint8_t num = 0x86;
    uint8_t rev_num = 0;
    int no_of_bits = sizeof(num) * 8;

    printf("Before Reversing:\n");
    print_binary(num, no_of_bits);

    for(int i = 0; i < no_of_bits; i++){
        if(num & (1<<i)){
            rev_num |= (1 << ((no_of_bits -1) - i));
        }
    }

    printf("After Reversing:\n");
    print_binary(rev_num, no_of_bits);

    return 0;
}   