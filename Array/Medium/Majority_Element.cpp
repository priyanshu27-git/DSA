#include <iostream>
#include <algorithm>
using namespace std;

// MOORE VOTING ALGORITHM
int main() {
    int n;
    cin >> n;
    int a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

   int count = 0;
   int candidate = 0;

   for (int i = 0; i < n; i++)
   {
     if(count == 0){
        candidate = a[i];
     }

     if(candidate == a[i]){
        count++;
     }
     else{
        count--;
     }
   }

   cout << candidate;
   


    return 0;
}