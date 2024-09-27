//Patterns
/*
1 2 3
4 5 6
7 8 9
*/

#include<iostream>
using namespace std;

int main(){
    int i,j,n;
    cout<<"Enter n: ";
    cin>>n;
    int num = 1;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
    return 0;
}