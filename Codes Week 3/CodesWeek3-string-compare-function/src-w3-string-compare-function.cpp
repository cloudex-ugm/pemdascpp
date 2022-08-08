#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kata_1 = "Ayam";
	string kata_2 = "Telur";
	
	if(kata_1.compare(kata_2) < 0){
		cout << kata_1 << " lebih dahulu dibandingkan " << kata_2 << endl;
	}
	else if (kata_1.compare(kata_2) == 0){
		cout << kata_1 << " sama dengan " << kata_2 << endl;
	}
	else {
		cout << kata_2 << " lebih dahulu dibandingkan " << kata_1 << endl;
	}

}