#include<iostream>
using namespace std;
int gcd(int a, int b){
    int hcf = 1;
    for(int i = min(a,b); i >= 1; i--){
        if(a % i == 0 && b % i == 0){ // i is a common factor
        hcf = i;
        break;
        }
    }
    return hcf;
}

int hcf(int a, int b){
    for(int  i = 1; i <= min(a,b); i++){
        if(a % i == 0 && b % i == 0){
            return i;
        }
    }
}
int main(){
    int a;
    cout<<"Enter 1st number :";
    cin>>a;
    int b;
    cout<<"Enter 2nd number :";
    cin>>b;
    cout<<gcd(a,b);

    cout<<endl<<hcf(a,b);
}