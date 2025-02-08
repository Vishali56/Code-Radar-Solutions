#include<stdio.h>
int main()
{
   int m,i,n,j;
   scanf("%d",&n);
   for(i=1;i<=n;i++){
         m=1;
    for(j=1;j<=n-1;j++){
        printf(" ");
    }
    for(j=1;j<=n;j++){
        printf("%d",m);
        m++;
    }
    printf("\n");
   }
   return 0;
}