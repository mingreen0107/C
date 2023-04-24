// 주어진 숫자에서 3, 5를 나누고 몫의 합이 제일 작은거 구하기
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