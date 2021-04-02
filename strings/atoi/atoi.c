#include<stdio.h>

int my_atoi(char *str){

    int res = 0;

    for(int i = 0 ; str[i] != '\0'; i++)
        res = res * 10 + str[i] - '0';

    return res;
}

int main(void)
{
    char str[100] = "987";
    int n;

    printf("String Value:%s\n", str);
    n = my_atoi(str);
    printf("Integer Value:%d\n", n);
    return 0;
}