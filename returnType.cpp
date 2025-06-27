#include<iostream>
#include<cmath>
using namespace std;
int sum(int x, int y){
    return x+y;
}
int mini(int x, int y){
    int a;
    if(x<y) a = x;
    else a = y;
    return a;
}
int maxi(int x, int y){
    return x>y? x : y;
}
int main(){
    // cout<<sum(40,63);
    int x, y;
    cout<<"Enter two numbers : ";  // user input for x and y
    cin>>x>>y;
    cout<<mini(x,y)<<endl;
    cout<<maxi(x,y)<<endl;
    cout<<sqrt(7);
}