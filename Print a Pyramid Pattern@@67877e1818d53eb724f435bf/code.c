#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i){
        for(j=1;j<=n-i;++j,k=0){
           printf(" ");
        }
       while(k!=2*i-1){
        printf("*");
        ++k;
       }
        printf("\n");
    }
    return 0;
}