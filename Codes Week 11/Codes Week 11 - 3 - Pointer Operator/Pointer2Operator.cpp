#include<iostream>
using namespace std;
class ABC
{
   public:
       int m;
       void display()
       {
          cout<<"x="<<m<<endl;
       }
};
int main()
{
     ABC A;
     ABC *ptr;
     int ABC::*f=&ABC::m;
     A.m=10;
     ptr=&A;
     cout<<ptr->*f;
     ptr->display();
}