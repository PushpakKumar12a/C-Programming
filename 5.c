// Swap the values using a third variable
#include <stdio.h>
int main()
{
int a, b, temp;

printf("Enter the value of a and b : ");
scanf("%d%d", &a,&b);

printf("Before swapping:\n");
printf("a = %d, b = %d\n", a, b);

temp = a;
a = b;
b = temp;

printf("After swapping:\n");
printf("a = %d, b = %d\n", a, b);

return 0;
}
