#include <iostream>
#include <vector>
using namespace std;

void Merge(vector<int> &a, int low , int mid , int high){
    vector<int> temp;

    int left = low;
    int right = mid  + 1;

    while (left <= mid && right <= high)
    {
        if(a[left] <= a[right]){
            temp.push_back(a[left]);
            left++;
        }
        else{
            temp.push_back(a[right]);
            right++;
        }
    }

    // If left half still has elements
    while (left <= mid) {
        temp.push_back(a[left]);
        left++;
    }

    // If right half still has elements
    while (right <= high) {
        temp.push_back(a[right]);
        right++;
    }

    for (int i = low; i <= high; i++)
    {
        a[i] = temp[i - low];
    }
}
int countPairs(vector<int> &a, int low , int mid , int high){
    int right = mid + 1;

    int count = 0; 
    for (int i = low ; i <= mid; i++)
    { 
        while (right <= high && a[i] > a[right] * 2)
        {
            right++;
        }   
        count += (right - (mid + 1));
    }
    return count;
}

int MergeSort(vector<int> &a, int low , int high){
    int count = 0;
    if(low >= high){
        return count;
    }
    int mid = (low + high ) / 2;

    count += MergeSort(a , low , mid); 

    count += MergeSort(a , mid + 1 , high);
    
    count += countPairs(a , low , mid , high);

    Merge(a , low , mid , high);

    return count;
}
int main() {
    int n;
    cin >> n;
    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int count = MergeSort(a, 0 , n - 1);

    cout << count;
    
    return 0;
}