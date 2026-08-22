#include <iostream>
#include <algorithm>
using namespace std;

int count_students(int a[], long long barrier, int m , int n)
{
    long long allocated_students = 1 , pages = 0;
    for (int i = 0; i < n; i++)
    {
        if(pages + a[i] <= barrier){
            pages += a[i];
        }
        else{
            pages = a[i];
            allocated_students += 1;
        }
    }
     
    return allocated_students;
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int m;
    cin >> m;

    if(m > n) {
        cout << -1;
        return 0;
    }

    long long sum = 0;
    int Maxi = a[0];
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
        Maxi = max(Maxi , a[i]);
    }
    

    long long low = Maxi, high = sum;

    while (low <= high)
    {
        long long mid = (low + high) / 2;

        int students = count_students(a, mid, m , n);

        if (students < m)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << low;

    return 0;
}