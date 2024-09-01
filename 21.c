// WAP that simply takes elements of the array from the user and finds the sum of these elements.

#include <stdio.h>

int main() {
    int size, i, sum = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < size; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("The sum of the elements in the array is: %d\n", sum);

    return 0;
}
