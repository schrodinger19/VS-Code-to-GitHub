#include<stdio.h>

// int sum(int k){
//     if (k>0){
//         return k + sum(k-1);
//     } else {
//         return 0;
//     }

// }


// int main(){
//     int N = 10;
//     int total = sum(N);
//     printf("%d", total);
// }

// trying same with loop

int main(){

    int i, n = 10;
    int sum = 0;

    for (i = n; i > 0; i--){
        sum = sum + i; 
    }

    printf("%d", sum);
}
