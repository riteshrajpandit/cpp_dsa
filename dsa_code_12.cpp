//Calculate the sum of even numbers from 1 to n uisng loop and conditional statements
#include<iostream>
using namespace std;

int main(){
    int i,n, sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(i=2;i<=n;i++){
        if(i%2==0){
            sum +=i;
        }
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}