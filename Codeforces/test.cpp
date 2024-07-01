#include <iostream>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int available_time = 240 - k;
    int total_time_spent = 0;
    int total_solved = 0;

    for (int i = 1; i <= n; i++)
    {
        int time_to_solve = 5 * i;
        if (total_time_spent + time_to_solve <= available_time)
        {
            total_time_spent += time_to_solve;
            total_solved++;
        }
        else
        {
            break;
        }
    }

    cout << total_solved;
    return 0;
}
