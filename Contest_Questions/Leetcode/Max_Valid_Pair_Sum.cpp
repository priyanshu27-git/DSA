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
    int k;
    cin >> k;

    int maximum_element = 1;
    int current_element = 1;

    for (int j = k; j < n; j++)
    {
        current_element = max(current_element, a[j - k]);
        maximum_element = max(maximum_element, current_element + a[j]);
    }

    cout << maximum_element;
    return 0;
}