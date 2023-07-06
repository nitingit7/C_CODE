#include <iostream>
#include <cmath>

using namespace std;

double eq(double x){
    return x*x*x-x-1;
}

double eq2(double x){
    return 3*x*x*-1;
;
}

double interval(){
    double a,b, d = 0;
    int c,i;
    a =1;
    c=1;
    b=1;
    for(i=2;i<=10;i++){
        b=eq(i);
        a=eq(c);
        c = c+1;
        if (a*b<0){
            d = (a+b)/2;
            break;
        }
    }
    return d;
}

double Raphson(double x1){
    return x1-(eq(x1)/eq2(x1));
}

double loop(){
    int j;
    double x1,l;
    x1= Raphson(interval());
    for (j=1;j<=7;j++){
        l = Raphson(x1);
        x1 = l;
    }
    return x1;
}

int main(){
    cout<<"Nitin Kumar (19028)"<<endl;
    cout<<"the root are: "<<loop();
    return 0;
}
