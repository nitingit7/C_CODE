#include <iostream>
using namespace std;

double d,m;
double n;

double eq(double x) {
    return (x*x*x)-x-1;
}

void interval(){
    double a,b,c;
    int i;
    c=0;
    for(i=1;i<=10;i++){
        b=eq(i);
        a=eq(c);
        c = c+1;
        if (a*b<0){
            m = c-1;
            n = i;
            d = (n+m)/2;
            break;
        }
    }
}

double fun(){
    double f3;
    double sd,ss;
    double sht;
    int j;
    interval();
    for(j=1;j<=12;j++){
        f3 = eq(d);
        if (f3<0){
            m = d;
        }
        else{
            n = d;
        }
        d = (m+n)/2;
    }
    return d;
}

int main(){
    cout<<"Nitin Kumar (19028)"<<endl;
    cout<<"the roots is: "<<fun();
    return 0;
}

