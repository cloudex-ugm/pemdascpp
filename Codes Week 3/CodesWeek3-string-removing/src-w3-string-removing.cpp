#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1 = "Kuliah Progdas.";
	
	str1.erase(0,7);
	cout << str1 << endl; // Hasil: Progdas
	
	str1 = "Kuliah Progdas";
	str1.erase(6);
	cout << str1 << endl; // Hasil: Kuliah
	
	str1.erase();
	cout << str1 << endl; // Hasil: ""
}

