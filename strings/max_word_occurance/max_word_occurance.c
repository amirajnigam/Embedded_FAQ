/*

str = arm over arm

   k--->

j   a   o   a
    r   v   r
    m   e   m   
   /0   r  /0
       /0
*/

#include<stdio.h>
#include <string.h>
#include <ctype.h>

int main(void)
{

    int i , x, j = 0, k = 0, max = 0;

    char str[100], str1[10][20], temp;

    // printf("Enter String: ");
    // scanf("%s", str);

    str[100] = "arm arm arm arm";

    //change all letter to lower case
    for(i = 0; i < strlen(str); i++)
        str[i] = tolower(str[i]);

    //Split the word into a 2d charcater array
    for(i = 0; str[i] != '\0'; i++){
        if(str[i] == ' ')
        {
            str1[k][j] = '\0';
            k++;
            j=0;
        }
        else
        {
            str1[k][j] = str[i];
            j++;
        }
    }

    str1[k][j] = '\0';

    //Compare the words and count the number of occurance, k is the number of words
    for(i = 0; i <= k; i++){
        x = 1;

        for(j = i+1; j <= k; j++){
            if(strcmp(str1[i], str1[j]) == 0){
                ++x;
            }
        }

        if(x >= max){
            max = x;
            temp = i;
        }
        
    }

    printf("Most Frequent word:%s -> %d", str1[temp], max);
    return 0;
}
