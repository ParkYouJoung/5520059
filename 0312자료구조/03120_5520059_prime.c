#include <stdio.h>

int main() {
    int sum = 0;
    int i, j;

    for (i = 2; i <= 100; i++) {
        int primenumber = 1;

        for (j = 2; j * j <= i; j++) {
            int remainder = i % j;
            int div = remainder == 0;
            primenumber = primenumber && (!div);
        }

        sum += (primenumber * i);
    }

    printf("100 ���� �Ҽ� ���� %d �Դϴ�.\n", sum);
    return 0;
}