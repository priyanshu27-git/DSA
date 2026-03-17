#include <iostream>
using namespace std;

void findMaximum(int a[],int n){
    int Max = a[0];
    for (int i = 0; i < n; i++)
    {
        if(Max < a[i]){
            Max = a[i];
        }
    }
    cout << "Maximum Element = " << Max;
    
}
int main() {
    int n = 5;
    int a[n] = {3,3,2,6,1};
    findMaximum(a,n);
    return 0;
}