// WAP to check whether the entered number is prime or not.
#include <stdio.h>
int main(){
    int n,flag=0;
    printf("Enter number : ");
    scanf("%d",&n);

    for(int i=2;i<=n;i++){
        if(n%i==0){
            flag++;
        }
    }
    if(flag==1)
        printf("Entered number is prime");
    else
        printf("Entered number is not prime");
    return 0;
}