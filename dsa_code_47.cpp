//print nth fibonacci 
#include<iostream>
using namespace std;

int main(){
    int f0=0,f1=1,fibo=0,n=8;
    cout<<f0<<" "<<f1<<" ";
    //play around the loop as 2 numbers are already printed the loop for 8th fibo term must be 6 loops 
    for(int i=2;i<n;i++){

        fibo = f0+f1;
        f0=f1;
        f1=fibo;
        cout<<fibo<<" ";

    }
    cout<<endl;
    return 0;
}

//Not the best way to do but trying out makes us better 