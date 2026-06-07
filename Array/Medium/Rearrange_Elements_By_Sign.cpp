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

    int ans[n];
    int even = 0, odd = 1;

    for (int i = 0; i < n; i++)
    {
        if(a[i] > 0){
            ans[even] = a[i];
            even = even + 2;
        }
        else{
            ans[odd] = a[i];
            odd = odd + 2;
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    return 0;
}