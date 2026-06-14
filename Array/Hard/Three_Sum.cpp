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
    
    sort(a.begin(), a.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++)
    {
        if(i > 0 && a[i] == a[i - 1]){// check for duplicates 
            continue;
        }

        int left = i + 1, right = n - 1;

        while (left < right)
        {
            int sum = a[i] + a[left] + a[right];

            if(sum == 0){
                ans.push_back({a[i] , a[left] , a[right]});// insert direct into 2d array
                left++, right--;

                while (left < right && a[left] == a[left - 1]) left++;// if duplicates
                
                while (left < right && a[right] == a[right + 1]) right--;
            }
            else if(sum < 0) {// less than 0
                left++;
            }
            else{// more than 0
                right--;
            }
        }
    }

    for (int i = 0; i < ans.size(); i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    return 0;
}