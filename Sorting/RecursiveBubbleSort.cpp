#include<iostream>
#include <algorithm>
using namespace std;
void recursiveBubble(int a[],int n){
    if(n == 1){
        return;
    }
    for (int j = 0; j < n-1; j++)
    {
        if(a[j] > a[j+1])
        {
            swap(a[j],a[j+1]);
        }
    }
    recursiveBubble(a,n-1);
    
}
int main(){
    int a[] = {3,45,2,4,1,7};
    int n = sizeof(a) / sizeof(a[0]);
    recursiveBubble(a,n);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}