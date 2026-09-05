#include <iostream>
#include <string>

using namespace std;

const int MOD = 998244353;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    bool odd_start_0 = true, odd_start_1 = true;
    for (int i = 0; i < n; i += 2) {
        char target_0 = ((i / 2) % 2 == 0) ? '0' : '1';
        char target_1 = ((i / 2) % 2 == 0) ? '1' : '0';

        if (s[i] != '?') {
            if (s[i] != target_0) odd_start_0 = false;
            if (s[i] != target_1) odd_start_1 = false;
        }
    }

    bool even_start_0 = true, even_start_1 = true;
    for (int i = 1; i < n; i += 2) {
        char target_0 = (((i - 1) / 2) % 2 == 0) ? '0' : '1';
        char target_1 = (((i - 1) / 2) % 2 == 0) ? '1' : '0';

        if (s[i] != '?') {
            if (s[i] != target_0) even_start_0 = false;
            if (s[i] != target_1) even_start_1 = false;
        }
    }

    long long odd_ways = odd_start_0 + odd_start_1;
    long long even_ways = even_start_0 + even_start_1;

    cout << (odd_ways * even_ways) % MOD << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}