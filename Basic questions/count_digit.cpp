#include<iostream>
using namespace std;
    int evenlyDivides(int n) {
        int count=0;
        int original = n;
        while(n>0){
            int digit = n%10;
            if( digit!=0 && original%digit==0 ){
                count++;
            }
            
             n = n/10;
        }
       
        return count;
    }
    int main(){
    cout << " " << evenlyDivides(13);
}