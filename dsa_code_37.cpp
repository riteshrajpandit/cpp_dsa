//Sum of N numbers
#include<iostream>
using namespace std;

int sum(int n){
    int s= 0;
    for(int i = 0;i<=n;i++){
        s=s+i;
    }
    return s;
}
int main(){
    int n = 7;
    cout<<sum(n)<<endl;
    return 0;
}