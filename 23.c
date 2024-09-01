// WAP to find the minimum and maximum element of the array.

#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int min = arr[0];
    int max = arr[0];

    for (i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    printf("The minimum element in the array is: %d\n", min);
    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
