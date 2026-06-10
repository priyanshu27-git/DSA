#include <iostream>
using namespace std;

int main() {
    int a[3][3] = {
        {1 , 1 , 1},
        {1 , 0 , 1},
        {1 , 1 , 1}
    };

    int row[3];
    int col[3];

    for (int i = 0; i < 3; i++)
    {
        row[i] = false;
    }
    for (int i = 0; i < 3; i++)
    {
        col[i] = false;
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(a[i][j] == 0){
                row[i] = true;
                col[j] = true;
            }
        } 
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if(row[i] || col[j]){
                a[i][j] = 0;
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << a[i][j] << " " ;
        }
        cout << "\n";
    }
    
    return 0;
}