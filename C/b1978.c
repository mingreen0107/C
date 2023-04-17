// 소수 찾기
#include <stdio.h>

int main() {

	int N, count = 0, inputN;
	int i, j;

	scanf("%d ", &N);

	for (i = 0; i < N; i++) {
		scanf("%d", &inputN);

		for (j = 2; j <= inputN; j++) {
			if (inputN == j) count++;
			if (inputN % j == 0) break;
		}
		/*j = 2;
		while (1) {
			if (j <= inputN - 1) {
				if (inputN % j == 0) break;
				else j++;
			}
			else {
				if (inputN == 1 || inputN == 2) break;
				else {
					count++;
					break;
				}
			}
		}*/
	}
	printf("%d", count);

	return 0;
}