#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; 
    int m;
    cin >> m;


    if(m == 1){
        cout << 1; return 0;
    }
    if(n == 1){
        cout << m; return 0;
    }

    int left = 1 , right = m; 
    while (left <= right)
    {
        int temp = n;
        long long mid = left + (right - left) / 2;

        long long ProductOfMid = mid;

        while (temp > 1)
        {
            ProductOfMid *= mid;
            if(ProductOfMid > m) break;
            temp--;
        }
        if(ProductOfMid == m){
            cout << mid;
            return 0;
        }
        else if(ProductOfMid > m){
            right = mid - 1;
        }
        else{ 
            left = mid + 1;
        }
    }
    cout << -1;
    return 0;
}