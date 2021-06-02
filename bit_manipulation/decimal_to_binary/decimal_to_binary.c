#include <stdio.h>
#include <stdint.h>

void dec_to_bin(int n){

    int i = 0;
    int binary[32];
    
    while(n){
        binary[i] = n%2;
        n = n/2;
        i++;
    }

    for(int j = i-1; j >=0; j--)
        printf("%d", binary[j]);
}

// void decimal_to_binary(int n){

//     uint8_t no_of_bits = sizeof(n) * 8;
//     for(int i = no_of_bits; i >=0; i--){
//         if(n & (1<<i))
//             printf("1");
//         else
//             printf("0");
//     }
//     printf("\n");
// }

int main(void)
{
    int n = 9;
    //decimal_to_binary(9);
    dec_to_bin(n);
    return 0;
}