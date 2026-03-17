#include <iostream>
using namespace std;

void rotateArray(int a[], int n, int k)
{
    k %= n;

    for (int i = 0; i < k; i++)
    {
        int last = a[n - 1];
        for (int j = n - 1; j > 0; j--)
        {
            a[j] = a[j - 1];
        }
        a[0] = last;
    }

    // print array 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}
int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a) / sizeof(a[0]);
    int k = 3;
    rotateArray(a, n, k);
    return 0;
}