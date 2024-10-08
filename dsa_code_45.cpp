//Print prime numbers from 2 to n
// for n = 5, output = 2 3 5
#include<iostream>
using namespace std;


bool isPrime(int n){
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int num = 50;
    for(int i=2;i<=num;i++){
        if(isPrime(i)){
            cout<<i<<" ";
            i++;
        }
    }
    cout<<endl;
    return 0;

}