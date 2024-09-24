#include<iostream>
using namespace std;

int main(){
    int i,n;
    int sum = 0;
    cout<<"Enter n: ";
    cin>>n;
    for(i=1;i<=n;i++){
        if(i%3==0){
            sum = sum +i;
        }
    }
    cout<<"Sum = "<<sum<<endl;

    return 0;
}