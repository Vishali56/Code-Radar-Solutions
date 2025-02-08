#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if(a==b && b==c && c==a) {
        printf("Equilateral");
    }
    else if(a==b || b==c || c==a){
        printf("Isosceles");
    }
    else{
        printf("Scalene");
    }
    return 0;
}