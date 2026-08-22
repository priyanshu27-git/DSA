#include <iostream>
#include <algorithm>
using namespace std;

bool max_difference(int a[], int dist, int n, int cows)
{
    int count_cows = 1, last = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] - last >= dist)
        {
            count_cows++;
            last = a[i];
        }

        if (count_cows >= cows)
        {
            return true;
        }
    }

    return false;
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

    sort(a, a + n);

    int low = 0, high = a[n - 1] - a[0];

    while (low <= high)
    {
        int mid = (low + high) / 2;

        bool check_max_difference = max_difference(a, mid, n, k);

        if (check_max_difference)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    cout << high;
    return 0;
}

      long long ans = s;

        if (n % 2 == 0) {
            long long total_pairs = n / 2;
            ans = ans + (total_pairs * m) - ((total_pairs - 1) * 1);
        } 
        else {
            long long total_pairs = (n - 1) / 2;
            ans = ans + (total_pairs * m) - ((total_pairs - 1) * 1);
        }
    }