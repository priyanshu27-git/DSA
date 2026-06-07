#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < a.size(); i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;
    unordered_map<int,int> hashmap;


    for (int i = 0; i < a.size(); i++)
    {
        int complement = target - a[i];
        if(hashmap.count(complement) && hashmap[complement] != i){
            cout << i << " " << hashmap[complement];
            break;
        }
        hashmap[a[i]] = i;
    }
    return 0;
}