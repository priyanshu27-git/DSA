// #include <iostream>
// using namespace std;

// int main() {
//     int t;
//     cin >> t;
//     while(t--){
//         int a , b, c;
//         cin >> a >> b >> c;
//         int ans = 0;
//         int Maxi = a;
//         int Mini = a;
//         while(true){
//             if(a == b || b == c || a == c){
//                 cout << ans << "\n";
//                 break;
//             } 

//             if(a >= b && a >= c){ // Max
//                 a--;
//             }
//             else if(b >= a && b >= c){
//                 b--;
//             }
//             else{
//                 c--;
//             }

//             if(a <= b && a <= c){ // Min
//                 a++;
//             }
//             else if(b <= a && b <= c){
//                 b++;
//             }
//             else{
//                 c++;
//             }


//             ans++;

//         }
        
//     }
//     return 0;
// }
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve() {
    int n;
    cin >> n;
    string s;
    cin >> s;

    int total_blocks = 1;
    int max_saved = 0;

    for (int i = 1; i < n; ++i) {
        if (s[i] != s[i - 1]) {
            total_blocks++;
        }
        
        // Evaluate impact of deleting s[i] when valid (1 <= i <= n-2)
        if (i < n - 1 && s[i] != s[i - 1] && s[i] != s[i + 1]) {
            max_saved = max(max_saved, (s[i - 1] == s[i + 1]) ? 2 : 1);
        }
    }

    cout << total_blocks - max_saved << "\n";
}

int main() {
    // Fast I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}