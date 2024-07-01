#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
  int x1, x2, x3;
  cin >> x1 >> x2 >> x3;
  int points[3] = {x1, x2, x3};
  sort(points, points + 3);
  int meet_Point = points[1];
  int total_distance = abs(meet_Point - x1) + abs(meet_Point - x2) + abs(meet_Point - x3);
  cout << total_distance << endl;
};