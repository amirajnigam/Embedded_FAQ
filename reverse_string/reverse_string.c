#include<stdio.h>
#include <string.h>

int main(void)
{
    char str[100] = "I am lord Voldemort";
    char rev_str[100];
    int len;
    int begin, end;
    
    len = strlen(str);
    end = len-1;
    printf("Before revering the string:%s\n", str);

    for(begin = 0; begin < len; begin++){
        rev_str[begin] = str[end];
        end--; 
    }

    rev_str[begin] = '\0';
    printf("After reversing the String:%s", rev_str);

    return 0;
}