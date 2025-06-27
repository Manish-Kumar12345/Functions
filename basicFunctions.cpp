#include<iostream>
using namespace std;
void starTriangle(int x){
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void greeting(){
    cout<<"Good Morning"<<endl;
    cout<<"Have a nice day"<<endl;
}
int main(){
    // greeting(); // function calling
    // greeting();
    // greeting();
    starTriangle(3);
    starTriangle(4);
    starTriangle(5);



    // int n;
    // cout<<"Enter the number : ";
    // cin>>n;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 1; j <= i; j++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
}