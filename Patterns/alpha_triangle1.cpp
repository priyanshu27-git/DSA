#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    char temp;
    char ch = 'A' + (n-1);
    for (int i = 1; i <= n; i++)
    {
        for (char j = 1; j <= i; j++)
        {
            cout << ch;
            temp=ch;
            ch++;
        }
        temp= temp-i;
        ch=temp;
        cout << endl;
    }
}