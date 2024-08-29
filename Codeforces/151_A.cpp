#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int toasts = (k * l) / nl;    
    int totalSlices = c * d;       
    int salt = p / np;             
    int smallest = min(toasts, min(totalSlices, salt));
    cout << smallest / n << endl;

    return 0;
}