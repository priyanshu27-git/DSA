#include <iostream>
using namespace std;

void QuickSort(int a[], int n, int lb, int ub)
{
    if (lb >= ub)
    {
        return;
    }
    int l, r, x, temp;
    l = lb + 1;
    r = ub;
    x = a[lb];
    while (l <= r)
    {
        while (a[l] <= x)
        {
            l++;
        }
        while (a[r] > x)
        {
            r--;
        }
        if (l < r)
        {
            temp = a[l];
            a[l] = a[r];
            a[r] = temp;
        }
    }

        temp = a[r];
        a[r] = a[lb];
        a[lb] = temp;

    QuickSort(a, n, lb, r - 1);
    QuickSort(a, n, r + 1, ub);
}

void print(int a[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int n = 5;
    int a[n] = {5, 3, 8, 4, 2};
    print(a,n);
    int lb = 0;
    int ub = n - 1;
    QuickSort(a,n,0,n-1);
    cout << endl;
    print(a,n);
}