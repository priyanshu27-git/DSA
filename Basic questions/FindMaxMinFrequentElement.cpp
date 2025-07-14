#include <iostream>
#include <algorithm>
using namespace std;
void MaxMin(int nums[], int n)
{
    bool visited[n];
    int maxcount = 1,mincount = 1;
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
            continue;
        int count = 1;
        for (int j = i + 1; j < n; j++)
        {
            if (nums[i] == nums[j])
            {
                visited[j] = true;
                count++;
            }
        }
        int curr = count;
        maxcount = maxcount < curr ? curr : maxcount;
        mincount = mincount > curr ? curr : mincount;
        if(maxcount == count)
        cout << nums[i] << " " << count << endl;
        if(mincount == count)
        cout << nums[i] << " " << count << endl;
    }
}

int main()
{
    int a[] = {10, 5, 10, 15, 10, 5};
    int length = sizeof(a) / sizeof(a[0]);
    MaxMin(a, length);
}