#include<iostream>
using namespace std;

int main()
{
	// Deklrasi Awal 
	int x = 5;
	
	// Dengan sintaks op=
	x += 1;
	cout << x << endl;
	
	// Dengan increment
	x = 5;
	x++; // Setara dengam x += 1
	cout << x << endl;
	
	return 0;
}