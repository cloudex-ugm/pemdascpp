#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1 = "C++ best programming code";
	string himpunan_karakter = "!@#$%^&*()-=_+";
	
	// Mencari apakah terdapat karakter khusus pada string
	cout << str1.find_first_of(himpunan_karakter) << endl; // Hasil: 1
}

