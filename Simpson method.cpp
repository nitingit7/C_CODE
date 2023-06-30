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
	double ft,sum,sum1,fn;
	sum = 0;
	sum1 = 0;
	ft = listy[0]+listy[n];
	for (int j=1;j<=n;j++){
		if (j%2==0 && j<=n-2){
			sum+=listy[j];
		}
		else if (j%2!=0 && j<=n-1){
			sum1+=listy[j];
		}
	}
	fn = (ft + 2*sum + 4*sum1);
	fn = (h/3)*fn;
	return fn;
}
int main(){

	cout<<"enter how many times you want to run(n): ";
	cin>>n;
	cout<<"enter the lower limit (a): ";
	cin>>a;
	cout<<"enter the upper limit(b): ";
	cin>>b;
	cout<<"the value of integration is:"<<eq();
	return 0;
}
