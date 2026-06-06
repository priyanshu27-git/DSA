#include<iostream>
using namespace std;
void insertionSort(int a[],int n){
    for (int i = 1; i < n; i++)
    {
        int key = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > key){
            a[j+1] = a[j];
            j = j-1;
            a[j+1] = key;
        }
    }
    // print sorted array
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main(){
    int a[] = {4, 3, 5, 1, 2};
     int n = sizeof(a) / sizeof(a[0]);
    insertionSort(a,n);
}