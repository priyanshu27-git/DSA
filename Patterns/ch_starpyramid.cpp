#include<iostream>
using namespace std;
int main()
{
    int n;
    cin >>n;
    int i;
    for( i=0; i<n;i++)
    {
        for(int x=0;x<n-i-1;x++){
        cout << " " ;
        }
        char ch= 'A';
        int breakpoint = ((2*i)+1)/2;
        for(int  y=1;y<=2*i+1;y++){
            cout << ch;
            if(y <=breakpoint)
            ch++;
            else ch--; 
            }
        for(int z=0;z<n-i-1;z++){
                cout << " " ;
        }
        cout << endl;
    }
}