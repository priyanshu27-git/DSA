#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pair<int,int> p= {2,3};
    // cout << p.first << " " << p.second;
    // pair<int,pair<int,int>> p={2,{5,3}};
    // cout << p.second.first;
    //     pair<int,int> p[]={{1,2},{3,4},{5,6}};
    //     cout << p[1].first;
    //   vector<int> v;
    //   v.push_back(1);
    //   v.emplace_back(2);
    vector<int> vec(5, 2);
    vec.emplace_back(7);
    for (int element : vec){
        cout << element << " ";
    } 
}
