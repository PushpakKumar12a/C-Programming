// WAP to print sum of even and odd numbers from 1 to N numbers.
#include <stdio.h>

int main() {
    int N, i, evenSum = 0, oddSum = 0;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) {
        if (i % 2 == 0) {
            evenSum += i;
        } else {
            oddSum += i;
        }
    }

    printf("The sum of even numbers from 1 to %d is: %d\n", N, evenSum);
    printf("The sum of odd numbers from 1 to %d is: %d\n", N, oddSum);

    return 0;
}
