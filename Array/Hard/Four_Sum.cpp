#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k;
    cin >> k;

    sort(a.begin(), a.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if(i > 0 && a[i] == a[i - 1])// check for duplicates
        {
            continue;
        }

        for (int j = i+1; j < n; j++)
        {
            if(j > i + 1 && a[j] == a[j - 1])// check for duplicates
            { 
                continue;
            }
            int left = j + 1, right = n - 1;

            while (left < right)
            {
            long long sum = (long long) a[i] + a[j] + a[left] + a[right];

            if(sum == k){
                ans.push_back({a[i] , a[j] , a[left] , a[right]});// insert direct into 2d array
                left++, right--;

                while (left < right && a[left] == a[left - 1]) left++;// if duplicates
                
                while (left < right && a[right] == a[right + 1]) right--;
            }
            else if(sum < k) {// less than k
                left++;
            }
            else{// more than k
                right--;
            }
        }
    }
}

    for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < 4; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    return 0;
}