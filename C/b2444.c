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
		for (j = 1; j <= k * 2 - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (k = N - 1; k > 0; k--)
	{
		for (i = 1; i <= N-k; i++)
		{
			printf(" ");
		}
		for (j = k * 2 - 1; j > 0; j--)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}