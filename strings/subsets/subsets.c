//Task: Write a function that when given a certain set of numbers/char, displays all possible subsets of it.

#include<stdio.h>
#include <math.h>

void print_subset(char *set, int set_size){

    unsigned int subset_size = pow(2,set_size);
    int counter, j;

    for(counter = 0; counter < subset_size; counter++){
        for(j = 0; j < set_size; j++){
            if(counter & (1<<j))
                printf("%c", set[j]);
        }
        printf("\n");
    }
}

int main(void)
{
    char set[] = {'a', 'b', 'c'};
    int n = sizeof(set)/sizeof(set[0]);

    print_subset(set, n);
    return 0;
}