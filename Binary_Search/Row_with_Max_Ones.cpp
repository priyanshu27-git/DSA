#include <iostream>
using namespace std;

// Lower bound means minimum greatest or equal to target number
int LowerBound(int a[], int n, int Target, int low, int high)
{
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] >= Target)
        {
            ans = mid;
            high = mid - 1;
        }

        else
        {
            low = mid + 1;
        }
    }

    return ans;
}
int main()
{
    int n, m;

    cin >> n >> m;

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int max_count = 0;
    int index = -1;

    for (int i = 0; i < n; i++)
    {
        int count_ones = m - LowerBound(a[i], m, 1, 0, n - 1);
        if (count_ones > max_count)
        {
            max_count = count_ones;
            index = i;
        }
    }

    cout << index;
    return 0;
}
