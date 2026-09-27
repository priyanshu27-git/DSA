#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;

    int n = s.size();

    for (int i = n - 1; i >= 0; i--)
    {
        int curr = s[i] - '0';
        if(curr % 2 != 0){
            cout << s.substr(0 , i + 1);
            return 0;
        }
    }
    
    return 0;
}