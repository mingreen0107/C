// �־��� ���ڿ��� 3, 5�� ������ ���� ���� ���� ������ ���ϱ�
#include <stdio.h>

int check_bag(int N) {

	if (N < 5)
		if (N % 3 != 0)
			return -1;
		else
			return 1;
	else {

	}

	
	
}

int main() {
	
	int N, bag;

	scanf("%d", &N);

	bag = check_bag(N);
	printf("%d", bag);

	return 0;
}