#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    for(int i=0; i<n;i++)
    {
        for(int x=0;x<n-i-1;x++){
        cout << " " ;
        }
        for(int y=0;y<2*i+1;y++){
            cout << "*" ;
            }
        for(int z=0;z<n-i-1;z++){
                cout << " " ;
        }
        cout << endl;
    }
    for(int i=n-1; i>=0;i--)
    {

        for(int x=0;x<n-i-1;x++){
        cout << " " ;
        }
        for(int y=0;y<2*i+1;y++){
            cout << "*" ;
            }
        for(int z=0;z<n-i-1;z++){
                cout << " " ;
        }
        cout << endl;
    }
}