//print nth fibonacci series

#include<iostream>
using namespace std;

// void fibo(int n){

// }

int main(){
    int n=8;
    int f0 = 0,f1=1,fibo=0;

    for(int i = 1;i<=n;i++){
        if(i==1){
            cout<<f0<<" ";
        }
        if(i==2){
            cout<<f1<<" ";
        }
        
        fibo=f0+f1;
        
        f0=f1;
        f1=fibo;
        cout<<fibo<<" ";
    }
    cout<<endl;
    return 0;
}