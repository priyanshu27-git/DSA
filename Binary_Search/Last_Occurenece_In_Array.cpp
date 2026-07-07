#include <iostream>
using namespace std;

int last(int a[], int low, int high, int Target, int n){

    int ans = -1;
	while (low <= high){
		int mid = (low + high) / 2;
			
		if (a[mid] == Target) {
            ans = mid;
            low = mid + 1;
		}
		else if(a[mid] > Target){
            high = mid - 1;
		}
        else
            low = mid + 1;
	}
	return ans;
}

int first(int a[], int low, int high, int Target, int n){
    
    int ans = -1;
	while (low <= high){
		int mid = (low + high) / 2;
			
		if (a[mid] == Target) {
			ans = mid;
			high = mid - 1;
		}
		else if(a[mid] > Target){
            high = mid - 1;
		}
        else
            low = mid + 1;
	}
	return ans;
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
    int Target;
    cin >> Target;

    int floor , ceil;

    ceil = first(a, 0, n - 1, Target, n);
    floor = last(a, 0, n - 1, Target, n);

    cout << ceil << " " << floor;


    return 0;
}