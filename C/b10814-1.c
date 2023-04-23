// 나이가 적거나 먼저 가입한 순으로 출력
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
	struct member* prev;
	int age;
	char name[100];
	struct member* next;
} member;

member* new_member() {
	member* new = (member*)malloc(sizeof(member));
	new->next = NULL;
	new->prev = NULL;

	return new;
}
void init(member* head, member* tail) {
	head->next = tail;
	tail->next = head;
	head->prev = tail;
	tail->prev = head;
}
member* connect_member(member* new, int inputage, char* inputname) {
	member* new_member = (member*)malloc(sizeof(member));
	new_member->prev = new;
	new->next = new_member;
	new_member->age = inputage;
	strcpy(new_member->name, inputname);

	return new_member;
}
member* remove_head_tail(member* head, member* tail) {
	head->next->prev = tail->prev;
	tail->prev->next = head->next;
	member* only_member = head->next;

	return only_member;
}
void delete(member* delete_member) {
	delete_member->prev->next = delete_member->next;
	delete_member->next->prev = delete_member->prev;
	free(delete);
}

int main() {
	int N, inputage;
	char inputname[100];
	member* head = new_member;
	member* tail = new_member;
	member* new, * only_member;

	inti(head, tail);
	new = head;

	scnaf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d %s", inputage, inputname);
		connect_member(new, inputage, inputname);
	}
	new->next = tail;
	tail->prev = new;
	only_member = remove_head_tail(head, tail);
	free(head);
	free(tail);

	while (only_member->next != NULL) {
		if()
	}

	return 0;
}