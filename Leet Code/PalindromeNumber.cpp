#include <iostream>
using namespace std;
int reverse(int x)
{
  int revNum = 0;
  while (x != 0)
  {
    int digit = x % 10;
    revNum = revNum * 10 + digit;
    x /= 10;
  }
  return revNum;
}
int main()
{
  int number;
  // cin >> number;
  int check = 121 % 122;
  // int len = number.len();
  cout << check;

  return 0;
};