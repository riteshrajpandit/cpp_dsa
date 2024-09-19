#include<iostream>
using namespace std;

int main(){
    int i=1,n,sum = 0;
    cout<<"Enter n to sum 1 to n: ";
    cin>>n;
    while(i<=n){
        // sum = sum + i;
        sum +=i;
        i++;

    }
    cout<<"Sum from 1 to "<<n<<" is: "<<sum<<endl;
    return 0;
}