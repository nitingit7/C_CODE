#include <iostream>
#include <cmath>
using namespace std;
double listx[20],listy[20];
int n;
double sum = 0;
double vt;

double eq(){
	for (int j=0;j<n;j++){
		double pr = 1;
		for (int i=0;i<n;i++){
			if (i == j){
				continue;
			}
			else{
				pr = pr*((vt-listx[i])/(listx[j]-listx[i]));
			}
		}
		sum+=pr*listy[j];
	}
	return sum;

}

int main(){
	cout<<"enter the number of enteries: ";
	cin>>n;
	cout<<"enter the unavailable value of x: ";
	cin>>vt;
	for (int i=0;i<n;i++){
		cout<<"enter the values of value x: ";
		cin>>listx[i];
	}
	for (int j=0;j<n;j++){
		cout<<"enter the value of y: ";
		cin>>listy[j];
	}
	cout<<"the interpolated value of y is : "<<eq();
}

