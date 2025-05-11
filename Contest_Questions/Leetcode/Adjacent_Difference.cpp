#include <iostream>
using namespace std;

int main() {
    string s;
    cin >> s;
    int left = 0, right = 1;
    while(right < s.size()){
        if(abs(s[right] - s[left]) > 2){
            return false;
        }
        else{
            left++;
            right++;
        }
    }
    return true;
}