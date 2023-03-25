#include<stdio.h>

int main() {

	int N;
	int i;

	scanf_s("%d", &N);

	for (i = 0; i < N / 4; i++)
	{
		printf("long ");
	}
	printf("int");

	return 0;
}