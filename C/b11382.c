#include<stdio.h>

int main() {

	long long inputN1;
	long long inputN2;
	long long inputN3;

	long long sum = 0;

	scanf_s("%lld %lld %lld", &inputN1, &inputN2, &inputN3);

	sum = inputN1 + inputN2 + inputN3;

	printf("%lld", sum);

	return 0;
}