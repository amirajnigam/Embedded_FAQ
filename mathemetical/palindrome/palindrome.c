#include<stdio.h>

int revrse_number(int n){
    int remainder, num = 0;
    while(n){
        remainder = n%10;
        num = num * 10 + remainder;
        n = n/10;
    }

    return num;
}

int main(void)
{
    int reverse, n = 121, original;
    original = n;

    reverse = revrse_number(n);

    if(reverse == original)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");

    return 0;
}

Logic: 
1. check if the reverse of a number is equal to the original revrse_number
2. To reverse take reminder, add remainder to num and divide num by 10