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
    
    int cnt1 = 0, cnt2 = 0;

    int el1 = INT32_MIN, el2 = INT32_MIN;

    for (int i = 0; i < n; i++)
    {
        if(cnt1 == 0 && el2 != a[i])// el1 is ready to get new element 
        {
            cnt1++;
            el1 = a[i];
        }
        else if (cnt2 == 0 && el1 != a[i])// el2 is ready to get new element 
        {
            cnt2++;
            el2 = a[i];
        }
        else if(a[i] == el1){// if found same count++
            cnt1++;
        }
        else if(a[i] == el2){// if found same count++
            cnt2++;
        }
        else{
            cnt1--;
            cnt2--;
        }
    }

    cnt1 = 0, cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if(a[i] == el1)// checking frequency of el1
        {
            cnt1++;
        }
        if (a[i] == el2)// checking frequency of el2
        {
            cnt2++;
        }
    }

    int target = n / 3;
    int ans[2];

    int k = 0;

    if(cnt1 > target){
        ans[k++] = el1;
    }
    if(cnt2 > target && el1 != el2){
        ans[k++] = el2;
    }
    
    // Printing answer
    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    
    
    return 0;
}