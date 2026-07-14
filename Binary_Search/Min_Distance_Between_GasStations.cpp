#include <iostream>
#include <algorithm>
using namespace std;

int count_Gas_Stations(int a[], long double dist, int n)
{
    int count = 0;

    for (int i = 1; i < n; i++)
    {
        int Partition = ((a[i] - a[i - 1]) / dist);
        if (((a[i] - a[i - 1]) / dist) == Partition * dist)
        {
            Partition--;
        }
        count += Partition;
    }

    return count;
}

int main()
{
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int k;
    cin >> k;

    long double low = 0;
    long double high = 0;

    for (int i = 0; i < n - 1; i++)
    {
        high = max(high, (long double)(a[i + 1] - a[i]));
    }

    long double diff = 1e-6;
    
    while (high - low >= diff)
    {
        long double mid = (low + high) / (2.0);

        int count = count_Gas_Stations(a, mid, n);

        if (count > k)
        {
            low = mid;
        }
        else
        {
            high = mid;
        }
    }

    cout << high;

    return 0;
}