#include <iostream>
using namespace std;

int main()
{
  for (int i = 1; i < 101; i++) {
    if (i % 3 == 0 && i % 7 == 0) {
        cout << "Fizzbuzz\n";
      } else if (i % 3 == 0) {
        cout << "Fizz\n";
      } else if (i % 7 == 0) {
        cout << "Buzz\n";
      } else {
        cout << i << "\n";
      }
  }
  return 0;
}