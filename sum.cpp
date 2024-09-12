#include<iostream>
using namespace std;

class sum{
    private:
     int a, b, add;
    public:
     void input(){
        cout<<"Enter two numbers to add"<<endl;
        cin>>a>>b;
     }
     void calculate(){
        add = a+b;
     }
     void display(){
        cout<<"Sum for "<<a<<" and "<<b<<" is "<<add<<endl;
     }


};

int main(){

    sum summation;
    summation.input();
    summation.calculate();
    summation.display();
    return 0;

}