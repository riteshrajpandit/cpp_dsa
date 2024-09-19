//Calculate the sum of odd numbers from 1 to n uisng loop 
#include<iostream>
using namespace std;

int main(){
    int i,n, sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i=i+2){
        sum = sum + i;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}