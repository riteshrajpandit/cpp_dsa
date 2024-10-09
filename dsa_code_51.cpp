// Function for binary to decimal conversion
#include<iostream>
using namespace std;

int decToBinary(int n){
    int ans = 0, pow = 1;
    while(n>0){
        int rem = n%2;
        n = n/2;
        ans+=(rem*pow);
        pow= pow*10;
    }
    return ans;
}

int main(){
    int decNum = 5;
    
    cout<<decToBinary(decNum)<<endl;

    for(int i = 1;i<=50;i++){
        cout<<decToBinary(i)<<endl;
    }
    return 0;
}