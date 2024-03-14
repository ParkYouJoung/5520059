#include <stdio.h>
#include <time.h>

int main(void) 
{
	clock_t start, stop;
	double duration;
	start = clock();

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

    stop = clock();
    duration = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("����ð��� %f�� �Դϴ�.\n", duration);

    return 0;

}
