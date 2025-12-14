#include<bits/stdc++.h>
using namespace std;
 int print(int n){
    if(n == 0){
        return -1;
    }
    cout << n;
    return print(n-1);
 }
int main(){
    int n = 5;
    print(n);
}