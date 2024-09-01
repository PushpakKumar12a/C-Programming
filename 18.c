// WAP to find the reverse of a number.
#include <stdio.h>

int main() {
    int n, nc, rev = 0, digit;

    printf("Enter a number: ");
    scanf("%d", &n);

    nc = n;

    while (nc != 0) {
        digit = nc % 10;
        rev = rev * 10 + digit;
        nc /= 10;
    }

    printf("Original number : %d\n",n);
    printf("Reversed number : %d",rev);

    return 0;
}
