#include <bits/stdc++.h>
using namespace std;

// Partition function
int Partition(int *arr, int low, int high) {
    int pivot = arr[high]; // Choosing the last element as the pivot
    int i = low - 1;       // Index for smaller elements

    for (int j = low; j < high; j++) {
        if (arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]); // Place the pivot in its correct position
    return i + 1;
}

// QuickSort function
void QuickSort(int *arr, int low, int high) {
    if (low < high) {
        int pv = Partition(arr, low, high); // Get the pivot index
        QuickSort(arr, low, pv - 1);        // Recursively sort the left subarray
        QuickSort(arr, pv + 1, high);       // Recursively sort the right subarray
    }
}

int main() {
    int arr[] = {43, 3, 2, 4, 33, 99};
    int size = sizeof(arr) / sizeof(arr[0]);

    QuickSort(arr, 0, size - 1);

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
