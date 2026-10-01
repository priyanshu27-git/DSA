#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int counts[100] = {0};
    int c = 0;

    for(int i : a){
        counts[i]++;
    }

    int maxi = a[0];
    for (int i = 0; i < n; i++) {
        maxi = max(a[i] , maxi);
    }

    int ans[n];
    while(true){
        for (int i = 1; i <= maxi; i++)
        {
            if(counts[i] > 0){
                ans[c++] = i;
                counts[i]--;
            }
        }
        if(c == n) break;
    }

    for (int i = 0; i < c; i++) {
        cout << ans[i];
    }

    return 0;
}