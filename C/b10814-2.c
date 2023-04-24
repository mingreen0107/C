// 나이가 적거나 먼저 가입한 순으로 출력
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
	int age;
	char name[101];
} member;

int main() {
	int N, inputage, minage = 200, maxage = 0;
	char inputname[101] = { 0 };
	member* new_mem;

	scanf("%d", &N);
	new_mem = (member*)malloc(sizeof(member) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d %s", &inputage, inputname);
		new_mem[i].age = inputage;
		strcpy(new_mem[i].name, inputname);
	}
	for (int i = 0; i < N; i++) {
		if (new_mem[i].age <= minage) {
			minage = new_mem[i].age;
		}	
		if (new_mem[i].age >= maxage) {
			maxage = new_mem[i].age;
		}
	}
	while (minage <= maxage) {
		for (int i = 0; i < N; i++) {
			if (new_mem[i].age == minage) {
				printf("%d %s\n", new_mem[i].age, new_mem[i].name);
			}
		}
		minage++;
	}
	free(new_mem);
	return 0;
}