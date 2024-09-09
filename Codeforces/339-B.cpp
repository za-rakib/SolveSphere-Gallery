#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    int tasks[m];
    for (int i = 0; i < m; i++)
    {
        cin >> tasks[i];
    }
    int current_position = 1;
    long long total_time = 0;

    for (int i = 0; i < m; i++)
    {
        if (tasks[i] >= current_position)
        {
            total_time += tasks[i] - current_position;
        }
        else
        {
            total_time += n - (current_position - tasks[i]);
        }
        current_position = tasks[i];
    }
    cout << total_time << endl;
    return 0;
};