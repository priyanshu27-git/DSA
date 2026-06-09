#include <iostream>
#include <algorithm>
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

    sort(a, a + n);
    int count = 1;
    int match = 0, Longest = 1;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < n; i++)
    {
        if (a[i] - 1 == a[match])
        {
            count++;
            match = i;
            if (count > Longest)
            {
                Longest = count;
            }
        }
        
        else if (a[i] > a[match] + 1)
        {
            match = i;
            count = 1;
        }
    }

    cout << Longest;

    return 0;
}