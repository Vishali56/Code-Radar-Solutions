#include<stdio.h>
int main()
{
   int m,i,n,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
         m=1;
    for(j=1;j<=n-i;j++){
        printf(" ");
    }
    for(j=1;j<=i;j++){
        printf("%d ",m);
        m++;
    }
    printf("\n");
   }
   return 0;
}