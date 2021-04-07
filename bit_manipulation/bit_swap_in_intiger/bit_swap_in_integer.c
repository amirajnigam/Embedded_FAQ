//Task:swap two bits in a given integer

#include<stdio.h>

int swap_bits(int n, int p1,int p2){
    n ^= 1 << p1;
    n ^= 1 << p2;

    return n;
}


int main(void)
{
    int n = 28, p1 = 0, p2= 3;
    printf("Orignal Number:%d\n", n);
    printf("Number after swapping bits:%d\n", swap_bits(n,p1,p2));
    return 0;
}