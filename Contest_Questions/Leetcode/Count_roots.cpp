#include <iostream>
#include <cmath>
using namespace std;

int main() {
    long long l,r;
    int k;
    cin >> l >> r >> k;
    long long count = 0;
    int x = 0;

    if (k == 1) {
        cout << (r - l + 1) ;
        return 0;
    }

    for (long long i = 0; i < r; i++)
    {
        if(pow(x,k) <= r && pow(x,k) >= l){
            x++;
            count++;
        }
        else if(pow(x,k) <= r){
            x++;
        }
        else{
            break;
        }
    }
    cout << count;
    // cout << pow(x , k);
    
    return 0;
}