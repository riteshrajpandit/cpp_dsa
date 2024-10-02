//Sum of digits in a number
#include<iostream>
using namespace std;

int digitSum(int num){
    int dSum = 0;
    while(num>0){
    int lastDigit = num%10;
    num = num/10;
    dSum += lastDigit;
    }
    return dSum;
}

int main(){
    int num;
    cout<<"Enter Number: ";
    cin>>num;
    cout<<"The sum of numbers in the digit: "<<digitSum(num)<<endl;
    return 0;
}