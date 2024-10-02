//Functions--Pass by value
#include<iostream>
using namespace std;

int mul(int a, int b){
    return a*b;
}
int  add(int a,int b){
    //only stores while the control of program is here so the values of a and b gets changed here
    a=a+10;
    b=b+10;
    return a+b;
}

int main(){
    int x=10,y=20;
    cout<<"Multiple = "<<mul(x,y)<<endl;
    int a=10,b=20;
    cout<<"Sum = "<<add(a,b)<<endl;
    //This will print the value of main() function
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;

}