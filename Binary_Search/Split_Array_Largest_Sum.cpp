#include <iostream>
#include <algorithm>
using namespace std;

int Minimized_Sum(int a[], long long barrier, int m, int n)
{
    long long count_subarray = 1, sum = 0;

    for (int i = 0; i < n; i++)
    {
        if (sum + a[i] <= barrier)
        {
            sum += a[i];
        }
        else
        {
            sum = a[i];
            count_subarray += 1;
        }
    }

    return count_subarray;
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

    int m;
    cin >> m;

    if (m > n)
    {
        cout << -1;
        return 0;
    }

    long long sum = 0;
    int Maxi = a[0];
    
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        Maxi = max(Maxi, a[i]);
    }

    long long low = Maxi, high = sum;

    while (low <= high)
    {
        long long mid = (low + high) / 2;

        int check_Subarrays = Minimized_Sum(a, mid, m, n);

        if (check_Subarrays < m)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << low;

    return 0;
}