#include <iostream>
#include<vector>
using namespace std;

vector<int> Bessie(vector<int> &a){
    int n = a.size();

    for (int i = 0; i < a.size(); i++) {
        if(a[i] == 0 && a[i + 1] == 1){
            if (i >= 0 && i < a.size()) {
                a.erase(a.begin() + i);
                return a;
            }
        }
        else if(a[i] == 1 && a[i + 1] == 0){
            if (i + 1 >= 0 && i + 1 < a.size()) {
                a.erase(a.begin() + i + 1);
                return a;
            }
        }
        else if (a[i] == 0 && a[i + 1] == 0)
        {
            if (i >= 0 && i < a.size()) {
                a.erase(a.begin() + i);
                return a;
            }
        }
        else{
            while (i < a.size() && a[i] == 1){
                i++;
            }
            if(i < a.size()){
                if (i >= 0 && i < a.size()) {
                    a.erase(a.begin() + i);
                    return a;
            }
            }
        }
        
    }
    return a;
}

vector<int> Elsie(vector<int> &a){
    int n = a.size();

    for (int i = 0; i < a.size(); i++) {
        if(a[i] == 0 && a[i + 1] == 1){
             if (i + 1 >= 0 && i + 1 < a.size()) {
                a.erase(a.begin() + i + 1);
                return a;
            }
        }
        else if(a[i] == 1 && a[i + 1] == 0){
            if (i >= 0 && i < a.size()) {
                a.erase(a.begin() + i);
                return a;
            }
        }
        else if (a[i] == 1 && a[i + 1] == 1)
        {
            if (i >= 0 && i < a.size()) {
                a.erase(a.begin() + i);
                return a;
            }
        }
        else{
            while (i < a.size() && a[i] == 0){
                i++;
            }
            if(i < a.size()){
                if (i >= 0 && i < a.size()) {
                    a.erase(a.begin() + i);
                    return a;
            }
            }
        }
    }
    return a;

}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);

        for (int i = 0; i < a.size(); i++) {
            cin >> a[i];
        }

        while(true){
            if(a.size() == 1 && a[0] == 1){
                cout << "Bessie\n";
                break;
            }
            else if(a.size() == 1 && a[0] == 0){
                cout << "Elsie\n";
                break;
            }
            Bessie(a);
            if(a.size() == 1 && a[0] == 0){
                cout << "Elsie\n";
                break;
            }
            else if(a.size() == 1 && a[0] == 1){
                cout << "Bessie\n";
                break;
            }
            Elsie(a);
        }
        
    }
}


