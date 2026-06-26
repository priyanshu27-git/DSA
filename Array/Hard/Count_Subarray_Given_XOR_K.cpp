#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
 
    int k;
    cin >> k;  

    int XR = 0, X = 0;
    int count = 0;

    unordered_map<int,int> map;
    map[0] = 1;

    for (int i = 0; i < n; i++)
    {
        XR ^= a[i];

        X = XR ^ k;

        if(map.find(X) != map.end()){
            count += map[X];
        }

        map[XR]++; 
    }
    
    cout << count;
    
    
    return 0;
}