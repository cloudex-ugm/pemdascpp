#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kuliah = "Kuliah Progdas dan Kuliah Data";
	string mata_kuliah = "Progdas";
	
	// Mencari dengan string literal
	cout << kuliah.find("Kuliah") << endl; // Hasil: 0

	// Mencari dengan string objek
	cout << kuliah.find(mata_kuliah) << endl; // Hasil: 7
	
	// Mencari string yang tidak ditemukan
	cout << kuliah.find("Analisis") << endl; // Hasil: 18446744073709551615
}