#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int power(int n, int p){

    if (p == 0) return 1;

    int value = n*power(n, p-1);
    return value;
}


int main(){
    int number, exponent; 
    number = 5;
    exponent = 3;
    int calculated = power(number, exponent);
    printf("%d raised to the power %d is: %d", number, exponent, calculated);




    return 0;
}