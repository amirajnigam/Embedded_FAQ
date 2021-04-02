#include<stdio.h>
#define m 5
#define n 3

void print_array(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d", arr[i]);
    }
    printf("\n");
}


int main(void)
{
    int arr1[m] = {1,2,3,4,5};
    int arr2[n] = {6,7,8};

    int new_array[m+n];

    for(int i = 0; i < m; i++){
        new_array[i] = arr1[i];
    }

    for(int j = 0; j < n; j++){
        new_array[j+m] = arr2[j];
    }

    print_array(new_array, (m+n));

    return 0;
}

//Brute Force