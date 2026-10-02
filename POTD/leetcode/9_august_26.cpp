#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        // Sort both array in descending order
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());
        
        double total_sum = 0.0;
        int num_discounts = discounts.size();
        int num_prices = prices.size();
        
        for (int i = 0; i < num_prices; ++i) {
            if (i < num_discounts) {
                total_sum += prices[i] * (100.0 - discounts[i]) / 100.0;
            } else {
                total_sum += prices[i];
            }
        }
        
        return total_sum;
    }
};