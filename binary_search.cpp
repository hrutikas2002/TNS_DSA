
#include<iostream>
using namespace std;

// binary search function.
int binary_search(int arr[], int left, int right, int x)
{
	while (left <= right) 
    {
        int mid;
		mid = left + (right - left) / 2;

		// Check if x is present at mid
		if (arr[mid] == x)
			return mid;

		// If x greater, ignore left half
		if (arr[mid] < x)
			left = mid + 1;

		// If x is smaller, ignore right half
		else
			right = mid - 1;
	}

	return -1;
}

int main(void)
{
	int arr[] = { 02,20,24,29,31 };
	int x = 24;
	int n = sizeof(arr) / sizeof(arr[0]);
	int result = binary_search(arr, 0, n - 1, x);
	(result == -1)
		? cout << "Element is not present in array"
		: cout << "Element is present at index " << result;
	return 0;
}
