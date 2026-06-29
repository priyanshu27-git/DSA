#include <iostream>
using namespace std;

int Min(int a[], int low, int high){

    while (low < high)
    {
        int mid = (low + high) / 2;

        if(a[mid] > a[high]){
            low = mid + 1;
        }

        else{
            high = mid;
        }
    }  
    return a[low];
}    

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int ans = Min(a , 0 , n - 1);

    cout << ans;

    return 0;
}