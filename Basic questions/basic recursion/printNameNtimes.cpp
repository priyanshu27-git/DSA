#include<iostream>
using namespace std;
void printName(int n){
    if(n == 0){
        return;
    }
    cout << "Priyanshu" << endl;
    printName(n-1);
}
int main(){
    int n = 10;
    printName(n);
}