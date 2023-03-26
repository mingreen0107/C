#include<stdio.h>

int main() {

	int N, C;
	int a, b, c;
	int basket[100] = { 0 };
	int i, j;

	scanf_s("%d %d", &N, &C);

	for (i = 0; i < C; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);

		for (j = a; j <= b; j++)
		{
			basket[j] = c;
		}
	}
	for (i = 1; i <= N; i++)
	{
		printf("%d ", basket[i]);
	}


	return 0;
}