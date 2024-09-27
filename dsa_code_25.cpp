/*
    A
    B B
    C C C
    D D D D
*/

#include<iostream>
using namespace std;

int main(){
    int i,j,n=4;
    char ch = 'A';
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
            cout<<ch<<" ";
        }
        ch++;
        cout<<endl;
    }
}