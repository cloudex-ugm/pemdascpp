#include<iostream>
#include<string>
using namespace std;

int main()
{
	string angkatan = "Angkatan '";
	// Dilakukan konversi angka menjadi string
	// dengan fungsi to_string()
	string concat_string = angkatan + to_string(99);

	cout << concat_string << endl;
}