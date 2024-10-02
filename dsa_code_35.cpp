#include<iostream>
using namespace std;

//function definition
//without return type and without arguments
void printHello(){
    cout<<"Hello cpp";
}
void printTest(){
    cout<<"Test";
}
//function with return type and without arguments
int printNum(){
    return 10;
}
int printNumber(){
    return 20;
}
int main(){
    //calling the function
    printHello();
    cout<<endl;
    //storing the value in valriable from the funtion
    int num = printNum();
    cout<<"num = "<<num<<endl;
    //calling the function with cout
    cout<<printNum()<<endl;
    //calling a return type function without storing its value top a variable
    cout<<printNumber()<<endl;
    //calling the function without return type
    printTest();
    cout<<endl;
    return 0;

    
}