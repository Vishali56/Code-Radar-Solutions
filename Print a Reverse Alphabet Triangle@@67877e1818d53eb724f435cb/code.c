#include<stdio.h>
int main()
{
    int i,n,j;
    char m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m='A';
        for(j=1;j<=n;j++){
            printf("%c ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}