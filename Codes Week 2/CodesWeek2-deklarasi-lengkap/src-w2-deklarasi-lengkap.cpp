#include<iostream>
using namespace std;

int main()
{
	// Deklrasi Awal 
	int y = 5;

	// Operasi Aritmatika
	y += 10; // Setara dengan y = y + 10 
	cout << y << endl; // Akan memberikan nilai 15 

	y = 5; 
	y *= 10; // Setara dengan y = y * 10
	cout << y << endl; // Akan memberikan nilai 50

	y = 5;
	y /= 2; // Setara dengan y = y / 2
	cout << y << endl; // Akan memberikan nilai 2

	y = 5;
	y %= 2; // Setara dengan y = y % 10
	cout << y << endl; // Akan memberikan nilai 1
	
	return 0;
}