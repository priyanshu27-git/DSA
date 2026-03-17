#include <iostream>
using namespace std;

void findMissingNum(int a[], int size, int n)
{
    int totalSum = (n * (n + 1)) / 2;
    int arrSum = 0;
    for (int i = 0; i < size; i++)
    {
        arrSum += a[i];
    }
    cout << totalSum - arrSum;
}
int main()
{
    int a[] = {1, 2, 4, 5};
    int length = sizeof(a) / sizeof(a[0]);
    int n = a[length-1];
    findMissingNum(a, length, n);
    return 0;
}