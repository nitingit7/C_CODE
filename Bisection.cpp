#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int main() {
    int a,b,x;
    float t,y,fx;
    cout<<"enter the upper bound: ";
    cin>>a;
    cout<<"enter the lower bound: ";
    cin>>b;
    float fxt = (x^3)-3;
    t = (a+b)/2;
    x=t;
    float teq = fxt;
    x=a;
    fx = (x^3)-8;
    float aeq = fx;
    x=b;
    fx = (x^3)-8;
    float beq = fx;
    if (teq*aeq<0){
        a=t;
        cout<<"hora hora"<<endl;
    }
    else if(teq*beq<0){
        b=t;
        cout<<"gochi gochi";
    }
    y=trunc(fxt*100);
    cout<<y;
}