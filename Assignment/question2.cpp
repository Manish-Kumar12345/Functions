//Write a function to take the radius of a circle as an argument and return its area.
#include<iostream>
using namespace std;
float area(int x){
    return 3.1415*x*x;
}
int main(){
    int r;
    cout<<"Enter the radius of the circle : "<<endl;
    cin>>r;
    float Area = area(r);
    cout<<"Area of the circle is :"<<Area;
}