#include<iostream>
#include<vector>
using namespace std;
 bool checkPrimeFrequency(vector<int>& nums) {
        int count = 0;
        int n = nums.size();
        for(int i = 0;i<n; i++){
            count = 0;
            for(int j = 0;j<n;j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count>1){
                checkPrime(count);
            }
        }
        return false;
    }
   bool checkPrime(int x){
        for(int i=2;i<x/2;i++){
            if(x % i == 0){
                return false;
            }
        }
       return true;
    }
    int main(){
        vector<int>nums = {1,2,3,4,5,4};
        checkPrimeFrequency(nums);
    }