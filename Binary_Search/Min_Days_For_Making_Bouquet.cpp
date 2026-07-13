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

    int m , k;
    cin >> m >> k;
    int Maxi = a[0];
    int Mini = a[0];
    for (int i = 0; i < n; i++)
    {
        Maxi = max(Maxi , a[i]);
        Mini = min(Mini , a[i]);
    }
    
    int low = Mini , high = Maxi;

    if(n < (m * k)){
        cout << -1;
        return 0;
    }
    
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int count = 0 , count_days = 0;
        for (int i = 0; i < n; i++)
        {
            if(a[i] <= mid){
                count++;
            }
            else{
                count_days += count / k;
                count = 0;
            }
        }
        count_days += count / k;
        
        if(count_days >= m){
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    cout << low;
    
    
    return 0;
}