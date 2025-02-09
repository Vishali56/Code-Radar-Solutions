#include<stdio.h>
int main()
{
    int n,k,result;
    scanf("%d",&n);
    result = (n & (~(1 << (k-1))));
    printf("%d",result);
    return 0;
}