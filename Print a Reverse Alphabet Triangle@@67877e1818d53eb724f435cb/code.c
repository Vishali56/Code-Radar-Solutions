#include<stdio.h>
int main()
{
    int i,n,j;
    char m;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        m='A';
        for(j=n;j>=i;j--){
            printf("%c ",m);
            m++;
        }
        printf("\n");
    }
    return 0;
}