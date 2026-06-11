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

    int startrow = 0;
    int endrow = m - 1;
    int startcol = 0;
    int endcol = n - 1;

    int ans[m * n];
    int k = 0;

    while (startrow <= endrow && startcol <= endcol)
    {
        for (int i = startcol; i <= endcol; i++)// top row
        {
            ans[k++] = a[startrow][i];
        }
        startrow++;
        for (int i = startrow; i <= endrow; i++)
        {
            ans[k++] = a[i][endcol];
        }
        endcol--;

        if(startrow <= endrow){
            for (int i = endcol; i >= startcol; i--)
        {
            ans[k++] = a[endrow][i];
        }
        endrow--;
        }

        if(startcol <= endcol){
            for (int i = endrow; i >= startrow; i--)
        {
            ans[k++] = a[i][startcol];
        }
        startcol++;
        } 
    }

    for (int i = 0; i < k; i++)
    {
        cout << ans[i] << " ";
    }
    
    




    
    return 0;
}