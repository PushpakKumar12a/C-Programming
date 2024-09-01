// WAP that accepts the temperature in Centigrade and converts into Fahrenheit using the
// formula C/5=(F-32)/9.
#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    printf("Enter the temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("The temperature in Fahrenheit is: %.2f\n", fahrenheit);

    return 0;
}
