#include<stdio.h>
#include<string.h>
#include<stdlib.h>


struct Mystructure
{
    int myNum;
    char myName;
    char myFullName[30];

};

int main (){

    // int myAge = 43;
    // int* ptr = &myAge;

    // printf("%d\n", myAge);
    // printf("%p\n", &myAge);
    // printf("%p\n", ptr);
    // printf("%d\n", *ptr);

    // int myNumber[] = {4, 5, 7, 8, 90};


    // for (int  i = 0; i < 5; i++)
    // {
    //    printf("%p\n", &myNumber[i]);
       
    
    
    // }

    // printf("%lu\n", sizeof(myNumber));

    // printf("%p\n", myNumber);
    // printf("%p\n", &myNumber[0]);
    // printf("%d\n", *myNumber);

    struct Mystructure S1 = {13, 's', "shubham"};

    S1.myNum = 26;
    S1.myName = 'M';
    strcpy(S1.myFullName, "Maurya");

    

    printf("%d\n", S1.myNum);
    printf("%c\n", S1.myName);
    printf("%s\n", S1.myFullName);
    
    


    




    return 0;
}