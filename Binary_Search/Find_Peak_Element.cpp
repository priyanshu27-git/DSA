#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if (n == 1)
    {
        cout << a[0];
        return 0;
    }

    if (a[0] > a[1])
    {
        cout << a[0];
        return 0;
    }
    if (a[n - 1] > a[n - 2])
    {
        cout << a[n - 1];
        return 0;
    }

    int low = 1, high = n - 2;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] > a[mid + 1] && a[mid] > a[mid - 1])
        {
            cout << mid;
            break;
        }

        if (a[mid] > a[mid - 1])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return 0;
}
