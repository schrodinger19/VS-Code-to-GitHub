#include<stdio.h>
#include<string.h>
#include<stdlib.h>


// enum Level {
//     LOW,
//     MEDIUM,
//     HIGH
//   };

// int main(){

//     // enum Level myvar1 = LOW;
//     // enum Level myvar2 = MEDIUM;
//     // enum Level myvar3 = HIGH;

//     // printf("%d\n", myvar1);
//     // printf("%d\n", myvar2);
//     // printf("%d\n", myvar3);


//     enum Level myVar = MEDIUM;

//     switch (myVar)
//     {
//     case 1:
//         printf("Low Level");
//         break;
//     case 2: 
//         printf("Medium Leve");
//         break;

    
//     default:
//         break;
//     }
//     return 0;

// }

enum Level {
    LOW = 1,
    MEDIUM,
    HIGH
};

int main(){

    enum Level myVar = MEDIUM;

    switch (myVar){
        case 1:
        printf("Low Level");
        break;

        case 2: 
        printf("%d", myVar);
        break;

        case 3:
        printf("High Level");
        break;

        default:
        break;


    }


    return 0;
}