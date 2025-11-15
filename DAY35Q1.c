//Find the second largest element in an array.

#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Need at least two elements.\n");
        return 0;
    }

    int arr[n];
    printf("Enter the elements:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int largest = INT_MIN, second_largest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    if (second_largest == INT_MIN) {
        printf("No second largest element (all elements may be equal).\n");
    } else {
        printf("Second largest element: %d\n", second_largest);
    }

    return 0;
}
