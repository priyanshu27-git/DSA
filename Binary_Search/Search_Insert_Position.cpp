#include <iostream>
using namespace std;

int Search_Position(int a[], int low, int high, int Target, int n)
{
    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if (a[mid] >= Target)
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

    int ans = Search_Position(a, 0, n - 1, Target, n);

    cout << ans;
    return 0;
}