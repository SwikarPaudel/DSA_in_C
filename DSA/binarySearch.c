#include <stdio.h>

// Function to perform binary search
int binarySearch(int array[], int x, int low, int high) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}

int main() {
    int array[100], n, x,i;
    printf("Enter the number of elements to sort: ");
    scanf("%d", &n);
    printf("Enter the sorted elements: ");
    for ( i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }
    printf("\n");
    printf("Enter the pivot element: ");
    scanf("%d", &x);
    int result;
    result = binarySearch(array, x, 0, n - 1);
    if (result == -1)
        printf("Element is not present in array");
    else
        printf("Element is present at index %d", result);

    return 0;
}
