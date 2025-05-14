#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void printName(char* C){

    while (*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    
}

int main (){

    // int array[5] = {2, 45, 23, 42, 4};
    // int* p = array;

    // printf("%d\n", *(array + 1));

    char name[] = "Shubham";
    printName(name);






    return 0;

}