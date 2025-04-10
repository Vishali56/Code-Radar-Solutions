#include<stdio.h>
int main()
{
    int n,i,arr[n];
    scanf("%d\n",&n);
    for(i=0;i<n;i++){
        scanf("%d ",&arr[i]);
    }
    int max=arr[0],min=arr[0];
    for(i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        else if(arr[i]<min){
            min=arr[i];
        }
    }
    printf("%d %d",min,max);
    return 0;
}