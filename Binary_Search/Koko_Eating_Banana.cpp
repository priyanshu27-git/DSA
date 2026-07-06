#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int findMax(vector<int> &a)
{
    int Max = a[0];
    for (int i = 0; i < a.size(); i++)
    {
        Max = max(Max, a[i]);
    }
    return Max;
}

long long Calculate_Hours(vector<int> &a, int speed)
{
    long long TotalH = 0;
    for (int i = 0; i < a.size(); i++)
    {
        TotalH += (long long)ceil((long double)a[i] / speed);
    }
    return TotalH;
}
int minEatingSpeed(vector<int> &a, int h)
{
    int low = 1, high = findMax(a);
    int ans = 0;
    while (low <= high)
    {
        int mid = (low + high) / 2;

        long long totalH = Calculate_Hours(a, mid);
        if (totalH <= h)
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
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long h;
    cin >> h;

    int ans = minEatingSpeed(a, h);

    cout << ans;

    return 0;
}