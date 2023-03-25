#include<stdio.h>

int main() {

	int N, M;
	int box[100] = { 0 };
	int c1, c2;
	int n1, n2;
	int i;

	scanf_s("%d %d", &N, &M);

	for (i = 0; i < N; i++)
	{
		box[i + 1] = i + 1;
	}
	for (i = 0; i < M; i++)
	{
		scanf_s("%d %d", &c1, &c2);

		n1 = box[c1];
		n2 = box[c2];

		box[c1] = n2;
		box[c2] = n1;
	}
	for (i = 1; i <= N; i++)
	{
		printf("%d ", box[i]);
	}
	return 0;
}