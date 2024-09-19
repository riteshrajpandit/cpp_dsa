#include<iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter the character: \n";
    cin>>ch;
    if(ch>=65 && ch<=90){
        cout<<ch<<" is Uppercase\n";
    }else if(ch>=97 && ch<=122){
        cout<<ch<<" is Lowercase\n";
    }else{
        cout<<ch<<"Invalid Input\n";
    }
    return 0;

}