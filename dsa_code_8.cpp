#include<iostream>
using namespace std;

int main(){
    int i,n;
    cout<<"Enter n: ";
    cin>>n;
    int sum=0;
    for(i=1;i<=n;i++){
        sum = sum+i;
    }
    cout<<sum<<endl;
    return 0;
}