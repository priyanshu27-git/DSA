#include <iostream>
#include <vector>
using namespace std;

int max_element(vector<vector<int>> &a, int n, int m, int col)
{
    int maxi = -1;
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i][col] > maxi)
        {
            maxi = a[i][col];
            index = i;
        }
    }
    return index;
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

    int low = 0, high = m - 1;

    while (low <= high)
    {
        {
            int mid = (low + high) / 2;

            int row = max_element(a, n, m, mid);

            int left = mid - 1 >= 0 ? a[row][mid - 1] : -1;

            int right = mid + 1 < m ? a[row][mid + 1] : -1;

            if (a[row][mid] > left && a[row][mid] > right)
            {
                cout << row << " " << mid;
                return 0;
            }

            if (a[row][mid] < right)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
        
        cout << -1 << " " << -1; // Peak Element not found

        return 0;
    }
}
