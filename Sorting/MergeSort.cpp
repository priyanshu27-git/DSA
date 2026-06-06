#include <iostream>
using namespace std;
void merge(int arr[], int left, int mid, int right) {
        int temp[right - left + 1];
        int i = left, j = mid + 1, k = 0;

        // Merge two sorted halves
        while (i <= mid && j <= right) {
            if (arr[i] <= arr[j]) temp[k++] = arr[i++];
            else temp[k++] = arr[j++];
        }

        // Copy remaining elements
        while (i <= mid) temp[k++] = arr[i++];
        while (j <= right) temp[k++] = arr[j++];

        // Copy back to original array
        for (int x = 0; x < k; x++) {
            arr[left + x] = temp[x];
        }
    }
 void mergeSort(int arr[], int left, int right) {
        if (left >= right) return;

        int mid = left + (right - left) / 2;

        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }

int main()
{
    int a[] = {3, 2, 4, 1, 6, 5};
    int n = sizeof(a) / sizeof(a[0]);
    int low = 0;
    int high = n-1;
    mergeSort(a,low,high);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}