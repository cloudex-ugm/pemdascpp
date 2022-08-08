#include <iostream>  
using namespace std;  
template<class X,class Y> void joy(X a,Y b)  
{  
    std::cout << "Nilai dari a : " <<a<< std::endl;  
    std::cout << "Nilai dari b : " <<b<< std::endl;  
}  
  
int main()  
{  
   joy(15,12.3);  
   
   return 0;  
}  
