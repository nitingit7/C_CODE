#include <iostream>
#include <fstream>
using namespace std;
int main() {
	int i;
	fstream myfile;
	my_file.open("myfile.txt", ios::out);
	if (!my_file) {
		cout << "File not created!";
	}
	else {
		cout << "File created successfully!";
		
		   for(i=1;i<=50;i++)
		        {
		        my_file <<i<<"    "<<i*i<<"\n";
				}
		
		
		
		my_file.close();
	}
	return 0;
}
