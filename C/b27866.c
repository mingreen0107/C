#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {

	char inputE[1000] = "";
	int inputN;

	scanf("%s\n%d", inputE, &inputN);

	printf("%c", inputE[inputN - 1]);

	return 0;
}