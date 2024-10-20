#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {
	string line;
	ifstream read("ext.txt");

	if (!read.is_open()) {
		cout << "file is not found";
		
	}
	

	while (getline(read, line)) {

			cout << line << endl;

	}
	


}