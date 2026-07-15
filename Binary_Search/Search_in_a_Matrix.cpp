#include <iostream>
using namespace std;

int main() {
    int m , n;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int Target;
    cin >> Target;

    int size = (m * n) - 1;

    int low = 0 , high = size;

    while (low <= high)
    {
        int mid = (low + high) / 2;

        int row = mid / n;
        int col = mid % n;

        if(a[row][col] == Target){
            cout << "True";  // Found Target 
            return 0;
        }

        if(a[row][col] > Target){
            high = mid - 1;
        }   
        else{
            low = mid + 1;
        }
    }

    cout << "False"; // if not found
    
    return 0;
}