#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 2)
    {
        cout << n;
        return 0;
    }

    int low = 1, high = n / 2 , ans = 0;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (mid * mid <= n){
            ans = mid;
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
        cout << mid << endl;
    }
    cout << ans;
    return 0;
}
