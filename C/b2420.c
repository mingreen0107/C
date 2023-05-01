#include <stdio.h>
#include <stdlib.h>

int main() {

	long long N, M, difference;

	scanf("%lld\n%lld", &N, &M);

	difference = N - M;

	printf("%lld", abs(difference));

	return 0;
}