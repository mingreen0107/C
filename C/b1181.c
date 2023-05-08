// 단어가 짧은 순으로 정렬, 같으면 알파벳순
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void* arr1, const void* arr2)
{
	// 길이 구분
	if (strlen((char*)arr1) > strlen((char*)arr2))
		return 1;
	else if (strlen((char*)arr1) < strlen((char*)arr2))
		return -1;
	// 대소문자 구분
	else return strcmp((char*)arr1, (char*)arr2);
}
int main()
{
	int N, length = 51;
	int i;
	char arr[20000][51] = { 0 };
	/*
	이거 malloc으로 주고 싶을 땐 이렇게 맞나

	char** arr = malloc((char*)MAX_SIZE);
	for (i = 0; i < 20000; i++)
		arr = malloc((char*)51);
	*/
	scanf("%d", &N);
	
	for (i = 0; i < N; i++)
		scanf("%s", arr[i]);

	qsort(arr, N, sizeof(arr[0]), compare);

	for (i = 0; i < N; i++) {
		// 다음요소와 같지 않거나 i가 N-1과 같을 때
		if (strcmp(arr[i], arr[i + 1]) != 0 || i == N - 1)
			printf("%s\n", arr[i]);
	}
	return 0;
}