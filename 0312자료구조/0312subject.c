#include <stdio.h>

int main() {
    int sum = 0;
    int i, j;

    for (i = 2; i <= 100; i++) {
        int primenumber = 1;

        for (j = 2; j * j <= i; j++) {
            int remainder = i % j;
            int is_divisible = remainder == 0;
            primenumber = primenumber && (!is_divisible);
        }

        sum += (primenumber * i);
    }

    printf("100 이하 소수들의 합: %d\n", sum);
    return 0;
}