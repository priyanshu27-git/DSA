#include <iostream>
using namespace std;

void rotateArray(int a[], int n){
    int first = a[0];

    for (int i = 1; i < n; i++)
    {
        a[i-1] = a[i];
    }
    a[n-1] = first;
    // print array 
    for (int j = 0; j < n; j++)
    {
        cout << a[j] << " ";
    }
    
}
int main() {
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(a)/sizeof(a[0]);
    rotateArray(a,n);
    return 0;
}