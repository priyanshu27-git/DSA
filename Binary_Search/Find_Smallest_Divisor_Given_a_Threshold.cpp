#include <iostream>
#include <vector>
using namespace std;

int smallest_divisor(vector<int> a, int value)
{
    int sum = 0;
    for (int i = 0; i < a.size(); i++)
    {
        sum += (a[i] + value - 1) / value;
    }
    return sum;
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

    int Threshold;
    cin >> Threshold;

    int Maxi = a[0];

    for (int i = 0; i < n; i++)
    {
        Maxi = max(Maxi, a[i]);
    }

    int low = 1, high = Maxi;


    while (low <= high)
    {
        int mid = (low + high) / 2;
        

        int divisor = smallest_divisor(a, mid);

        if (divisor <= Threshold)
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