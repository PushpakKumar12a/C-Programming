// WAP to find the factorial of a given number.
#include <stdio.h>
int main(){
    int n,fact=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of %d : %d",n,fact);
    return 0;
}