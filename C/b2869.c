#include <stdio.h>

int main() {

	int A, B, V;
	int count;

	scanf("%d %d %d", &A, &B, &V);

	count = (V - B - 1) / (A - B) + 1;

	printf("%d", count);

	return 0;
}