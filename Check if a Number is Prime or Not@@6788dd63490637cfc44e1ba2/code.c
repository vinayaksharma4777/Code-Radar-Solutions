#include <stdio.h>

int main() {
    int num, is_prime = 1;
    scanf("%d", &num);

    if (num < 2) {
        printf("No\n");  // 0 and 1 are not prime
    } else if (num == 2 || num == 3) {
        printf("It is a prime number\n");  // 2 and 3 are prime
    } else if (num % 2 == 0 || num % 3 == 0) {
        printf("No\n");  // Eliminate multiples of 2 and 3 early
    } else {
        for (int i = 5; i * i <= num; i += 6) {  // Check only 6k ± 1 numbers
            if (num % i == 0 || num % (i + 2) == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("It is a prime number\n");
        else
            printf("No\n");
    }

    return 0;
}


