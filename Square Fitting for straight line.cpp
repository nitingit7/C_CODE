#include <iostream>
#include <cmath>
//#include <list>
#include <fstream>
using namespace std;

double a1,b1,a2,b2;
int  n;
double c1 = 0;
double c2 = 0;
double xlist[10],ylist[10];

void eq1(){
//    int j = 0;
    for (int i=0;i<=n-1;i++){
        c1+= ylist[i];
    }
    for (int j=0;j<=n-1;j++){
        a1+=xlist[j];
    }
    b1 = n;
}

void eq2(){
    for (int i=0;i<=n-1;i++){
        c2+=(ylist[i]*xlist[i]);
    }
    for (int j=0;j<=n-1;j++){
        a2 += (xlist[j]*xlist[j]);
    }
    b2 = a1;
}

void solve(){
    double x,y;
    double fn = (b2*c1-b1*c2);
    double ft = (a1*b2-a2*b1);
    x = fn/ft;
    double sn = (c2*a1-c1*a2);
    double st = (a1*b2-a2*b1);
    y = sn/st;
    cout<<"the value of a is: "<<x<<endl;
    cout<<"the value od b is: "<<y<<endl;
}

void graph(){
	fstream my2file;
	my2file.open("my2file.txt", ios::out);
	if (!my2file){
		cout<<"file already exist";
	}
	else{
		cout<<"file created succesfully";
		for (int i=0;i<=n-1;i++)
		{
			my2file <<xlist[i]<<"       "<<ylist[i]<<endl;
		}
		my2file.close();
	}
}

int main(){
    cout<<"Nitin Kumar (19028)"<<endl;
    cout<<"square fitting method for straight line equation(y=ax+b)"<<endl;
    cout<<"enter the number of choice: ";
    cin>>n;
    for (int i=0;i<=n-1;i++){
        cout<<"enter the x values: ";
        cin>>xlist[i];
    }
    for (int j=0;j<=n-1;j++){
        cout<<"enter the value of y: ";
        cin>>ylist[j];
    }
    eq1();
    eq2();
    solve();
    graph();
    return 0;
}
