#include <iostream>
using namespace std;

template <int num1, int num2>
struct sub {
    static const int value = (num1 - num2);
};

int main() {
  const int a = 25, b = 10;
  const int r1 = sub<a, b>::value;
  cout << "Sum is: " << r1 << endl;
  return 0;
}