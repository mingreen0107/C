#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* arr1, const void* arr2)
{
	if (strlen((const char*)arr1) > strlen((const char*)arr2))
		return 1;
	else if (strlen((const char*)arr1) < strlen((const char*)arr2))
		return -1;

	else return strcmp((char*)arr1, (char*)arr2);
}
int main(void)
{
	int N, length = 51;
	int i;
	char arr[20000][51] = { 0 };
	scanf("%d", &N);

	for (i = 0; i < N; i++)
		scanf("%s", arr[i]);

	qsort(arr, N, sizeof(arr[0]), compare);

	for (i = 0; i < N; i++) {
		if (strcmp(arr[i], arr[i + 1]) != 0 || i == N - 1)
			printf("%s\n", arr[i]);
	}
	return 0;
}