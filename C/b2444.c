#include <stdio.h>

int main() {

	int N;
	int k, i, j;

	scanf_s("%d", &N);

	for (k = 1; k <= N; k++)
	{
		for (i = N - k; i > 0; i--)
		{
			printf(" ");
		}
		for (j = 0; j < k * 2 - 1; k++)
		{
			printf("*");
		}
	}




	return 0;
}