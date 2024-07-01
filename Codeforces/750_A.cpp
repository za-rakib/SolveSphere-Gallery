#include <iostream>
using namespace std;
int main()
{
  int n, k;
  cin >> n >> k;
  int available_time = 240 - k;
  int time_spent = 0;
  int solved = 0;
  for (int i = 1; i <= n; i++)
  {
    int time_to_solve = 5 * i;
    if (time_spent + time_to_solve <= available_time)
    {
      time_spent += time_to_solve;
      solved++;
    }
    else
    {
      break;
    }
  }
  cout << solved;

  return 0;
};