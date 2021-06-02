//Task: Compute the Sign of the integer

#include<stdio.h>


void check_sign(int d){
    
    int sign;
    sign = ((d > 0) - (d < 0));

    if(sign == 1)
        printf("Positive number");
    else if (sign == -1)
        printf("Negative Number");
    else
        printf("Number is Zero");
}

int main(void)
{
    int d;
    d = -10;

    check_sign(d);
    
    return 0;
}

//Logic: MSB bit of an integer decidess its sign