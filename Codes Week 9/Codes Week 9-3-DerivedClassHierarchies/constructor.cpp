#include <iostream>
#include <string>
using namespace std;
//kelas base
class A
{
	float d;
    //konstruktor
   public:
	A(){
		cout<<"Konstruktor kelas A\n";
	}
};
//kelas turunan 
class B: public A
{
	int a = 15;
    //konstruktor
    public:
	B(){
		cout<<"Konstruktor kelas B\n";
	}
};
 
int main(int argc, char const *argv[])
{
	B b;
	return 0;
}