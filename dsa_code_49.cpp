// Switch case statements

#include<iostream>
using namespace std;

int main(){
    char ch;
    int cal, a,b;
    cout<<"Enter the value of a and b: ";
    cin>>a>>b;
    cout<<"Input A for Sum and B for Sub: ";
    cin>>ch;
    switch(ch){
        case 'A':
        cout<<a+b;
        break;
        case 'B':
        cout<<a-b;
        break;
        default:
        cout<<"Invalid Input";
        break;

    }
    cout<<endl;
}