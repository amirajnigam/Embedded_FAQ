#include<stdio.h>

void swap(int *a, int *b){
    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

void print_array(int arr[], int n){
    for(int i = 0 ; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}

int main(void)
{
    int arr[] = {1,4,7,2,9,10,39};
    int n = sizeof(arr)/ sizeof(arr[0]);

    int begin = 0, end = n-1;

    printf("Orignal Array:");
    print_array(arr, n);

    while(begin < end){
        swap(&arr[begin], &arr[end]);
        begin++;
        end--;
    }

    printf("New Array: ");
    print_array(arr, n);

    return 0;
}