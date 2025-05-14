#include<bits/stdc++.h>
using namespace std;


void recur(int n){
    if (n ==6) return;
    cout << "Recursion Level " << n << endl;
    recur(n+1);
}

int nSum(int n){
    if (n == 0) return 0;

    int res = n + nSum(n-1);
    return res;
}


int main(){
    // recur(1);

    int sum = nSum(5);
    cout << sum;


    return 0;
}