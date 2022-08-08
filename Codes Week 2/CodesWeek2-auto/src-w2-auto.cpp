#include<iostream>
using namespace std;

int main()
{
	auto tipe_data_1 = 10;    // Compiler akan mendeduksi tipe data sebagai integer
	auto tipe_data_2 = 'A';   // Compiler akan mendeduksi tipe data sebagai char
	auto tipe_data_3 = 10.10; // Compiler akan mendeduksi tipe data sebagai float
	
	cout << typeid(tipe_data_1).name() << endl;
	cout << typeid(tipe_data_2).name() << endl;
	cout << typeid(tipe_data_3).name() << endl;
}