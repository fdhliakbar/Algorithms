// C++ program to implement iterative Binary Search
#include <bits/stdc++.h>
using namespace std;

// An iterative binary search function.
int binarySearch(int arr[], int left, int right, int searchKey)
{
	while (left <= right) {
		int m = left + (right - left) / 2;

		// Check if searchKey is present at mid
		if (arr[m] == searchKey)
			return m;

		// If searchKey greater, ignore left half
		if (arr[m] < searchKey)
			left = m + 1;

		// If searchKey is smaller, ignore right half
		else
			right = m - 1;
	}

	// If we reach here, then element was not present
	return -1;
}

// Driver code
int main()
{
	int arr[] = { 2, 3, 4, 10, 40 };
	int x = 10;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binarySearch(arr, 0, n - 1, x);

	(result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
	return 0;
}
