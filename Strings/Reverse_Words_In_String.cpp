#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin , s);

        for (int i = 0; i < s.size(); i++) { // checking if there no spaces in string
                if (s[i] == ' ') {
                    break;
                }
                if (i == s.size() - 1 && s[i] != ' '){
                    cout << s;
                    return 0;
                }
            }
        string newstr = "";

        for (int i = s.size() - 2; i >= 0; i--) {
            if (s[i] == ' ' && s[i + 1] != ' ') {
                int j = i + 1;

                if (newstr.size() > 0)
                    newstr.push_back(' ');

                while (j < s.size() && s[j] != ' ') {
                    newstr.push_back(s[j]);
                    j++;
                }
            }
        }
        if (s[0] != ' ') {
            int j = 0;
            if (!newstr.empty()) { // Checking if original s contains only one word
                newstr.push_back(' ');
            }
            while (s[j] != ' ') {
                newstr.push_back(s[j]);
                j++;
            }
        }
        
        cout << newstr;
    
    return 0;
}


