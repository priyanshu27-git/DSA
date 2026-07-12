#include <iostream>
using namespace std;

int Search(int a[], int low, int high, int Target)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] == Target)
        {
            return mid;
        }

        if (a[low] <= a[mid])
        {
            if (Target >= a[low] && Target <= a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (Target >= a[mid] && Target <= a[high])
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    return -1;
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

    int Target;
    cin >> Target;

    int ans = Search(a, 0, n - 1, Target);

    cout << ans;

    return 0;
}