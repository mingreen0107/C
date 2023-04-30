#include <stdio.h>

int check3_bag(int N) {
	int share = 0;

	for (int i = 0; ; i++) {
		for (int j = 0; ; j++) {
			if (5 * i + 3 * j == N)
				share = i + j;
		}
	}
}
int check5_bag(int N) {
	
}

int main() {

	int N;

	scanf("%d", &N);

	check3_bag(N);


	return 0;
}