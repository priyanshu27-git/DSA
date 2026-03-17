#include <iostream>
using namespace std;

int removeDuplicates(int a[], int n)
{
    if (n == 0)
        return 0;

    int i = 1;

    for (int j = 1; j < n; j++)
    {
        if (a[j] != a[i - 1])
        {
            a[i] = a[j];
            i++;
        }
    }

    //print array 
    for (int k = 0; k < i; k++)
    {
        cout << a[k] << " ";
    }

}
int main()
{
    int a[] = {1, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);
    removeDuplicates(a,n);
    return 0;
}