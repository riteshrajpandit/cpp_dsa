#include<iostream>
using namespace std;
//sum of two numbers
int sum(int a, int b){
    return a+b;
}
//minimum of two numbers
int min(int a,int b){//parameters
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}

int main(){
    int a=50,b=20;
    cout<<"Sum = "<<sum(a,b)<<endl;//arguments
    cout<<"Min = "<<min(a,b)<<endl;
}