#include <stdio.h>
#include <stdlib.h>

void alone(int* arr, int N) {
	int i, front;

	for (i = 0; i < N; i++)
		arr[i] = i + 1;

	while (N != 1) {
		N -= 1;
		for (i = 0; i < N; i++) {
			arr[i] = arr[i + 1];
			front = arr[0];
		}
		for (i = 0; i < N; i++) {
			if (i == N - 1)
				arr[i] = front;
			else
				arr[i] = arr[i + 1];
		}
	}
	printf("%d", arr[0]);
}

int main() {

	int N;

	scanf("%d", &N);

	int* arr = (int*)malloc(sizeof(int)*N);

	alone(arr, N);

	free(arr);

	return 0;
}