#include<iostream>
using namespace std;

int main()
{
	// Deklrasi Awal 
	int x = 5;

	// Operasi Aritmatika Panjang 
	x = x + 10; 
	cout << x << endl; // Akan memberikan nilai 15 

	// Operasi Aritmatika Singkat 
	// Setara dengan x = x + 10 
	x = 5;
	x += 10;

	cout << x << endl; // Akan memberikan nilai 15 juga

	return 0;
}