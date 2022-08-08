#include<iostream>
#include<string>
using namespace std;

int main()
{
	string kata_1 = "Ayam";
	string kata_2 = "Telur";
	
	// Membandingkan apakah kata_1 terletakh lebih dahulu
	// dibandingkan kata 2
	
	// Jika iya,
	if(kata_1 < kata_2){
		cout << kata_1 << " lebih dahulu dibandingkan " << kata_2 << endl;
	}
	// Jika tidak
	else {
		cout << kata_2 << " lebih dahulu dibandingkan " << kata_1 << endl;
	}
	
	// Hasil: Ayam lebih dahulu dibandingkan Telur
}