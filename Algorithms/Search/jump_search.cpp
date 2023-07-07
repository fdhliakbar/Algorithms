#include <bits/stdc++.h>
using namespace std;

int jumpSearch(int values[], int searchKey, int size)
{
	// Finding block size to be jumped
	int step = sqrt(size);

	// Finding the block where element is
	// present (if it is present)
	int prev = 0;
	while (values[min(step, size)-1] < searchKey)
	{
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return -1;
	}

	// Doing a linear search for searchKey in block
	// beginning with prev.
	while (values[prev] < searchKey)
	{
		prev++;

		// If we reached next block or end of
		// valuesay, element is not present.
		if (prev == min(step, size))
			return -1;
	}
	if (values[prev] == searchKey)
		return prev;

	return -1;
}

// Driver program to test function
int main()
{
	int values[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21,
				34, 55, 89, 144, 233, 377, 610 };
	int searchKey = 55;
	int size = sizeof(values) / sizeof(values[0]);
	
	int index = jumpSearch(values, searchKey, size);

	cout << "Number " << searchKey << " is at index " << index;
	return 0;
}