#include<iostream>
using namespace std;

int main()
{
	int alas = 5;
	double tinggi = 1.5;
	
	cout << 0.5*alas*tinggi << endl; // Terjadi implicit casting
	cout << "Tipe Data setelah Operasi: " << typeid(0.5*alas*tinggi).name() << endl; 

	return 0;
}