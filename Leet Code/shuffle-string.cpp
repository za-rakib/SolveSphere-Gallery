#include <iostream>
using namespace std;
int main()
{
  string s, s2;
  cin >> s;
  int n = s.length();
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++)
  {
    s2[i] = s[arr[i]];
  }

  cout << s2;
  // cout << n << endl;
  // cout << "GHGHGFGG";
  return 0;
};