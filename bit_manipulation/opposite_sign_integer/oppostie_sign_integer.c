#include<stdio.h>
#include <stdbool.h>

int main(void)
{
    int a = 23, b = -67;
    bool sign = 0;
 
    sign = ((a^b) < 0);

    if(sign == 1)
        printf("Both the integers have oppostie sign");
    else
        printf("Both the integers have same sign");

    return 0;
}