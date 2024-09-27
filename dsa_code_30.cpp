/*  Floyd's Triangle Pattern
    A
    B A
    C B A
    D C B A
*/
#include<iostream>
using namespace std;


int main(){
    int n = 4;
    
    for(int i=0; i<n;i++){
        char ch = 'A'+i;
        for(int j=0;j<=i;j++){
            cout<<ch--<<" "; 
            
        }
        cout<<endl;
    }
    return 0;
}