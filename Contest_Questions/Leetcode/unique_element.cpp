#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    int mid = n / 2;
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if(mid == a[i]){
            count++;
        }
        if(count > 1){
            cout << "false";
            return 0;
        }
    }

    cout << "true";
    return 0;
}
