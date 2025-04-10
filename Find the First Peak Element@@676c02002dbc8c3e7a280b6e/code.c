#include<stdio.h>
int main()
{ 
    int i,n,arr[n],count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d\n",&arr[i]);
    }
    for(i=0;i<n;i++){
        if((i==0||arr[i]>=arr[i-1])&&(i==n-1||arr[i]>=arr[i+1])){
            printf("%d",arr[i]);
            count = 1;
            break;
        }
    }
    if(flag==0){
        return -1;
    }
    return 0;
}