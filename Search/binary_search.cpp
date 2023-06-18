#include <bits/stdc++.h>
using namespace std;

int binarySearch(int values[], int left, int right, int searchKey){
	while (left <= right) {
		int mid = left + (right - left) / 2;

		if (values[mid] == searchKey) {
            return mid;
        }

		if (values[mid] < searchKey) {
			left = mid + 1;
        } else {
			right = mid - 1;
        }
	}
	return -1;
}

int main(){
 	int values[5] = { 2, 3, 4, 10, 40 };
	int searchKey = 10;
	int n = sizeof(values) / sizeof(values[0]);
	int result = binarySearch(values, 0, n - 1, searchKey);

	(result == -1) ? cout << "Element is not present in array" : cout << "Element is present at index " << result;
	return 0;
}
