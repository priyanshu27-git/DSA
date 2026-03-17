#include <iostream>
using namespace std;

int linearSearch(int a[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (a[i] == k)
        {
            return i;
        }
    }
}
int main()
{
    int a[] = {1, 2, 3, 4, 5};
    int k = 3;
    int n = sizeof(a) / sizeof(a[0]);
    cout << linearSearch(a, n, k);
    return 0;
}
