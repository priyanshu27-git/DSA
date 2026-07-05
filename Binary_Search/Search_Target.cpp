#include <iostream>
using namespace std;

int BinarySearch(int a[], int Target, int low, int high)
{

    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (Target == a[mid])
        {
            return mid;
        }

        if (a[mid] < Target)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
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

    int ans = BinarySearch(a, Target, 0, n - 1);

    cout << ans;
    return 0;
}