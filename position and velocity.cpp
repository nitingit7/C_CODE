#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;
double v,d,listv[20],listd[20];
int lista[20],listt[20],n;

void velocity(){
	for (int i=1;i<=n;i++){
		v = lista[i]*listt[i];
		listv[i] = v;
	}
}

void distance(){
	for (int i=1;i<=n;i++){
		d = listv[i]*listt[i];
		listd[i] = d;
	}
}

void graph(){
	fstream my_file;
	my_file.open("Acceleration vs Time.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		for(int i=1;i<=n;i++)
		{
		    my_file <<listd[i]<<"    "<<listv[i]<<"\n";
		}
		my_file.close();
	}
}


int main(){
	cout<<"enter the value of n: ";
	cin>>n;
	for (int i=1;i<=n;i++){
		cout<<"enter the values of acceleration in (ms^-2): ";
		cin>>lista[i];
	}
	for (int j=1;j<=n;j++){
		cout<<"eneter the corresponding time in (sec): ";
		cin>>listt[j];
	}
	velocity();
	distance();
	graph();
}
