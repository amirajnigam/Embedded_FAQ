//Task: Compute the Sign of the integer

#include<stdio.h>

int main(void)
{
    int d;
    int sign;

    sign = ((d > 0) - (d < 0));

    if(sign == 1)
        printf("Positive number");
    else if (sign == -1)
        printf("Negative NUmber");
    else
        printf("Number is Zero");
    
    return 0;
}

//Logic: MSB bit of an integer decidess its sign