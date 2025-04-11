#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n < 2) {
        printf("-1\n");
        return 0;
    }
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int largest = -2147483648, secondLargest = -2147483648; // Using the smallest possible integer for initialization
    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;  // Update second largest
            largest = arr[i];         // Update largest
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];   // Update second largest
        }
    if (secondLargest == -2147483648) {
        // If second largest wasn't updated, print -1
        printf("-1\n");
    } else {
        printf("%d\n", secondLargest);
    }
    }
    return 0;
}

