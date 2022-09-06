
#include <iostream>
using namespace std;

void findElement(int arr[], int size, int key)
{
	// loop to traverse array and search for key
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			cout << "Element found at position: " << i ;
			break;
		}
	}
}

// Driver program to test above function
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int n = 6; // no of elements
	int key = 2; // key to be searched

	// Calling function to find the key
	findElement(arr, n, key);

	return 0;
}
