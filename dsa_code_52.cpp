// Conversion of Binary to decimal

#include<iostream>
using namespace std;

int binToDec(int num){
    int ans=0, pow=1,rem;
    while(num>0){
        rem = num%10;
        num = num/10;
        ans+=(rem*pow);
        pow=pow*2;
    }
    return ans;
}

int main(){
    int binNum = 110010;
    cout<<binToDec(binNum)<<endl;
    return 0;
}