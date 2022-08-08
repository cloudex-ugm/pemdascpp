#include <iostream>  
using namespace std;  
template<class X> void joy(X a)  
{  
    std::cout << "Nilai a : " <<a<< std::endl;  
}  
template<class X,class Y> void joy(X b ,Y c)  
{  
    std::cout << "Nilai b : " <<b<< std::endl;  
    std::cout << "Nilai c : " <<c<< std::endl;  
}  
int main()  
{  
   joy(10);  
   joy(20,30.5);  
   return 0;  
}  