#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void reverseString( char str[], int start, int end){
    if (start >= end) return;

    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;

    reverseString(str, start + 1, end - 1);
}

int main(){

    char message[] = "Hey Bitch What are you doing";
    int end = strlen(message);
    printf("actual message: %s\n", message);
    reverseString(message, 0, end-1);
    printf("Reversed String: %s", message);



    return 0;
}