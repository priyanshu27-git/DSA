#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    string s, t;
    cin >> s >> t;

    unordered_map<char, char> mapST, mapTS;
    for (int i = 0; i < s.size(); i++)
    {
        char cs = s[i], ct = t[i];
        if (mapST.count(cs) && mapST[cs] != ct)
            cout << "False"; return 0;
        if (mapTS.count(ct) && mapTS[ct] != cs)
            cout << "False"; return 0;

        mapST[cs] = ct;
        mapTS[ct] = cs;
    }
    cout << "True";
    return 0;
}