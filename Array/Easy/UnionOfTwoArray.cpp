#include <iostream>
using namespace std;

void unionOfTwoArray(int a[], int b[], int n, int m)
{
    int ans[n + m];
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        ans[k++] = a[i];
    }

    for (int i = 0; i < n; i++)
    {
        bool found = false;
        for (int j = 0; j < m; j++)
        {
            if (a[j] == b[i])
            {
                found = true;
                break;
            }
        }
        if (!found)
        {
            ans[k++] = b[i];
        }
    }

    // print array
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
}

int main()
{
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int b[] = {2,3,4,4,5,11,12};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);
    unionOfTwoArray(a, b, n, m);
    return 0;
}