#include<stdio.h>
int main()
{
    int n,b,result;
    scanf("%d %d",&n,&b);
    result=(1<<b);
    if(n & result){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;

}