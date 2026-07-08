#include <iostream>
#include <vector>
using namespace std;

int Minimum_days(vector<int> a, int capacity)
{
    int load = 0 , days = 1;
    for (int i = 0; i < a.size(); i++)
    {
        if(load + a[i] > capacity){
            days = days + 1;
            load = a[i];
        }
        else{
            load += a[i];
        }
    }
    return days;
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

    int days;
    cin >> days;

    int Maxi = a[0];
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        Maxi = max(Maxi, a[i]);
        sum += a[i];
    }

    int low = Maxi, high = sum;

    while (low <= high)
    {
        int mid = (low + high) / 2;
        
        int required_days = Minimum_days(a, mid);

        if (required_days <= days)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << low;

    return 0;
}