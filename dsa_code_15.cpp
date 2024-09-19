//Check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int i, n;
    bool isPrime = true;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=2;i*i<=n;i++){ //Optimized Code
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime){
        cout<<"Prime Number\n";
    }else{
        cout<<"Non Prime Number\n";
    }
    return 0;
}

