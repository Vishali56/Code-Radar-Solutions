#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int m[n];
    for (int i=0;i<n;i++){
        scanf("%d",&m[i]);
    }
    int r,c,t;
    for (r=0;r<n;r++){
        for(c=0;c<n-1-r;c++){
            if (m[c]>m[c+1]){
                t=m[c];
                m[c]=m[c+1];
                m[c+1]=t;
            }
        }
    }
    printf("Sorted array\n");
    for(int i=0;i<n;i++){
    printf("%d\n",m[i]);
    }
}