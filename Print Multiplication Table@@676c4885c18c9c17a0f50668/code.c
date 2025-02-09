#include<stdio.h>
int main()
{
    int i,n,product;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    product=n*i;
    printf("%d x %d = %d\n",n,i,product);
    }
    return 0;
}