#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter your score"<<endl;
    cin>>n;
    if(n>=90 && n<=100){
        cout<<"Grade : A, Marks "<<n<<endl;
    }else if(n>=70 && n<90){
        cout<<"Grade : B, Marks "<<n<<endl;
    }
    else if(n>=50 && n<70){
        cout<<"Grade : C, Marks "<<n<<endl;
    }
    else if(n>=40 && n<50){
        cout<<"Grade : D, Marks "<<n<<endl;
    }
    else if(n>=0 && n<40){
        cout<<"Grade : F, Marks "<<n<<endl;
    }else{
        cout<<"Invalid Socre. Input score must be between 0 and 100"<<endl;
    }
    return 0;
}