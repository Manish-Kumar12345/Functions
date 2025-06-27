//Given two numbers a and b, write a function to print all odd numbers between them.
#include<iostream>
using namespace std;
void odd(int a, int b){
    for(int i = a; i <= b; i++){
        if(i % 2 != 0) 
        cout<<i<<endl;
    }
}
int main(){
    int a, b;
    cout<<"Enter the numbers : "<<endl;
    cin>>a>>b;
    odd(a,b);
    
}