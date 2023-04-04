#include <stdio.h>

int main() {

	int N, count = 0;
	int inputN[100] = { 0 };
	int i, j;

	scanf("%d", &N);

	for (i = 0; i < N; i++)
	{
		scanf("%d", &inputN[i]);
	}
	for (i = 0; i < N; i++)
	{
		//짝수를 시작으로 나눠주기 위해
		j = 2;

		//소수를 구분하기 위해
		while (1)
		{
			//-1하는 이유는 inputN[i]가 같을 때는 소수인지 확인을 해줘야 하기 때문에 빼줌
			if (j <= inputN[i] - 1)
			{
				//약수가 자신과 1말고 다른 것이 있을 시 빠져나옴
				if (inputN[i] % j == 0)
					break;
				//아닐 시 j를 늘려주어 다른 약수 확인
				else
					j++;
			}
			else
			{
				//1과 2는 위의 식에서 걸러지지 않아서 따로 걸러줌
				if (inputN[i] == 1 || inputN[i]== 2)
					break;
				//뭐든 조건에 안 맞을 시 소수의 조건이므로 count
				else
				{
					count++;
					break;
				}
			}
		}
	}
	printf("%d", count);

	return 0;
}