#include <stdio.h>

int main() {
    int num, is_prime = 1;
    scanf("%d", &num);

    if (num < 2) {
        printf("Not Prime\n");  // 0 and 1 are not prime
    } else if (num == 2 || num == 3) {
        printf("Prime\n");  // 2 and 3 are prime
    } else if (num % 2 == 0 || num % 3 == 0) {
        printf("Not Prime\n");  // Eliminate multiples of 2 and 3 early
    } else {
        for (int i = 5; i * i <= num; i += 6) {  // Check only 6k ± 1 numbers
            if (num % i == 0 || num % (i + 2) == 0) {
                is_prime = 0;
                break;
            }
        }
        if (is_prime)
            printf("Prime\n");
        else
            printf("Not Prime\n");
    }

    return 0;
}


