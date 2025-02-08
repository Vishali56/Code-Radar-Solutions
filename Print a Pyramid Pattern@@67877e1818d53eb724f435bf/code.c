#include<stdio.h>
int main()
{
    int n,i,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;++i,k=1){
        for(j=1;j<=n-i;++j){
           printf(" ");
        }
       while(k!=2*i){
        printf("*");
        ++k;
       }
        printf("\n");
    }
    return 0;
}