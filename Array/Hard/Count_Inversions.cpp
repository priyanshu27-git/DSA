#include <iostream>
#include <vector>
using namespace std;


int Merge(vector<int> &a, int low , int mid , int high){
    vector<int> temp;

    int left = low;
    int right = mid+1;
    
    int count = 0;
    while (left <= mid && right <= high) 
    {
        if(a[left] <= a[right]){
            temp.push_back(a[left]);
            left++; 
        }
        else{
            temp.push_back(a[right]);
            count += (mid - left + 1);
            right++;
        }
    }
    
     while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }

    // If right half still has elements
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }

    for (int i = low; i <= high; i++) {
        a[i] = temp[i - low];
    }

    return count;
}

int MergeSort(vector<int> &a, int low, int high){
    int count = 0;
    if(low >= high){
        return count;
    }
  
    int mid = low + (high - low) / 2;

    count +=  MergeSort(a, low , mid);

    count += MergeSort(a, mid + 1, high);
    
    count +=  Merge(a, low , mid , high);
    
    return count;
}

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int low = 0 , high = n - 1;
    
    int count = MergeSort(a , low , high);

    cout << count;

    return 0;
}
