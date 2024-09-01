// WAP that accepts the marks of 5 subjects and finds the sum and percentage marks obtained
#include <stdio.h>

int main(){
    float a1,a2,a3,a4,a5,sum,per;
    printf("Enter marks of five subjects : ");
    scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);

    sum=a1+a2+a3+a4+a5;
    per=sum/5;
    printf("Sum = %.2f",sum);
    printf("\nPercentage = %.2f",per);
    return 0;
}
