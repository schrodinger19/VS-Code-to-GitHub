#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void Double(int arry[], int size){
    for (int i = 0; i < size; i++){
        arry[i] = 2*arry[i];
    }
}

int main (){

    int arr[] = {2, 34, 53, 35,73};
    int size = sizeof(arr)/sizeof(arr[0]);
    Double(arr, size);
    for (int  i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    





    return 0;
}