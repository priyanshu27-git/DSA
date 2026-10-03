#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
    string ans = "";
    int opened = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            if (opened > 0)
            {
                ans.push_back(s[i]);
            }
            opened++;
        }
        else
        {
            opened--;
            if (opened > 0)
            {
                ans.push_back(s[i]);
            }
        }
    }
    cout << ans;

    return 0;
}