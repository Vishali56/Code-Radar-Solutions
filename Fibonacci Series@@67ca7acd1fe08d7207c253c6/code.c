#include <stdio.h>
void fibonacciSeries(int n) {
    int first = 0, second = 1, next, i;
    printf("Fibonacci series: ");
    for (i = 0; i < n; i++) {
        printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
    }
    printf("\n");
}

int main() {
    int n;
    printf("enter a number");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}