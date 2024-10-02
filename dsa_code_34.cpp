//Butterfly Pattern
/*
        *      *
        **    **
        ***  ***
        ********
        ***  ***
        **    **
        *      *
*/

#include<iostream>
using namespace std;

int main(){
    int n = 4;
    for(int i=0;i<n;i++){
        //left top stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //spaces
        for(int j=i;j<n-1;j++){
            cout<<" ";
        }
        //spaces
        for(int j=i;j<n-1;j++){
            cout<<" ";
        }
        //right top stars
        for(int j=0;j<=i;j++){
            cout<<"*";
        }
        //end of line
        cout<<endl;
    }
    for(int i = 0;i<n-1;i++){
        //buttom left stars
        for(int j=0;j<n-1-i;j++){
            cout<<"*";
        }
        //spaces
        for(int j = 0;j<=i;j++){
            cout<<" ";
        }
        //spaces
        for(int j = 0;j<=i;j++){
            cout<<" ";
        }
        //buttom right stars
        for(int j=0;j<n-1-i;j++){
            cout<<"*";
        }
        //end of line
        cout<<endl;
    }
    return 0;
}