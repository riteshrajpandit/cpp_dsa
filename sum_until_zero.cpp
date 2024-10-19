#include<iostream>
using namespace std;

int main(){
    int number, sum = 0;
    do{
        cout<<"Enter the number";
        cin>>number;
        sum = number+sum;

    }while(number!=0);
    cout<<sum<<endl;
    return 0;
}