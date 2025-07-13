#include<iostream>
using namespace std;
void CountingFrequency(int a[],int n){
    bool visited[n];
     for (int i = 0; i < n; i++) {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        int count = 1;
        
        if(visited[i] == true)
        continue;

        for (int j = i+1; j < n; j++)
        {
           if(a[i] == a[j]){
            visited[j] = true;
            count++;
           }
        }
        cout << a[i] << count;;
    }
}
int main(){
    int a[] = {10,2,10,2,45,10};
    int length = sizeof(a)/sizeof(a[0]);
    CountingFrequency(a,length);
}