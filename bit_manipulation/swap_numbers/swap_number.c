//Swap numbers without using temp variable

#include<stdio.h>

void swap(int *x, int *y){

    *x = *x ^ *y;
    *y = *x ^ *y;
    *x = *x ^ *y;
}

int main(void)
{
    int a = 10, b = 20;

    printf("Value of a and b before swap: %d %d\n", a, b);

    swap(&a,&b);
    printf("Value of a and b before swap: %d %d\n", a, b);
    return 0;
}