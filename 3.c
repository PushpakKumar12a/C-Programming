// WAP to calculate the area and circumference of a circle.
#include <stdio.h>
float area(float a){
    return a*a;
}
float circum(float a){
    return 2*3.14*a;
}

int main(){
    float radius;
    printf("Enter radius of circle : ");
    scanf("%f",&radius);

    printf("Area of circle : %.2f\n",area(radius));
    printf("Circumference of circle : %.2f",circum(radius));
    return 0;
}