#include<iostream>
#include<string>
using namespace std;

int main()
{
	string nama_depan = "John";
	string nama_belakang = "Doe";
	string concat_string;
	
	concat_string += nama_belakang;
	concat_string += ';' + ' ';
	concat_string += nama_depan;
	cout << concat_string << endl;
}