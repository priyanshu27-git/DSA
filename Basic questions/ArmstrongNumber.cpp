#include<iostream>
using namespace std;
void Armstrong(int n){
    int count = 0,temp = n;
    while(temp > 0){
        int digits = temp % 10;
        count++;
        temp/=10;
    }
    int temp2 = n,sum=0;
    while(temp2 > 0){
        int pow = 1;
        int digits = temp2 % 10;
        for (int i = 0; i < count; i++)
        {
            pow = pow * digits;
        }
        sum += pow;
        temp2 /= 10;
    }
    cout << sum;
}
int main(){
    int n = 153;
    Armstrong(n);
}