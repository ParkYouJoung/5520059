#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main_aaa(void) 
{
    clock_t start, stop;

	double duration;
	    // ���� ���� 

    int sum = 0;
    int i, j;

    start = clock();
    for (i = 2; i <= 100; i++) {                     // 100���� �Ҽ����� �� ���ϴ� �ڵ�
        int primenumber = 1;

        for (j = 2; j * j <= i; j++) {
            int remainder = i % j;
            int div = remainder == 0;
            primenumber = primenumber && (!div);
        }

        sum += (primenumber * i);
        
    }
    printf("100 ���� �Ҽ� ���� %d �Դϴ�.\n", sum);
    
    stop = clock();                                      // ���� ����
    duration = (double)(stop - start) /CLOCKS_PER_SEC;
    printf("����ð��� %f�� �Դϴ�.\n", duration);

    return 0;

}
