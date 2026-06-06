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
    
    int currentsum = 0,  Maximum = 0;

    for (int i = 0; i < n; i++)
    {
        currentsum += a[i];

        if(Maximum < currentsum){
            Maximum = currentsum;
        }

        
        if(currentsum < 0 ){
            currentsum = 0;      
          }
    }
    
    cout << Maximum;
    return 0;
}