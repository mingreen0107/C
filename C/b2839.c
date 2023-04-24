// 주어진 숫자에서 3, 5를 나누고 몫의 합이 제일 작은거 구하기
#include <stdio.h>

int check3_bag(int N) {
	if (N % 3 != 0)
		return -1;
	else
		return N / 3;
}

int check5_bag(int N) {
	int share, rest, bag;

	if (N < 5)
		if (N % 3 != 0)
			return -1;
		else
			return 1;
	else {
		if (N % 5 != 0) {
			bag = N / 5;
			rest = N % 5;
			if (rest == 3)
				return bag + 1;
			else
				return -1;
		}
		else
			bag = N / 5;
		return bag;
	}
}

int main() {
	
	int N, bag1, bag2;

	scanf("%d", &N);

	bag1 = check3_bag(N);
	bag2 = check5_bag(N);
	if (bag1 <= bag2)
		printf("%d", bag1);
	else {
		if (bag2 == -1)
			printf("%d", bag1);
		else
			printf("%d", bag2);
	}
		

	return 0;
}