//Calculate the sum of odd numbers from 1 to n uisng while loop 
#include<iostream>
using namespace std;

int main(){
    int i=1,n, sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    while(i<=n){
        if(i%2!=0){
            sum +=i;
        }
        i++;
    }
    cout<<"Sum = "<<sum<<endl;
    return 0;
}