#include <iostream>
#include <cmath>
using namespace std;

int n;
int a;
int b;
double h;
double listx[20],listy[20];

double hseries(double a, double b)
{
	h=(b-a)/2;
	return h;
	
}

void xseries(double ht){
	double d,y;
	d = 0;
	for (int i=0;i<=n;i++){
		d = i*ht;
		listx[i] = d;
		y = 1/(1+d*d);
		listy[i] = y;
	}
}

double eq(){
	xseries(hseries(a,b));
	double ft,sum,fn;
	sum = 0;
	ft = ((listy[0]*listy[6])/2);
	for (int j=0;j<=n+1;j++){
		sum+=listy[j];
	}
	fn = (h/2)*(ft+sum);
	return fn;
}
int main(){

	cout<<"enter the value of n: ";
	cin>>n;
	cout<<"enter the value of a: ";
	cin>>a;
	cout<<"enter the value of b: ";
	cin>>b;
	cout<<"the value of integration is:"<<eq();
}
