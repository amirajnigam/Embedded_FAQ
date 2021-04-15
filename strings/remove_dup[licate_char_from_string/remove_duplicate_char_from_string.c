//Input = Welcome
//Output = Welcom

#include<stdio.h>

char *remove_duplicate(char str[100], int n){
    int index = 0, i, j;

    for(i = 0; i < n; i++){
        for(j = 0; j < i; j++){
            if(str[i] == str[j])
                break;
        }

        if(i == j)
            str[index++] = str[i];
    }
    return str;
}


int main(void)
{
    char str[100] = "welcome";
    int n = sizeof(str)/sizeof(str[1]);
    printf("Orignal String: %s\n", str);
    remove_duplicate(str, n);
    printf("String after removing duplicate: %s\n", str);
    return 0;
}