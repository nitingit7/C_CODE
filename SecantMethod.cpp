#include <iostream>
using namespace std;

double eq(double x){
    return (x*x*x)-x-1;
}

double interval(double k){
    int c,i;
    double a,b;
    c=1;
    for(i=2;i<=10;i++){
        b=eq(i);
        a=eq(c);
        c = c+1;
        if (a*b<0){
            break;
        }
    }
    if (k==1){
        return c-1;
    }
    else{
        return i;
    }
}

double val(double dft,double dfh){
    double f1,f2,x1;
    f1 = eq(dft);
    f2 = eq(dfh);
    double sh2 = dfh-dft;
    double sh3 = f2-f1;
    double sh = f1*(sh2/sh3);
    x1 = dft-sh;
    return x1;
}

double secant(){
    double akt,akh;
    double x2;
    int j;
    akt = interval(1);
    akh = interval(2);
    for (j=1;j<=7;j++){
        x2 = val(akt,akh);
        akt = akh;
        akh = x2;
    }
    return akh;
}

int main(){
    cout<<"Nitin Kumar (19028)"<<endl;
    cout<<"the root is: "<<secant();
    return 0;
}


