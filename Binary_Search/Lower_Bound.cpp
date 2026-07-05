#include <iostream>
using namespace std;

int LowerBound(int a[] , int n , int Target, int low , int high){

    int ans = n;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        if(a[mid] >= Target){
            ans = mid;
            high = mid - 1;
        }
        
        else{
            low = mid + 1;
        }   
    }
    return ans;


    // while (low <= high)
    // {
    //     int mid = (low + high) / 2;
    //     if(Target <= a[mid]){
    //         if(mid - 1 >= 0 && a[mid - 1] >= Target){
    //             high = mid  - 1;
    //         }
    //         else
    //             return mid;
    //     }

    //     if(a[mid] < Target){
    //         low = mid + 1;
    //     }
    //     else{
    //         high = mid - 1;
    //     }
    // }
    // return n;
}
int main() {
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int Target;
    cin >> Target;

    int ans = LowerBound(a, n , Target , 0 , n - 1);

    cout << ans;
    return 0;
}