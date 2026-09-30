#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int val1 = 0 , val2 = 0 , x  = 0 , y  = 0;
    int maxVal1 = a[0] , maxVal2 = a[0];
    int val1_idx = 2 , val2_idx = 3;
    while (val1_idx < n)// finding y (1 index)
    {
        if(val1_idx < n && a[val1_idx] == a[val1_idx - 2]){
            maxVal1 = max(maxVal1 , a[val1_idx]);
        }
        val1_idx += 2;
    }

    while (val2_idx < n)// finding y (2 index)
    {
        if(val2_idx < n && a[val2_idx] == a[val2_idx - 2]){
            maxVal2 = max(maxVal2 , a[val2_idx]);
        }
        val2_idx += 2;
    }

    cout << maxVal2;

    
    
    return 0;
}