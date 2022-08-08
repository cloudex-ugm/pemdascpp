#include<iostream>
#include<string>
using namespace std;

int main()
{
	// Inisialiasasi string
	string kuliah="Kuliah Progdas";
	
	// Mengakses substring pertama, pada index 0, 
	// Sepanjang 6 karakter
	string substring_pertama = kuliah.substr(0, 6);
	
	// Mengakses substring pertama, pada index 7, 
	// Sepanjang 7 karakter
	string substring_kedua = kuliah.substr(7, 7);
	
	// Mengakses substring pertama, dengan length berlebih
	// Akan mengakses substring index 0, sepanjang 100 karakter atau
	// Hingga akhir string
	// Dalam kasus ini, akan menghasilkan 'Kuliah Progdas"
	string substring_length_over = kuliah.substr(0, 100);
	
	cout << substring_pertama << endl;
	cout << substring_kedua << endl;
	cout << substring_length_over << endl;
}