h                                                 g#include <iostream>
#include <climits> // for INT_MAX
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minElementIdx = i;
        // Find the smallest element in the unsorted portion
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minElementIdx]) {
                minElementIdx = j;
            }
        }
        // Swap the smallest element with the first element of the unsorted portion
        swap(arr[i], arr[minElementIdx]);
    }
}

int main() {
    int arr[] = {89, 65, 3, 1, 55};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    // Print the sorted array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
