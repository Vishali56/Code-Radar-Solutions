#include<stdio.h>
int main()
{
    void fibonacciSeries(int n){
    int first=0,second=1,next,i,n;
    printf("fibonacci series: ");
    for(i=0;i<n;i++){
       printf("%d", first);
       next=first+second;
       first=second;
       second=next;
    scanf("%d",&n);
    if(n<=0){
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}