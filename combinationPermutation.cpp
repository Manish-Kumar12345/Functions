#include<iostream>
using namespace std;

int fact(int x){
    int f = 1;
    for(int i = 2; i <= x; i++){
        f  *= i;
    }
    return f;
}
int combination(int n, int r){
    int ncr = fact(n)/(fact(r) * fact(n-r));
    return ncr;
}
int permutation(int n, int r){
    int npr = fact(n)/fact(r);
    return npr;
}
int main(){
    int n;
    cout<<"Enter n :";
    cin>>n;
    int r; 
    cout<<"Enter r :";
    cin>>n;
    // Method -> 1
    // int nfact = 1;
    // for( int i = 2; i<= n; i++){
    //     nfact *= i;
    // }
    // int rfact = 1;
    // for(int i = 2; i <= r; i++){
    //     rfact *= i;
    // }
    // int nrfact = 1; // nrfact -> (n-r)!
    // for(int i = 2; i <= n-r; i++){
    //     nrfact *= i;
    // }
    // // Method -> 2
    // int nfact = fact(n);
    // int rfact = fact(r);
    // int nrfact = fact(n-r);
    // int ncr = nfact/(rfact*nrfact);
    // cout<<ncr;

    int ncr = combination(n, r);
    int npr = permutation(n,r);
    cout<<ncr<<endl<<npr;
}