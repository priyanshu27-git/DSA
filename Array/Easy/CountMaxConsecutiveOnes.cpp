#include <iostream>
using namespace std;

void findMaxOnes(int a[], int n)
{
    int Max = 0, currentOnes = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            currentOnes++;
        }
        else
        {
            currentOnes = 0;
        }
        if (Max < currentOnes)
        {
            Max = currentOnes;
        }
    }
    cout << "Maximum consecuitve Ones = " << Max;
}
int main()
{
    int a[] = {1, 1, 0, 1, 1, 1};
    int length = sizeof(a) / sizeof(a[0]);
    findMaxOnes(a,length);
    return 0;
}