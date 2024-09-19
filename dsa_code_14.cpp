//Check if a number is prime or not

#include<iostream>
using namespace std;

int main(){
    int i=2, n;
    bool isPrime = true;
    cout<<"Enter a number: ";
    cin>>n;
    while(i<=(n-1)){
        if(n%i==0){
            isPrime = false;
            break;
        }
        i++;
    }
    if(isPrime){
        cout<<"Prime Number\n";
    }else{
        cout<<"Non Prime Number\n";
    }
    return 0;
}

