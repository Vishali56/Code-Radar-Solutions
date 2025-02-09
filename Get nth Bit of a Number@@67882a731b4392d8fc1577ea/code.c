#include<stdio.h>
int main()
{
    int n,b,result;
    scanf("%d",&n);
    result=(1<<n);
    if(n & result){
        printf("1");
    }
    else{
        printf("0");
    }
    return 0;

}