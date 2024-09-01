// WAP to search an element in a array using Linear Search.

#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n,target;
    printf("Enter size of the array : ");
    scanf("%d",&n);

    int arr[n];
    printf("Enter elements of array : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    printf("Enter target element : ");
    scanf("%d",&target);

    int index = linearSearch(arr, n, target);

    if (index == -1) {
        printf("Element %d not found in the array", target);
    } else {
        printf("Element %d found at index %d", target, index);
    }

    return 0;
}
