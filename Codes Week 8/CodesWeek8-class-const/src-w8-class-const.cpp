#include<iostream>
#include<string>
// Header file untuk definisi class Kotak harus disertakan
#include "Kotak-v4.h"
using namespace std;

int main()
{
	const Kotak kotak1(10, 12, 5);
	
	cout << kotak1.getPanjang() << endl; // Tidak lagi memunculkan error
}