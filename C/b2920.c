#include <stdio.h>

int main() {

	int inputN[8] = { 0, };
	int check = 0;
	int i;

	for (i = 0; i < 8; i++)
	{
		scanf("%d", &inputN[i]);
	}
	for (i = 0; i < 8; i++)
	{
		if (inputN[i] == i + 1)
			check += 1;
		else if (inputN[i] == 8 - i)
			check -= 1;
		else
			check += 100;
	}
	if (check == 8)
		printf("ascending");
	else if (check == -8)
		printf("descending");
	else
		printf("mixed");

	return 0;
}