#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    vector<int> ans;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int left = 0, right = n - 1;
        int curr = 0, Maxi = 0;

        while (left <= right)
        {
            if (s[left] == '#' && s[right] == '#')
            {
                curr++;
                left++;
                right--;
            }
            else
            {
                if (s[left] == '*' && s[right] == '*')
                {
                    left++;
                    right--;
                }
                else if (s[right] == '#') 
                {
                    right--;
                }
                else
                {
                    left++;
                }
            }

            if (Maxi < curr)
            {
                Maxi = curr;
            }
        }

        ans.push_back(Maxi);
    }

    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}


#include <iostream>
#include <string>
#include <vector>
#include <algorithm> 

using namespace std;

int main()
{
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    
    vector<int> ans; 

    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int Maxi = 0;
        int curr = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '#')
            {
                curr++;
            }
            else
            {
                
                if (curr > 0)
                {
                    int current_time = (curr + 1) / 2;
                    Maxi = max(Maxi, current_time);
                    curr = 0; 
                }
            }
        }

        
        if (curr > 0)
        {
            int current_time = (curr + 1) / 2;
            Maxi = max(Maxi, current_time);
        }

        ans.push_back(Maxi);
    }

    
    for (int i; i < ans.size(); i++)
    {
        cout << ans[i] << "\n";
    }

    return 0;
}