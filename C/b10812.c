#include <stdio.h>

int main() {

	int N, M, i, j, k, kc;
	int basket[100] = { 0 };
	int basketcopy[100] = { 0 };
	int a, b, c, d;

	scanf_s("%d %d", &N, &M);

	for (a = 0; a < N; a++)
	{
		basket[a + 1] = a + 1;
		basketcopy[a + 1] = basket[a + 1];
	}
	for (a = 0; a < M; a++)
	{
		scanf_s("%d %d %d", &i, &j, &k);
		c = i;
		d = k;

		for (b = i; b <= j; b++)
		{
			if (d <= j)
			{
				basketcopy[b] = basket[d];
				d++;
			}
			else
			{
				basketcopy[b] = basket[c];
				c++;
			}
		}
		for (b = 1; b <= N; b++)
		{
			basket[b] = basketcopy[b];
		}
	}
	for (a = 1; a <= N; a++)
	{
		printf("%d ", basketcopy[a]);
	}
	return 0;
}