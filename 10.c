// WAP that accepts marks of five subjects and finds percentage and prints grades
// according to the following criteria:

#include <stdio.h>

int main(){
    float a1,a2,a3,a4,a5,sum,per;
    printf("Enter marks of five subjects : ");
    scanf("%f%f%f%f%f",&a1,&a2,&a3,&a4,&a5);

    sum=a1+a2+a3+a4+a5;
    per=sum/5;

    printf("Sum = %.2f\n",sum);
    printf("Percentage = %.2f\n",per);
    if (per>=90)
        printf("Grade = A");
    else if(per>=80)
        printf("Grade = B");
    else if(per>=60)
        printf("Grade = C");
    else
        printf("Grade = D");
    return 0;
}
