#include <stdio.h>

int main() {
    int n, i, j, isPrime;

    printf("Enter the limit: ");
    scanf("%d", &n);

    printf("Prime numbers up to %d are:\n", n);

    for (i = 2; i <= n; i++) {
        isPrime = 1; // assume prime

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = 0; // not prime
                break;
            }
        }

        if (isPrime)
            printf("%d ", i);
    }

    return 0;
}
