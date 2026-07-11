#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int a1[n1], a2[n2];

    for (int i = 0; i < n1; i++) // taking input in array 1
    {
        cin >> a1[i];
    }

    for (int i = 0; i < n2; i++) // taking input in array 2
    {
        cin >> a2[i];
    }

    int k;
    cin >> k;

    int low = max(k - n2, 0), high = min(k, n1); // BINARY SEARCH ALGO

    int left = k;
    int n = n1 + n2;

    while (low <= high)
    {
        int mid1 = (low + high) >> 1;
        int mid2 = left - mid1;

        int l1 = -1, l2 = -1;
        int r1 = 3000, r2 = 3000;

        if (mid1 < n1)
            r1 = a1[mid1];
        if (mid2 < n2)
            r2 = a2[mid2];
        if (mid1 - 1 >= 0)
            l1 = a1[mid1 - 1];
        if (mid2 - 1 >= 0)
            l2 = a2[mid2 - 1];

        if (l1 <= r2 && l2 <= r1)
        {
            cout << max(l1, l2);
            return 0;
        }
        else if (l1 > r2)
        {
            high = mid1 - 1;
        }
        else
        {
            low = mid1 + 1;
        }
    }
    return 0;
}