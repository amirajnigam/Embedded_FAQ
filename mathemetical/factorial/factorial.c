#include<stdio.h>

unsigned long long factorial_iterative( int n){
    long int i;
    unsigned long long res = 1;

    for(i = n; i > 0; i--){
        res = res * i;
    }

    return res;
}

unsigned long long factorial_recursive(int n){
    
    if(n == 1)
        return 1;

    return n * factorial_recursive(n-1);   
}


int main(void)
{
    int n = 200;

    printf("Factorial(iterative) of %d is:%llu\n",n, factorial_iterative(n));
    printf("Factorial(recursive) of %d is:%llu",n, factorial_recursive(n));
    return 0;
}