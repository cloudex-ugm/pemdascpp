#include<iostream>
// Header file untuk definisi class Kotak harus disertakan
#include "Kotak-v2.h"
using namespace std;

int main()
{
	Kotak kotak1;
	Kotak kotak2(12, 10, 5);
	
	cout << kotak1.hitungArea() << endl;
	cout << kotak2.hitungArea() << endl;
	
}