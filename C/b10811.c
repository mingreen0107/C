#include<stdio.h>

int main() {

	int N, M;
	int box[100] = { 0 };
	int boxcopy[100] = { 0 };
	int c1, c2, c22;
	int i, j;

	scanf_s("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		box[i + 1] = i + 1;
		boxcopy[i + 1] = box[i + 1];
	}
	for (i = 0; i < M; i++)
	{
		scanf_s("%d %d", &c1, &c2);
		c22 = c2;

		for (j = c1; j <= c2; j++)
		{
			boxcopy[c22] = box[j];
			c22--;
		}
		for (j = 1; j <= N; j++)
		{
			box[j] = boxcopy[j];
		}
	}
	for (i = 1; i <= N; i++)
	{
		printf("%d ", boxcopy[i]);
	}
	return 0;
}