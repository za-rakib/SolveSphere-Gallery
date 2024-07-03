#include <iostream>
using namespace std;
int main()
{
  int n, amazing = 0;
  cin >> n;
  int points[n];
  for (int i = 0; i < n; i++)
  {
    cin >> points[i];
  }
  int best = points[0], worst = points[0];
  
  for (int i = 1; i < n; i++)
  {
    if (best < points[i])
    {
      amazing++;
      best = points[i];
    }
    if (worst > points[i])
    {
      amazing++;
      worst = points[i];
    }
  }
  cout << amazing << endl;
  return 0;
};