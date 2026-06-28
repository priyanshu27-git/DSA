#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {  
        cin >> a[i];
    }
    
    int start = 1;
    int end = 1;

    int Maximum = a[0];

    for (int i = 0; i < n; i++)
    {
        if(start == 0) start = 1;

        if(end == 0) end = 1;

        start *= a[i];

        end *= a[n - i - 1];

        Maximum = max(Maximum , max(start, end));
    }
    
    cout << Maximum;
    
    return 0;
}