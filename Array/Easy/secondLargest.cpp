#include <iostream>
using namespace std;

void findSecondMax(int a[], int n)
{
    if (n == 0 || n == 1)
    {
        cout << -1;
        return;
    }
    int Max, secondMax;
    Max = secondMax = a[0];
    for (int i = 0; i < n; i++)
    {
        if (Max < a[i])
        {
            Max = a[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] > secondMax && a[i] != Max)
        {
            secondMax = a[i];
        }
    }
    cout << "Second Largest Element = " << secondMax;
}
int main()
{
    int n = 6;
    int a[n] = {1, 2, 4, 7, 7, 5};
    findSecondMax(a,n);
    return 0;
}