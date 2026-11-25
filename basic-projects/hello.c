#include <stdio.h>
#include <stdbool.h>

static void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool swapped = false;

        // Compare adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in the wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }

        // Stop early if no swaps happened in this pass (array is already sorted)
        if (!swapped) {
            break;
        }
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Sample hardcoded data
    int data[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(data) / sizeof(data[0]);

    printf("Unsorted array: \n");
    printArray(data, n);

    bubbleSort(data, n);

    printf("Sorted array: \n");
    printArray(data, n);

    return 0;
}
