#include <stdio.h>

int main() {

	int inputN[5] = { 0 };
	int NMul[5] = { 0 };
	int sum=0;
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &inputN[i]);

		NMul[i] = inputN[i] * inputN[i];
	}
	for (i = 0; i < 5; i++)
	{
		sum += NMul[i];
	}
	printf("%d", sum % 10);

	return 0;
}