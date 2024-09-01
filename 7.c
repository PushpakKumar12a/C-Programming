// WAP to find greatest of three numbers
#include <stdio.h>
int main(){
    int a,b,c;
    printf("Enter three numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    int max=a;
    if(max<b)
        max=b;
    
    if(max<c)
        max=c;
    
    printf("Greatest of three number : %d",max);
    return 0;
}