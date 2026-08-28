#include <iostream>
#include <limits.h>
using namespace std;

int main()
{

    int t;
    cin >> t;

    int size = t;
    int ans[t];
    int count = 0;

    while (t != 0)
    {
        int n;
        cin >> n;

        int arr[n + 2];

        for (int i = 1; i <= n; i++)
        {
            cin >> arr[i];
        }

        if (n % 2 != 0)
        {
            ans[count] = 0;
            t--;
            count++;
            continue;
        }

        int odd = INT_MAX;
        int even = INT_MIN;

        for (int i = 1; i <= n; i++)
        {
            if (i % 2)
            {
                if (arr[i] < odd)
                    odd = arr[i];
            }
            else
            {
                if (arr[i] > even)
                    even = arr[i];
            }
        }

        if (odd - even >= 2)
            ans[count] = 1;
        else
            ans[count] = 0;

        t--;
        count++;
    }

    for (int i = 0; i < size; i++)
    {
        if (ans[i] == 1)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}