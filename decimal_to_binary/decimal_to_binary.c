#include<stdio.h>

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

int main(void)
{
    int n = 9;
    dec_to_bin(n);
    return 0;
}