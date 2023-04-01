#include <stdio.h>

int main() {

	int A, B, C, M;
	int i;
	char num[10] = { 0 };

	scanf("%d %d %d", &A, &B, &C);

	M = A * B * C;

	while (M / 10 != 0)
	{
		for (i = 0; i < 10; i++)
		{
			if (M % 10 == i)
			{
				num[i]++;
				break;
			}
		}
		M = M / 10;
	}
	for (i = 0; i < 10; i++)
	{
		if (M == i)
		{
			num[i]++;
			break;
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", num[i]);
	}
	return 0;
}