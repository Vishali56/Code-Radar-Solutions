#include<stdio.h>
int main()
{
    int n,b,result;
    scanf("%d %d",&n,&b);
    result=(1<<b);
    n = n & (~result);
    printf("%d",n);
    return 0;
}