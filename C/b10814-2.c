// 나이가 적거나 먼저 가입한 순으로 출력
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
	int age;
	char name[100];
} member;

int main() {
	int N, inputage, minage = 200, maxage = 0;
	char inputname[100] = { 0 };
	member* new;

	scanf("%d", &N);
	new = (member*)malloc(sizeof(member) * N);

	for (int i = 0; i < N; i++) {
		scanf("%d %s", &inputage, inputname);
		new[i - 1].age = inputage;
		strcpy(new[i - 1].name, inputname);
	}
	for (int i = 0; i < N; i++) {
		if (new[i - 1].age <= minage) {
			minage = new[i - 1].age;
		}
		if (new[i - 1].age >= maxage) {
			maxage = new[i - 1].age;
		}
	}
	while (minage != maxage) {
		for (int i = 0; i < N; i++) {
			if (new[i - 1].age == minage) {
				printf("%d %s", new[i - 1].age, new[i - 1].name);
				printf("\n");
			}
		}
		minage++;
	}
	for (int i = 0; i < N; i++) {
		if (new[i - 1].age == maxage) {
			printf("%d %s", new[i - 1].age, new[i - 1].name);
			printf("\n");
		}
	}
	return 0;
}