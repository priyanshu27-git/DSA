#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<vector<int>> a;
    for (int i = 0; i < n; i++)
    {
        vector<int> row(i + 1, 1);
        for (int j = 1; j < i; j++)
        {
            row[j] = a[i - 1][j - 1] + a[i - 1][j];
        }
        a.push_back(row);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}