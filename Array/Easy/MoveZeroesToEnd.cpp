#include <iostream>
using namespace std;


void movezeroes(int a[], int n){// Moving non-zeroes to the left
    int left = 0;

    for (int right = 0; right < n; right++)
    {
        if(a[right] != 0){
            swap(a[right], a[left++]);
            // left++;
        }
    }
    // Print array 
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    
}
int main() {
    int a[] = {0,1,0,2,3,4,5};
    int n  = sizeof(a)/sizeof(a[0]);
    movezeroes(a,n);
    return 0;
}