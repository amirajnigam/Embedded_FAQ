#include<stdio.h>

int main(void)
{
    unsigned int i = 1;
    char *c = (char *)&i;

    if(*c)
        printf("Little Endian");
    else   
        printf("Big endian");
    
    return 0;
}

// Explanation
//  i = 0x0000001
//     MSB      LSB

// if system is Little endian
// then i will be stored as i = 0x01000000
//                             LSB        MSB
// c is a pointe to char which is pointing to the first 8 bits of a i