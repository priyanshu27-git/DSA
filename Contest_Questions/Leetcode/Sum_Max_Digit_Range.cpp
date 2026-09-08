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

    int max_digit_range = -1;
        long long total_sum = 0; 
        
        for (int i = 0; i < n; i++) {
            string s = to_string(abs((long long)a[i])); 
            char min_d = '9';
            char max_d = '0';
            
            for (int j = 0; j < s.length(); j++) {
                if (s[j] < min_d) min_d = s[j];
                if (s[j] > max_d) max_d = s[j];
            }
            
            int current_range = (max_d - '0') - (min_d - '0');
            
            if (current_range > max_digit_range) {
                max_digit_range = current_range;
                total_sum = a[i];
            } else if (current_range == max_digit_range) {
                total_sum += a[i];
            }
        }
        cout << total_sum;
    
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <string>
// #include <algorithm>

// using namespace std;

// class Solution {
// public:
//     int sumOfMaxDigitRange(vector<int>& a) {
//         vector<int> digit_ranges;
        
//         for (int i = 0; i < a.size(); i++) {
//             string s = to_string(abs((long long)a[i]));
//             char min = '9';
//             char max = '0';
            
//             for (int j = 0; j < s.length(); j++) {
//                 if (s[j] < min) min = s[j];
//                 if (s[j] > max) max = s[j];
//             }
            
//             int current_range = (max - '0') - (min - '0');
//             digit_ranges.push_back(current_range);
//         }
        
//         int max_digit_range = -1;
//         for (int i = 0; i < digit_ranges.size(); i++) {
//             if (digit_ranges[i] > max_digit_range) {
//                 max_digit_range = digit_ranges[i];
//             }
//         }
        
//         int sum = 0;
//         for (int i = 0; i < a.size(); i++) {
//             if (digit_ranges[i] == max_digit_range) {
//                 sum += a[i];
//             }
//         }
        
//         return sum;
//     }
// };