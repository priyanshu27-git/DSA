#include <iostream>
#include <vector>
using namespace std;

int UpperBound(vector<int> &a, int n, int Target, int low, int high)
{

    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] > Target)
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

int count_smaller_than_mid(vector<vector<int>> &a, int n, int m, int x)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {
        count += UpperBound(a[i], m, x, 0, m - 1);
    }
    return count;
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }

    int low = a[0][0], high = a[0][0];
    for (int i = 0; i < n; i++)
    {
        low = min(low, a[i][0]);
        high = max(high, a[i][m - 1]);
    }

    int req = (n * m) / 2;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int count_left_elements = count_smaller_than_mid(a, n, m, mid);

        if (count_left_elements <= req)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << low;

    return 0;
}