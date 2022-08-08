#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1 = "Kuliah Progdas.";
	string replace_string = "Data";

	// Indeks Progdas = 7
	// Panjang Progdas = 7 karakter
	// Melakukan penggantian "Progdas" dengan "Data"
	str1 = str1.replace(7, 7, replace_string);

	// Hasil: Kuliah Data.
	cout << str1 << endl;
}

