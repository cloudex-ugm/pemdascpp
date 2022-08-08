#include<iostream>
using namespace std;

int main()
{
	int y = 0;
	double z = 5.2;
	
	y = z; // Terjadi implicit narrowing conversion, dari double ke int
	
	cout << y << endl;
	
	return 0;
}