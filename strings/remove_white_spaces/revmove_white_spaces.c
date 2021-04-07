#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "I am lord Voldemort";
    
    printf("Before removing spaces:'%s'\n", str);
    
    int count = 0;
    for(int i =0; i < strlen(str); i++){
        if(str[i] != ' ')
            str[count++] = str[i];
    }
    str[count] = '\0';
    
    printf("After removing spaces:;'%s'\n", str);

    return 0;
}