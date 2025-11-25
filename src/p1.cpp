// 題目 1：高塔建築師 (The Tower Architect) - 20分

#include <iostream>
using namespace std;
int factorial(int n){
    if(n==0 || n==1){
        return 1;
    }else return n*factorial(n-1);
}
int sum(int n){
    if(n==0){
        return 0;
    }
    if(n==1){
        return 1;
    }else return n+sum(n-1);
}

int main() {
    int n;
    while(cin>>n){
        cout << factorial(n) << endl << sum(n) << endl;
    }
    return 0;
}
