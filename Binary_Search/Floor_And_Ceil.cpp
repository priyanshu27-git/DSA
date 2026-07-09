#include <iostream>
using namespace std;

int Floor(int a[], int low, int high, int Target, int n)
{

	int ans = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] > Target)
		{
			high = mid - 1;
		}
		else
		{
			ans = mid;
			low = mid + 1;
		}
	}
	return ans;
}

int Ceil(int a[], int low, int high, int Target, int n)
{

	int ans = -1;
	while (low <= high)
	{
		int mid = (low + high) / 2;

		if (a[mid] >= Target)
		{
			ans = mid;
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
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

	int floor, ceil;

	floor = Floor(a, 0, n - 1, Target, n);
	ceil = Ceil(a, 0, n - 1, Target, n);

	cout << floor << " " << ceil;

	return 0;
}