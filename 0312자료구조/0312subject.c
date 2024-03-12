#include <stdio.h>

int main() {
	
	int i, n;
	int sum = 0;

	for (n = 1; n <= 100; n++) {
		if (prime(n)) {
			sum += n;
		}
	}
	pintf("1 ~ 100 까지 소수의 합 : %d", sum);

}
int prime(int n) {
	int r, i;
	int count = 0;
	for (i = 2; i <= n; i++) {
		r = n / i;
		if (n == r * i) count++;

		if (count > 1) return 0;
	}

	if (count == 1) return 1;
	else
		return 0;

}