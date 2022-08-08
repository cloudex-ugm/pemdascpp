#include<iostream>
#include<string>
using namespace std;

int main()
{
	string str1 = "Kuliah Progdas";
	string insert_string = "Data dan ";

	str1 = str1.insert(7, insert_string);
	cout << str1 << endl;
}

