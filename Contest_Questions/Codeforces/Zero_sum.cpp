#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    int initial_sum = 0;
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        initial_sum += a[i];
    }
    
    if (n % 2 == 0 && initial_sum % 4 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


#include <iostream>
#include <vector>

using namespace std;

void solve() {
    long long n, k, m;
    cin >> n >> k >> m;

    
    if (k > m) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";
    
    
    for (int i = 1; i <= n; i++) {
        long long prev_P = (i - 1) % k;
        long long curr_P = i % k;
        
        
        long long val = (curr_P - prev_P + m) % m;
        
        
        if (val == 0) {
            val = m;
        }
        
        cout << val << (i == n ? "" : " ");
    }
    cout << "\n";
}

int main() {
    
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    
    return 0;
}