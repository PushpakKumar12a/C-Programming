// WAP that calculates the Simple Interest and Compound Interest. The Principal,Amount,
// Rate of Interest and Time are entered through the keyboard.

#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time, simpleInterest, compoundInterest;

    printf("Enter the Principal, Rate, and Time (in years):");
    scanf("%f %f %f", &principal, &rate, &time);

    // Calculate simple interest
    simpleInterest = (principal * rate * time) / 100;
    printf("Simple interest is: %.3f\n", simpleInterest);

    // Calculate compound interest
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;
    printf("Compound interest is: %.3f\n", compoundInterest);

    return 0;
}

