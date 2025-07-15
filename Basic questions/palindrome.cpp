#include<iostream>
using namespace std;
bool isPalindrome(int x) 
{
    int ans=0,temp = x;
    while(temp != 0){
    int digit = temp % 10;
    ans = ans * 10 + digit;
    temp = temp/10;
}
if(ans == x)
return true;
else 
return false;
}
int main()
{
     cout << isPalindrome(-121);
}