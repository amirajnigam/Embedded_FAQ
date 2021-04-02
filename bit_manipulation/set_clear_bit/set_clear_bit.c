//Task: Set and clear a bit in an integer

#include<stdio.h>

int set_bit(int n, int pos){
    n |= 1<<pos;
    return n;
}

int clear_bit(int n, int pos){
    n &= ~(1<<pos);
    return n;
}


int main(void)
{
    int n = 15;
    int pos = 3;
    int num;

    num = set_bit(n, pos);
    printf("Number after set bit operation:%d\n", num);

    num = clear_bit(n,pos);
    printf("Number after clear bit operation:%d", num);
    return 0;
}