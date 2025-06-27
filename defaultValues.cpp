#include <iostream>
using namespace std;
void fun(int x = 7, int y = 8){
    cout<<x<<" "<<y;
}
int main(){
    // int x = 4;
    // int y = 8;
    // fun(x,y);
    // case -> 1
    // fun();
    
    // case -> 2
    // fun(4,8);

    // case -> 3
    fun(4);
}