#include <stdio.h>
#include <math.h>

int main() {
    int num, is_prime = 1;  // Assume number is prime
    scanf("%d", &num);

    if (num < 2) {
        printf("No\n");  // 0 and 1 are not prime
    } else {
        for (int i = 2; i <= sqrt(num); i++) {  // Check up to sqrt(num)
            if (num % i == 0) {
                is_prime = 0;  // Not a prime number
                break;  // Exit early
            }
        }
        if (is_prime) {
            printf("It is a prime number\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}
