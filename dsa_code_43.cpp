//check if a number is Prime or Not
#include<iostream>
using namespace std;

void isPrime(int n){
    if(n<=1){
        cout<<" Not Prime";
        return;
    }
    int i = 2;
    while(i<=n/2){
        if(n%i==0){
            cout<<" Not Prime";
            return;
        }
        i++;
    }
    cout<<"Prime";
}

int main(){
    int n = 61;
    isPrime(n);
    cout<<endl;
    return 0;
}