#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> runs;
    int current_len = 0;
    for (int i = 0; i < n; i++) {
        current_len++;
        if (i == n - 1 || a[i] != a[i + 1]) {
            runs.push_back({a[i], current_len});
            current_len = 0;
        }
    }

    int m = runs.size();
    int base_len = m;
    int max_gain = 0;

    for (int i = 0; i < m; i++) {
        if (runs[i].second >= 2 && m > 1) {
            max_gain = max(max_gain, 1);
        }
    }

    for (int i = 0; i < m - 1; i++) {
        if (runs[i].second >= 2 && runs[i + 1].second >= 2) {
            max_gain = max(max_gain, 2);
        }
    }

    for (int i = 0; i < m - 2; i++) {
        if (runs[i].first == runs[i + 2].first) {
            if (runs[i].second >= 2 || runs[i + 2].second >= 2 || runs[i + 1].second >= 2) {
                max_gain = max(max_gain, 1);
            }
            if ((runs[i].second >= 2 && runs[i + 1].second >= 2) || 
                (runs[i + 1].second >= 2 && runs[i + 2].second >= 2) ||
                (runs[i].second >= 2 && runs[i + 2].second >= 2)) {
                max_gain = max(max_gain, 2);
            }
        }
    }

    cout << base_len + max_gain << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int TestsNumT;
    cin >> TestsNumT;
    while (TestsNumT--) {
        solve();
    }

    return 0;
}