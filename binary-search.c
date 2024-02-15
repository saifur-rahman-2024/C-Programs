#include <stdio.h>

// Recursive binary search function
int binarySearch(int arr[], int low, int high, int key) {
    if (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key)
            return 1; // Key found
        else if (arr[mid] < key)
            return binarySearch(arr, mid + 1, high, key); // Search the right half
        else
            return binarySearch(arr, low, mid - 1, key); // Search the left half
    }

    return 0; // Key not found
}

int main() {
    int n;

    // Get the number of elements in the list from the user
    printf("Enter the number of elements in the list: ");
    scanf("%d", &n);

    int given_list[n];

    // Get the elements of the list from the user
    printf("Enter %d elements of the list:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &given_list[i]);
    }

    int key_to_search;

    // Get the key to search from the user
    printf("Enter the key to search: ");
    scanf("%d", &key_to_search);

    // Sorting the list (assuming it's not already sorted)
    // Note: If the list is already sorted, you can skip this step.
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (given_list[j] > given_list[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = given_list[j];
                given_list[j] = given_list[j + 1];
                given_list[j + 1] = temp;
            }
        }
    }

    // Applying binary search
    int result = binarySearch(given_list, 0, n - 1, key_to_search);

    if (result)
        printf("Key %d found in the sorted list.\n", key_to_search);
    else
        printf("Key %d not found in the sorted list.\n", key_to_search);

    return 0;
}
