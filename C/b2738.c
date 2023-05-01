#include <stdio.h>
#include <stdlib.h>

void new_pointer(int** arr) {
	arr = (int**)malloc(sizeof(int*) * A);
	for (int i = 0)
}

int main() {

	int A, B;
	int** arr1, ** arr2, ** result;
	int i, j;

	scanf("%d %d", &A, &B);

	arr1 = (int**)malloc(sizeof(int*) * A);
	for (i = 0; i < A; i++) {
		arr1[i] = (int*)malloc(sizeof(int) * B);
	}

	arr2 = (int**)malloc(sizeof(int*) * A);
	for (i = 0; i < A; i++) {
		arr2[i] = (int*)malloc(sizeof(int) * B);
	}

	result = (int**)malloc(sizeof(int*) * A);
	for (i = 0; i < A; i++) {
		result[i] = (int*)malloc(sizeof(int) * B);
	}

	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}

	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++) {
			scanf("%d", &arr2[i][j]);
		}
	}

	for (i = 0; i < A; i++) {
		for (j = 0; j < B; j++) {
			result[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d ", result[i][j]);
		}
		printf("\n");
	}

	free(arr1[0]);
	free(arr1);
	free(arr2[0]);
	free(arr2);
	free(result[0]);
	free(result);

	return 0;
}