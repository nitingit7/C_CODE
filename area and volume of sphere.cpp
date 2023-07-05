// area and volume of the sphere
#include <iostream>
#include <math.h>
using namespace std;

int main(){
    cout<<"Name: Nitin Kumar, Roll No: 19028"<<endl;
    int a,v,r;
    cout<<"enter the radius of the sphere: ";
    cin>>r;
    a=4*(3.14159)*r*r;
    v=(4/3)*3.14159*r*r*r;
    cout<<"the area of the sphere is: "<<a<<endl;
    cout<<"the volume of the sphere is: "<<v<<endl;
    return 0;
}