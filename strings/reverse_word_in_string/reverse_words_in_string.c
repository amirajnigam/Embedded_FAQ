#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(void){
    int i, j, k, len;
    char temp;
    
    char str[100] = " Lord is Great ";
    len = strlen(str);

    printf("Before reversing word:%s\n", str);
    for(i = 0, j = 0; j < len; j++){
        if( !isalnum(str[j]) || (j == len-1)){
            //either str[j] is not alphabet and number
			//or j is pointing at the 2nd last character
            if( j < len -1)
                k = j-1;
            else    
                k = j;
        

            while(i < k){
                temp = str[i];
                str[i] = str[k];
                str[k] = temp;
                i++;
                k--;
            }

            //set i to point at j+1
            i = j+1;
        }

    }

    printf("Reverse word in a string:%s", str);
    return 0;
}

//ref: https://www.youtube.com/watch?v=DlygTBMhonA