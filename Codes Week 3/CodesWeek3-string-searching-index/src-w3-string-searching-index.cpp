#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kuliah = "Kuliah Progdas dan Kuliah Data";

	// Mencari dari indeks pertama
	cout << kuliah.find("Kuliah") << endl; // Hasil: 0

	// Mencari dari indeks ketujuh
	cout << kuliah.find("Kuliah", 7) << endl; // Hasil: 19
}

