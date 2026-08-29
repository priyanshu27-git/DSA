#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        int sum = a[0];
        for (int i = 1; i < n; i++)
        {
            while(i < n && a[i] == a[i-1]){
                int temp = i;
                int j = temp + 1;
                while(j < n && a[temp] != a[j]){
                    
                }
                j++;
                i++;
                // break;
            }
            sum += a[i];
        }
        cout << sum << "\n";
    }

    return 0;
}