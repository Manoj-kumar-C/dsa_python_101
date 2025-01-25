#include <iostream>
#include <vector>
using namespace std;

// Function to print the result
void printResult(int index) {
    if (index != -1) {
        cout << "Element found at index: " << index << endl;
    } else {
        cout << "Element not found." << endl;
    }
}

// 1. Linear Search
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i; // Return the index if found
        }
    }
    return -1; // Return -1 if not found
}

// 2. Binary Search (Iterative)
int binarySearchIterative(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2; // Avoid overflow
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Return -1 if not found
}

// 3. Binary Search (Recursive)
int binarySearchRecursive(int arr[], int left, int right, int key) {
    if (left > right) {
        return -1; // Base case: element not found
    }

    int mid = left + (right - left) / 2; // Avoid overflow
    if (arr[mid] == key) {
        return mid; // Element found
    } else if (arr[mid] < key) {
        return binarySearchRecursive(arr, mid + 1, right, key); // Search in the right half
    } else {
        return binarySearchRecursive(arr, left, mid - 1, key); // Search in the left half
    }
}

// Main Function to Test Searching Algorithms
int main() {
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to search: ";
    cin >> key;

    // Linear Search
    cout << "Linear Search: ";
    int linearIndex = linearSearch(arr, n, key);
    printResult(linearIndex);

    // Binary Search (Iterative)
    cout << "Binary Search (Iterative): ";
    int binaryIndexIter = binarySearchIterative(arr, n, key);
    printResult(binaryIndexIter);

    // Binary Search (Recursive)
    cout << "Binary Search (Recursive): ";
    int binaryIndexRec = binarySearchRecursive(arr, 0, n - 1, key);
    printResult(binaryIndexRec);

    return 0;
}
