// WAP to print Armstrong numbers from 1 to 100.

#include <stdio.h>
#include<math.h>
int main(){
    for(int i=1;i<=200;i++){
        int temp=i,r,res=0;
        int count =log10(i)+1;        
        while(temp>0){
            r=temp%10;
            res=res+ceil(pow(r,count));
            temp/=10;
        }
        if(res==i){
            printf("%d ",i);
        }
    }
    return 0;
}

