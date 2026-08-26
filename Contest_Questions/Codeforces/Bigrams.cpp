#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int k;
    cin >> k;

    vector<long long> c(k);  
    bool has_three = false;
    int count_two = 0;

    for (int i = 0; i < k; i++)
    {
        cin >> c[i];
        if (c[i] >= 3)
        {
            has_three = true;
        }
        if (c[i] >= 2)
        {
            count_two++;
        }
    }

    if (has_three || count_two >= 2)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t)
    {
        while (t--)
        {
            solve();
        }
        return 0;
    }
}
