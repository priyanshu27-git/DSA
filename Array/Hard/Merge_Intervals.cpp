#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n; 
    cin >> n;
    vector<vector<int>> a(n , vector<int> (2));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }

    
    sort(a.begin(), a.end()); 


    vector<vector<int>> ans;
    

    for (int i = 0; i < a.size(); ++i) {
        if (ans.empty() || ans.back()[1] < a[i][0]) {// Non - Overlapping condition
        ans.push_back(a[i]);
        }
        else {
        ans.back()[1] = max(ans.back()[1], a[i][1]);// Overlapping condition
        }
   }

    for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
