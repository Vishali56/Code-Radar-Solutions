#include<stdio.h>
int main ()
{
    int isPrime(int num){
    int i,count;
    count = 0;
    if(num<=1){
        printf("number is not prime");
    }
    else{
        for(i=1;i<=num;i++){
            if (num%i == 0)
            count++;
        }
        if (count>2)
         return 0;

        else
         return 1;
    }
    }
    int a;
    scanf("%d",&a);
    isPrime(a);
    return 0;
} 
