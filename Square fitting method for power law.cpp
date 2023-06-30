#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double xlist[20],ylist[20];
int n;
double a1,b1,c1,a2,b2,c2;

void eq1(){
	for (int i=0;i<=n-1;i++){
		c1+= log(ylist[i]);
	}
	for (int j=0;j<=n-1;j++){
		a1+=log(xlist[j]);
	}
	b1 = n;
}

void eq2(){
	for (int i=0;i<=n-1;i++){
		c2+= log(xlist[i])*log(ylist[i]);
	}
	for (int j=0;j<=n-1;j++){
		a2+=log(xlist[j])*log(xlist[j]);
	}
	b2 = a1;
}

void solve(){
	double x,y;
	x = (b2*c1-b1*c2)/(a1*b2-a2*b1);
	y = (c2*a1-c1*a2)/(a1*b2-a2*b1);
	x = exp(x);
	cout<<endl;
	cout<<"the value of a is: "<<x<<endl;
	cout<<"the value of b is: "<<y<<endl;
}

void graph(){
	fstream my3file;
	my3file.open("exponetial.txt", ios::out);
	if (!my3file){
		cout<<"file already exist";
	}
	else{
		cout<<"file created succesfully";
		for (int i=0;i<=n-1;i++){
			my3file <<xlist[i]<<"     "<<ylist[i]<<endl;
		}
		my3file.close();
	}
}

int main(){
	cout<<"Nitin Kumar (19028) "<<endl;
	cout<<"square fitting method of power law (y=ax^b) "<<endl;
	cout<<"enter the number of data: ";
	cin>>n;
	for (int i=0;i<=n-1;i++){
		cout<<"enter the value of x: ";
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
