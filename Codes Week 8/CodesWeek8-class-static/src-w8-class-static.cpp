#include<iostream>
#include<string>
// Header file untuk definisi class Kotak harus disertakan
#include "Kotak-v5.h"
using namespace std;

int main()
{

	Kotak kotak1(15);
	Kotak kotak2(12, 1, 15);
	
	cout << Kotak::object_count << endl; // Hasil: 2
}