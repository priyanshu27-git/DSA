#include <iostream>
using namespace std;


int productOfDigits(int num){
        int product = 1;

        while(num){
            product *= num % 10;
            num /= 10;
        }

        return product;
    }

    int smallestNumber(int n, int t) {
        while(productOfDigits(n) % t != 0)
            n++;

        return n;
    }
int main() {
    int n , t;
    cin >> n >> t;
    cout << smallestNumber(n , t);
    return 0;
}
    