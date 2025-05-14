#include<stdio.h>
#include<math.h>

int main(){

    // FILE *fptr;

    // fptr = fopen("hehe.txt", "a");
    // fprintf(fptr, "\n nothing babe just bitching others");

    // FILE *fptr;

    // fptr = fopen("hehe.txt", "r");

    // char myfile[500];

    // while (fgets(myfile, 500, fptr))
    // {
    //     printf("%s", myfile);
    // }
    


    // fclose(fptr);

    // FILE *fptr;

    // fptr = fopen("momo.txt", "r");

    // if (fptr = NULL){
    //     printf("This file doesn't exit in this Directory");
    // }

    // fclose(fptr);

    FILE *fptr;
    fptr = fopen("hehe.txt", "r");

    char myfile[300];

    if (fptr != NULL){
        while (fgets(myfile, 300, fptr))
        {
            printf("%s", myfile);
        }
        
    } else {
        printf("mfs this file does not exit");
    }


   

}

