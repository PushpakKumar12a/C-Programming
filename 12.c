// WAP to print the sum of all numbers up to a given number.
#include <stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number : ");
    scanf("%d",&n);

    for(int i=1;i<=n;i++){
        sum=sum+i;
    }
    printf("Sum upto %d term : %d",n,sum);
    return 0;
}