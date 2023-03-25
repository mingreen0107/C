#include<stdio.h>

int main() {

	int A, B;
	int a1, a2, a3;
	int b1, b2, b3;

	scanf_s("%d %d", &A, &B);

	a1 = A / 100;
	a2 = (A % 100) / 10;
	a3 = A % 10;
	A = a1 + a2 * 10 + a3 * 100;

	b1 = B / 100;
	b2 = (B % 100) / 10;
	b3 = B % 10;
	B = b1 + b2 * 10 + b3 * 100;

	if (A > B)
		printf("%d", A);
	else
		printf("%d", B);

	return 0;
}