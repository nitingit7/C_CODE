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
		b1+=xlist[j];
	}
	a1 = n;
}

void eq2(){
	for (int i=0;i<=n-1;i++){
		c2+=xlist[i]*log(ylist[i]);
	}
	for (int j=0;j<=n-1;j++){
		b2+=xlist[j]*xlist[j];
	}
	a2 = b1;
}

void solve(){
	double x,y;
	x = (b2*c1-b1*c2)/(a1*b2-a2*b1);
	y = (c2*a1-c1*a2)/(a1*b2-a2*b1);
	x = exp(x);
	cout<<endl;
	cout<<"the value of a is: "<<x<<endl;
	cout<<"the value of b is: "<<y<<endl;
	cout<<endl;
}

void graph(){
	fstream my4file;
	my4file.open("exponetial2.txt", ios::out);
	if (!my4file){
		cout<<"file already exist";
	}
	else{
		cout<<"file created succesfully!"<<endl;
		for (int i=0;i<=n-1;i++){
			my4file <<xlist[i]<<"    "<<ylist[i]<<endl;
		}
		my4file.close();
	}
}

int main(){
	cout<<"Nitin Kumar"<<endl;
	cout<<"enter the number of data: ";
	cin>>n;
	for (int i=0;i<=n-1;i++){
		cout<<"enter thr value of x: ";
		cin>>xlist[i];
	}
	for (int j=0;j<=n-1;j++){
		cout<<"enter the value of y:";
		cin>>ylist[j];
	}
	eq1();
	eq2();
	solve();
	graph();
}
