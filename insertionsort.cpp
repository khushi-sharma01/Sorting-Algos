#include<iostream>
using namespace std;

void insertionSort(int arr[], int n) {
    // Start from the second element
    for (int i = 1; i < n; i++) {
        int temp = arr[i];  // Current element to be positioned
        int j = i - 1;

        // Shift elements of arr[0..i-1] that are greater than temp to one position ahead
        while (j >= 0 && arr[j] > temp) {
            arr[j + 1] = arr[j];  // Shift larger elements to the right
            j--;
        }
        arr[j + 1] = temp;  // Insert the current element in its correct position
    }
}

int main() {
    int arr[] = {23, 3, 2, 55, 34, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);  // Call the sorting function

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
