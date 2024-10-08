#include<iostream>
using namespace std;

//To get the nth term of the fibonacci sequence
int fibo(int n){
    if(n<=1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
    
}

// To list the nth term of fibonacci sequence
void listFibo(int n){
    int f0=0,f1=1,nextf=0;
    for(int i=1;i<n;i++){
        if(i==1){
            cout<<f0<<" ";
        }
        if(i==2){
            cout<<f1<<" ";
        }
        nextf=f0+f1;
        f0=f1;
        f1=nextf;
        cout<<nextf<<" ";
    }
    cout<<endl;

}
int main(){
    int n = 8;
    cout<<n<<"th term in fibonacci is:"<<fibo(n)<<endl;
    listFibo(n);
    return 0;
}