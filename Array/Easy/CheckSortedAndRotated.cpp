#include <iostream>
using namespace std;

void checkSortedAndRotated(int a[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] > a[i + 1])
            count++;
    }
    bool isLastBreakFirst = a[0] >= a[n - 1];
    if (count == 0 && !isLastBreakFirst)
    {
        cout << "Array is Sorted but Not Rotated\n";
    }
    else if (count <= 1 && isLastBreakFirst)
    {
        cout << "Array is Sorted and Rotated\n";
    }
    else
        cout << "Array is Not Sorted and Rotated\n";
}
 
int main()
{
    int n = 3;
    int a[n] = {3,4,5,1,2};
    checkSortedAndRotated(a, n);
    return 0;
}