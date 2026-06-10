#include <iostream>
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
    int windowSum = 0;
    int curr = 0, Max = 0 , index = 0;

    for (int i = 0; i < n; i++)
    {
        windowSum += a[i];

        if(windowSum < 0){
            windowSum = 0;
            continue;
        }
        if(windowSum <= k){
            curr++;
            if(windowSum == k && Max < curr){
                Max = curr;
            }
        }
        else{
            windowSum -= a[index++];
            if( windowSum == k && Max < curr){
                Max = curr;
            }
        }
    }

    cout << Max;
    
    return 0;
}