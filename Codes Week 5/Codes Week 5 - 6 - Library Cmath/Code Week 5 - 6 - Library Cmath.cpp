#include <iostream>
#include <cmath>

/* Library yang terdiri atas fungsi-fungsi untuk operasi matematis. 
   Terdapat banyak fungsi matematis di dalamnya.   */

using namespace std;

int main() {

   // fungsi sin
   cout << "sin(90) = " << sin(90) << endl;    
   
   // fungsi eksponensial      
   cout << "exp(5) = " << exp(5) << endl; 

   // fungsi floor (pembulatan ke integer bawah terdekat)          
   cout << "floor(11.4174) = " << floor(11.4174) << endl;   

   // fungsi logaritma natural
   float x = log(10);                
   cout << "ln(10) = " << x << endl;

   // fungsi perpangkatan (7 pangkat 2)
   int y = pow(7,2);                 
   cout << "pow(7,2) = 7^2 = " << y << endl;

   return 0;
}
