// 오름차순으로 정렬하기
#include <stdio.h>
#include <stdlib.h>

int main() {
    int N, temp = 0, inputN;
    //static int before[10000000]; -> 메모리 초과
	int i;
    
	scanf("%d", &N);
    int* before = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++) {
		scanf("%d", &before[i]);
	}
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - 1 - i; j++) {
            if (before[j] > before[j + 1]) {
                temp = before[j];
                before[j] = before[j + 1];
                before[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < N; i++) {
        printf("%d\n", before[i]);
    }
	return 0;
}