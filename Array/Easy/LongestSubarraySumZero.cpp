#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    unordered_map<long long, int> prefixSumMap;
    long long sum = 0;
    int Maximum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += a[i];

        if(sum == 0){
            Maximum = i + 1;
        }

        if(prefixSumMap.find(sum) != prefixSumMap.end()){
            Maximum = max(Maximum , i - prefixSumMap[sum]);
        }

        if(prefixSumMap.find(sum) == prefixSumMap.end()){
            prefixSumMap[sum] = i;
        }
    }
   
    cout << Maximum;
    
    
    return 0;
}