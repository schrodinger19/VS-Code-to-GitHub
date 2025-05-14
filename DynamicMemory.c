#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    int n;
    printf("Enter the size of array A: \n");
    scanf("%d", &n);
    
    int *A = (int*)malloc(n*sizeof(int));
    for(int i = 0; i<n; i++){
        A[i] = i+1;
    }
    
    for(int i = 0; i<n; i++){
        printf("%d\n", A[i]);
    }

    




    return 0;
}