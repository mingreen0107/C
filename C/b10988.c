#include <stdio.h>
#include <string.h>
//팰린드롬인지 확인하기

int main() {

	char inputE[100] = { 0 };
	int len, lens, cnt = 0;
	int i;

	scanf("%s", inputE);

	len = strlen(inputE);
	lens = len - 1;

	for (i = 0; i < len / 2; i++)
	{
		if (inputE[i] == inputE[lens])
		{
			lens--;
			cnt++;
		}
		else
		{
			break;
		}
	}
	if (cnt == len / 2)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}