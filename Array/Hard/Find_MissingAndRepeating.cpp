#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long Sn = (n * (n + 1)) / 2;

    long long S2n = (n *(n + 1) * (2 * (n + 1)) / 6);

    long long S = 0 , S2 = 0;

    for (int i = 0; i < n; i++)
    {
        S += a[i];
        S2 += (long)a[i] * (long)a[i];
    }

    long long val1 = S - Sn;

    long long val2 = S2 - S2n;

    val2 = val2 / val1;

    int x = (val1 + val2) / 2;

    int y = x - val1;
    
    cout << x << " " << y;
    return 0;
}