#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) {
        return 0; 
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }
    return 1; 
}

int main() {
    int limit = 100;
    int sum = 0;

    for (int i = 2; i <= limit; i++) {
        if (is_prime(i)) {
            sum += i;
        }
    }

    printf("100 이하 소수 합: %d\n", sum);

    return 0;
}