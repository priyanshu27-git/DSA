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
    int curr = 0;
    int Maximum = 0;

    int left = 0, right = 1;


   while (right < n){
    if(a[left] < a[right]){
        Maximum = max(Maximum , a[right] - a[left]);
        right++;
    }
    else{
        if(right == n - 1){
            break;
        }
        left = right;
        right++;
    }
   }

   cout << Maximum;
   

    
    return 0;
}