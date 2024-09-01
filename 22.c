// WAP that inputs two arrays and saves sum of corresponding elements of these arrays in
// a third array and prints them.

#include <stdio.h>

int main() {
    int size, i;

    printf("Enter the size of the arrays: ");
    scanf("%d", &size);

    int arr1[size], arr2[size], sum_arr[size];

    printf("Enter the elements of the first array : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the elements of the second array : ");
    for (i = 0; i < size; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("The sum of the corresponding elements is : ");
    for (i = 0; i < size; i++) {
        sum_arr[i] = arr1[i] + arr2[i];
        printf("%d ",sum_arr[i]);
    }

    return 0;
}
