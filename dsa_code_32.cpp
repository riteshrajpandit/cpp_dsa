/*Pyramid Triangle Pattern
            1
          1 2 1
        1 2 3 2 1
      1 2 3 4 3 2 1
*/
#include<iostream>
using namespace std;


int main() {
    int n = 8;
    for (int i = 0; i < n; i++) {
        //spaces
        for(int j=0;j<n-i-1;j++){
            cout<<"  ";
        }
        //numbers in increasing order (left side)
        for(int j=1;j<=i+1;j++){
            cout<<j<<" ";
        }
        //numbers in decreasing order (right side)
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        cout << endl;
    }
    return 0;
}