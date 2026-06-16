#include <iostream>
using namespace std;

int main() {
    int a1[] = {1,2,3,0,0,0};
    int m = 3;
    int a2[] = {2,5,6};
    int n = 3;

    int left = m - 1, right = n - 1;

    int end = m + n - 1;

    if(m + n == 1){
        if(m == 1){
            cout << a1[0];
            return 0;
        }
        else{
            cout << a2[0];
            return 0;
        }
    }

    while(end >= 0){
        if(left >= 0 && a1[left] >= a2[right]){
            a1[end] = a1[left];
            left--;
            end--;
        }
        else{
            a1[end] = a2[right]; 
            end--;
            right--;
        }
        if(right < 0) break;
    }
    
    for (int i = 0; i < m + n; i++)
    {
        cout << a1[i] << " ";
    }
    
    return 0;
}