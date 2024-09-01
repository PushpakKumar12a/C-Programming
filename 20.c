// WAP to convert binary number into decimal number and vice versa.

#include <stdio.h>
#include <math.h>

int BtoD(int binary) {
    int decimal = 0, rem,i = 0;
    while (binary != 0) {
        rem=binary % 10;
        decimal += rem * pow(2, i);
        binary /= 10;
        i++;
    }
    return decimal;
}

// Function to convert decimal to binary
int DtoB(int decimal) {
    int binary = 0, remainder, i = 1;
    while (decimal != 0) {
        remainder = decimal % 2;
        binary += remainder * i;
        decimal /= 2;
        i *= 10;
    }
    return binary;
}

int main() {
    int choice, num;

    printf("1. Convert binary to decimal\n");
    printf("2. Convert decimal to binary\n");
    printf("Enter your choice (1/2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a binary number: ");
            scanf("%d", &num);
            printf("Decimal equivalent: %d\n", BtoD(num));
            break;
        case 2:
            printf("Enter a decimal number: ");
            scanf("%d", &num);
            printf("Binary equivalent: %d\n", DtoB(num));
            break;
        default:
            printf("Invalid choice. Please try again.\n");
            break;
    }

    return 0;
}
