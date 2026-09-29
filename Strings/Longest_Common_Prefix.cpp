#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> strs;
    for (int i = 0; i < strs.size(); i++)
    {
        cin >> strs[i];
    }

    string newstr = "";
    for (int i = 0; i < strs[0].size(); i++)
    {
        char c = strs[0][i];

        for (int j = 1; j < strs.size(); j++)
        {
            if (i >= strs[j].size() || strs[j][i] != c)
            {
                for (int k = 0; k < i; k++)
                {
                    newstr += strs[0][k];
                }
                cout << newstr;
                break;
            }
        }
    }
    return 0;
}