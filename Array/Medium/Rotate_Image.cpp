#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1 , 2 , 3},
        {4 , 5 , 6},
        {7 , 8 , 9}
    };
    
        int row = 3;
        int col = 3;
        // transpose The Matrix
        for (int i = 0; i < 3; i++) {
            for (int j = i; j < 3; j++) {
                swap(a[j][i], a[i][j]);
            }
        }
        // Now swap 1st and last column
        for (int i = 0; i < 3; i++) {
            int left = 0, right = 3 - 1;
            while (left < right) {
                swap(a[i][left] , a[i][right]);
                left++;
                right--;
            }
        }

         for (int i = 0; i < 3; i++) {
             for (int j = 0; j < 3; j++) {
                  cout << a[i][j] << " ";
            }
            cout << " \n";
        }
    return 0;
}