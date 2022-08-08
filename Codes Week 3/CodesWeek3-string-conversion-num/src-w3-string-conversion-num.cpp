#include<iostream>
#include<string>
using namespace std;

int main()
{
	string integer = "42";
	string pi = "3.14";
	
	int converted_integer = stoi(integer);
	float converted_pi = stof(pi);

	cout << converted_integer << endl;
	cout << converted_pi << endl;
}

