#include<iostream>
#include<string>
#include<cctype>
#include<algorithm>
using namespace std;
class solution{
    public:
    bool isCapi(char c){
        return c>='A' && c<='Z';
    }
    bool isSmall(char c){
        return c>='a' && c<='z';
    }
void casesort(string &s){
    string ans = s;
    string capi = "";
    string small = "";

    for (int i = 0; i < s.size(); i++)
    {
        if(isCapi(s[i])){
            capi += s[i];
        }
        else if(isSmall(s[i])){
            small += s[i];
        }
    }

    sort(capi.begin(),capi.end());
    sort(small.begin(),small.end());
    int j=0,k=0;
    string res = "";
    for (int i = 0; i < ans.size(); i++)
    {
        if(j < capi.size() && isCapi(ans[i])){
            res += capi[j++];
        }
        else if(k < small.size() && isSmall(ans[i])){
            res += small[k++];
        }
    }
    cout << res;
}
};
int main(){
    solution obj;
    string s = "GEekS";
    obj.casesort(s);
}