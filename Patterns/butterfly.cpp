#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int space= (n*2)-2;
    for(int i=0;i<n;i++)
    {
    for(int j=0;j<=i;j++ )//star
    {
    cout << "*";
    }
    for(int j=0;j<space;j++)//space
    {
        cout << " ";
    }
    for(int j=0;j<=i;j++)//star
    {
    cout << "*";
    }
    space -=2;
    cout << endl;
}
 space +=4;
 n-=2;
for(int i=n;i>=0;i--)
    {
    for(int j=0;j<=i;j++)//star
    {
    cout << "*";
    }
    for(int j=0;j<space;j++)//space
    {
        cout << " ";
    }
    for(int j=0;j<=i;j++)//star
    {
    cout << "*";
    }
    space +=2;
    cout << endl;
}
}