#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    vector<int> counts(101, 0);
    int maxVal = 0;

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        counts[a[i]]++;
        maxVal = max(maxVal, a[i]);
    }

    vector<int> ans;

    while (ans.size() < n) {

        vector<int> current_round;
        for (int v = 1; v <= 100; v++) {
            if (counts[v] > 0) {
                current_round.push_back(v);
                counts[v]--;
            }
        }

        // add last element to first 
        ans.push_back(current_round.back());

        for (int i = 0; i < current_round.size() - 1; i++) {
            ans.push_back(current_round[i]);
        }
    }

    for (int i = 0; i < n; i++) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}