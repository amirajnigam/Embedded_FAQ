#include<stdio.h>

void print_array(int arr[], int n){
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    
    printf("\n");
}

void remove_duplicates(int arr[], int n){
    int j = 0;
    int temp[100];
    for(int i = 0; i < n; i++){
        if(arr[i] != arr[i+1])
            temp[j++] = arr[i];
    }
    temp[j] = arr[n-1];

    printf("New array: ");
    print_array(temp, j);
    printf("Size of new array:%d\n", j);
}

int main(void)
{
    int arr[] = {1,2,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    printf("Orignal array: ");
    print_array(arr, n);

    remove_duplicates(arr,n); 
    return 0;
}