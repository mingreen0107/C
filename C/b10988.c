#include <stdio.h>
#include <string.h>
//�Ӹ�������� Ȯ���ϱ�

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