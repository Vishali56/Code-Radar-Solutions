#include<stdio.h>
void fibbonacciSeries(int n){
    int first=0,second=1,next;
    printf("fibonacci series:");
    for(i=0;i<n;i++){
       printf("%d",first);
       next=first+second;
       first=second;
       second=next;
    }
    printf("\n");
}
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}