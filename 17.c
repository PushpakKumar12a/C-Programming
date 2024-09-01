// WAP to find the sum of digits of the entered number.
#include <stdio.h>

int main() {
    int n,nc, sum = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    nc = n;

    while (nc != 0) {
        digit = nc % 10;
        sum += digit;
        nc /= 10;
    }

    printf("The sum of digits of %d : %d\n", n, sum);

    return 0;
}
