#include <iostream>
using namespace std;
int main()
{
    int n,j;
    cin >> n;
    int temp=1;
    for (int i = 1; i <= n; i++)
    {
        for ( j = 1; j <= i; j++)
        {
            cout << temp;
            temp++;
        }
        //temp=temp;
        cout << endl;
    }
}