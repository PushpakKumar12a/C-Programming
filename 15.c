#include <stdio.h>

int main() {
   int i, n, t1 = 0, t2 = 1, nextTerm;

   printf("Enter the number of terms: ");
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   for (i = 1; i <= n; ++i) {
      printf("%d ", t1);
      nextTerm = t1 + t2;
      t1 = t2;
      t2 = nextTerm;
   }
   
   return 0;
}

//----Recursion----

// int fib(int n){
//    if(n==0)
//       return 0;
//    else if(n==1)
//       return 1;
//    else
//       return fib(n-1)+fib(n-2);
// }

// int main(){
//    int i,n;
//    printf("Enter a number : ");
//    scanf("%d",&n);
//    for(i=0;i<n;i++){
//       printf("%d ",fib(i));
//    }

//    return 0;
// }