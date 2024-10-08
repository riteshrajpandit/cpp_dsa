//print prime numbers to nth terms 
// n = 5, output = 2 3 5 7 11
#include<iostream>
using namespace std;

bool isPrime(int num){
    if(num<2){
        return false;
    }
    for(int i = 2; i<=num-1;i++){
        if(num%i==0){
            return false;
        }

    }
    return true;
}

int main(){

    int n,count=0,currentNumber=2;
    cout<<"Enter the nth number: ";
    cin>>n;
    while(count<n){
        if (isPrime(currentNumber))
        {
            cout<<currentNumber<<" ";
            count++;
        }
        currentNumber++;
        
    }
    cout<<endl;
    return 0;
}