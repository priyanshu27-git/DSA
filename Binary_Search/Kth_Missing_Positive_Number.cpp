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

    int k;
    cin >> k;    

    // Binary Search approach(O(logn))
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        int missing = a[mid] - (mid + 1);

        if (missing < k)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }
    }
    cout << low + k; // (high + 1 = low)

    return 0;
}

// for (int i = 0; i < n; i++)
// {
//     if(a[i] <= k){
//         k++;
//     }
//     else {
//          cout << k;
//          break;
//     }
// }
