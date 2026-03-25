#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &x, vector<int> &y, int i, int j, int k)
{
    int currentsum = 0;
    int maxsum = 0;
    for (int a = 0; a < 1; a++)
    {
        currentsum = currentsum + y[i] + y[j] + y[k];
        if (maxsum < currentsum)
        {
            maxsum = currentsum;
        }
    }
    return maxsum;
}
int maxSumDistinctTriplet(vector<int> &x, vector<int> &y)
{
    int i = 0, j = 1, k = 2;
    while (i < x.size())
    {
        if (x[i] != x[j])
        {
            if (x[j] != x[k])
                if (x[k] != x[i])
                    return solve(x, y, i, j, k);
        }
        else
        {
            if (x[k] != x[i])
                k++;
            if (x[j] != x[k])
                k++;
            if (x[i] != x[j])
                j++;
        }
    }
    return -1;
}
int main()
{
    vector<int> x = {1, 2, 1, 3, 2};
    vector<int> y = {5, 3, 4, 6, 2};
    cout << maxSumDistinctTriplet(x, y);
}