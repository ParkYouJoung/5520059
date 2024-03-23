#include <stdio.h>
#include<stdlib.h>
#include <time.h>

int main_aaa(void) 
{
    clock_t start, stop;

	double duration;
	    // 측정 시작 

    int sum = 0;
    int i, j;

    start = clock();
    for (i = 2; i <= 100; i++) {                     // 100이하 소수들의 합 구하는 코드
        int primenumber = 1;

        for (j = 2; j * j <= i; j++) {
            int remainder = i % j;
            int div = remainder == 0;
            primenumber = primenumber && (!div);
        }

        sum += (primenumber * i);
        
    }
    printf("100 이하 소수 합은 %d 입니다.\n", sum);
    
    stop = clock();                                      // 측정 종료
    duration = (double)(stop - start) /CLOCKS_PER_SEC;
    printf("수행시간은 %f초 입니다.\n", duration);

    return 0;

}
