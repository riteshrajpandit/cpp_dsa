#include<iostream>
using namespace std;

int main(){
    int count = 1;
    int n;
    cout<<"Enter the number to print from 1 to n: ";
    cin>>n;
    while(count<=n){
        cout<<count<<endl;
        count++;
    }
    return 0;
}