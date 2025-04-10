#include<stdio.h>
int main()
{ 
    int i, n, flag = 0;
    scanf("%d", &n);
    int arr[n]; // Declare the array after reading n.
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++) {
        if((i == 0 || arr[i] >= arr[i - 1]) && (i == n - 1 || arr[i] >= arr[i + 1])) {
            printf("%d", arr[i]);
            flag = 1; // Indicates a peak was found.
            break;
        }
    }
    if(flag == 0) {
        // If no peak is found, print -1.
        printf("-1");
    }
    return 0;
}
