#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    n = 9;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int pivot = 0;
    int right = 0;
    for (int i = n - 1; i > 0; i--)
    {
        if(a[i] > a[i-1]){
            pivot = i-1;
            right = i;
            if(pivot == n - 2){
                swap(a[pivot] , a[n-1]);
                break;
            }

            while (right <= n - 1 && a[right] > a[pivot])
            {
                right++;
            }
            right--;
            swap(a[pivot], a[right]);

            reverse(a + pivot + 1, a + n);
            break;  
        }
        else if(i == 1 && a[i] < a[i-1]){
            sort(a , a + n);
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
    
    
    return 0;
}