//Calculate nCr binomial cofficient of n and r
#include<iostream>
using namespace std;

int fact(int n){
    int f = 1;
    for(int i=1;i<=n;i++){
        f*=i;
    }
    return f;
}
int nCr(int n, int r){
    int fact_n=fact(n);
    int fact_r=fact(r);
    int fact_nmr=fact(n-r);

    return fact_n/(fact_r*fact_nmr);


}
int main(){
    int n=8,r=2;
    cout<<  nCr(n,r)<<endl;


}