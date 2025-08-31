#include <stdio.h>

int main() {
    int n, i, isPrime = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        isPrime = 0; // 0 and 1 are not prime
    } else {
        for (i = 2; i * i <= n; i++) {
            if (n % i == 0) {
                isPrime = 0; // found a divisor, not prime
                break;
            }
        }
    }

    if (isPrime)
        printf("%d is a Prime Number.\n", n);
    else
        printf("%d is NOT a Prime Number.\n", n);

    return 0;
}
