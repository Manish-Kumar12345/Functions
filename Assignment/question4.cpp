//Write a function to count the number of digits in a number and then print the square of this number.
#include<iostream>
using namespace std;
int countDigits(int x){
    int count=0;
    while(x > 0){
        x = x/10;
        count++;
    }
    return count;
}
int squares(int x){
    return x*x;
}
int main(){
    int n;
    cout<<"Enter the numbner :"<<endl;
    cin>>n;
    cout<<countDigits(n)<<endl;
    cout<<squares(n);

}