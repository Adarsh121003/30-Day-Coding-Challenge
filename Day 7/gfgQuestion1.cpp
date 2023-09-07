// Program to check if an array is sorted or not using Recursive approach
#include <iostream>
using namespace std;
bool arraySortedOrNot(int a[], int n)
{
	if (n == 1 || n == 0)
	{
		return true;
	}
	
	return a[n - 1] >= a[n - 2] &&
	arraySortedOrNot(a, n - 1);
}

int main()
{
	int arr[] = { 20, 23, 23, 45, 78, 88 };
	int n = sizeof(arr) / sizeof(arr[0]);
	
	if (arraySortedOrNot(arr, n))
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
	
	return 0;
}

