#include<iostream>
using namespace std;
int squares(int x){
    return x*x;
}
int main(){
    int n;
    cout<<"Enter the no of terms :"<<endl;
    cin>>n;
    for(int i = 1; i <= n; i++){
        cout<<squares(i)<<endl;
    }
}