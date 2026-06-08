#include <iostream>
#include <algorithm>
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
    int count = 0;
    int max = n - 1;

    if(n == 1){
        cout << a[0];
        return 0;
    }
   
    ans[count++] = a[max];
    for (int i = n - 2; i >= 0; i--)
    {
        if(a[i] > a[max]){
            max = i;
            ans[count++] = a[i];
        }
    }
    
    reverse(ans , ans + count);
    for (int i = 0; i < count; i++)
    {
        cout << ans[i] << " " ;
    }
    
    
    return 0;
}