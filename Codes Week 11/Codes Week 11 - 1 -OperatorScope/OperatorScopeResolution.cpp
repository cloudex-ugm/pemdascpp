#include<iostream>

int a=5;
int main()
{
    int a=10;
    std::cout << "Local a="<<a <<"\n";
    std::cout << "Global a="<<::a;
}


