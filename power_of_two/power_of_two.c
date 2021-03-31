#include<stdio.h>

int main(void)
{
    int n = 16;

    if( (n & (n-1)) == 0)
        printf("%d is a power of 2\n",n);
    else
        printf("%d is not a power of 2\n",n);
    
    return 0;
}


//Multiple conditions to check number is a power of two

// 1. ((n & (n+1)) == n);
// 2. (n >> 1) == n/2;
// 3. ((n >> 1) << 1) == n;