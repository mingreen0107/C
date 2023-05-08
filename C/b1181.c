// �ܾ ª�� ������ ����, ������ ���ĺ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* arr1, const void* arr2)
{
	// ���� ����
	if (strlen((char*)arr1) > strlen((char*)arr2))
		return 1;
	else if (strlen((char*)arr1) < strlen((char*)arr2))
		return -1;
	// ��ҹ��� ����
	else return strcmp((char*)arr1, (char*)arr2);
}
int main()
{
	int N, length = 51;
	int i;
	char arr[20000][51] = { 0 };
	/*
	�̰� malloc���� �ְ� ���� �� �̷��� �³�

	char** arr = malloc((char*)MAX_SIZE);
	for (i = 0; i < 20000; i++)
		arr = malloc((char*)51);
	*/
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
		scanf("%s", arr[i]);

	qsort(arr, N, sizeof(arr[0]), compare);

	for (i = 0; i < N; i++) {
		// ������ҿ� ���� �ʰų� i�� N-1�� ���� ��
		if (strcmp(arr[i], arr[i + 1]) != 0 || i == N - 1)
			printf("%s\n", arr[i]);
	}
	return 0;
}