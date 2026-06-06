#include <iostream>
using namespace std;
void BubbleSort(int a[],int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    // print sorted array 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}
int main()
{
    int a[] = {4, 3, 5, 1, 2};
    int n = sizeof(a) / sizeof(a[0]);
    BubbleSort(a, n);
}