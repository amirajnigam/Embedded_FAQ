#include<stdio.h>
#include<stdlib.h>
#include<string.h>

union iptolint{
    char ip[16];
    unsigned long int n;
};

unsigned long int conv(char ipadr[]){
    unsigned long int num = 0, val;
    char *tok, *ptr;
    tok = strtok(ipadr, ".");
    while(tok != NULL){
        val = strtoul(tok,  &ptr, 0);
        num = (num << 8) + val;
        tok = strtok(NULL, ".");
    }
    return (num);
}

int main(void)
{
    union iptolint ipl;
    ipl.ip[16] = "20.0.0.0";
    ipl.n = conv(ipl.ip);
    printf("Equivalent 32-bit long int is: %lu", ipl.n);
    return 0;
}