#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    unordered_map<long long,int> prefixsum;
    prefixsum[0] = 1;
    long long Sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        Sum += a[i];
        long long checkPrevious = Sum - k;
        count += prefixsum[checkPrevious];
        prefixsum[Sum] += 1;
    }

    cout << count;
    return 0;
}