#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main(void) 
{
    int sum = 0;
    int i, j;

    clock_t start, stop;
	double duration;
	start = clock();    // ���� ���� 

    

    for (i = 2; i <= 100; i++) {                     // 100���� �Ҽ����� �� ���ϴ� �ڵ�
        int primenumber = 1;

        for (j = 2; j * j <= i; j++) {
            int remainder = i % j;
            int div = remainder == 0;
            primenumber = primenumber && (!div);
        }

        sum += (primenumber * i);
    }


    stop = clock();                                      // ���� ����
    duration = (double)(stop - start) / CLOCKS_PER_SEC;
    printf("����ð��� %f�� �Դϴ�.\n", duration);

    return 0;

}
