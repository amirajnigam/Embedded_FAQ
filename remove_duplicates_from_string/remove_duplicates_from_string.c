#include<stdio.h>
#include<string.h>

int main(void)
{
    char str[] = "AAABBB";
    int len = strlen(str);
    char new_str[len];
    int j = 1;
    new_str[0] = str[0];

    printf("Orignal String:%s\n", str);

    for(int i = 0 ; i < len; i++ ){
        if(str[i] != str[i+1]){
            new_str[j] = str[i+1];
            j++;
        }
    }

    new_str[j] = '\0';

    printf("New String:%s\n", new_str);

    return 0;
}