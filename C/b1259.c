#include <stdio.h>
#include <string.h>

int main() {

	int n = 0, len, count;
	char num[10000] = { 0 };
	char numc[10000] = { 0 };
	int i;

	while (scanf("%d", &n) != 0)
	{
		if (n == 0)
		{
			break;
		}
		//n�� ���ڿ��� ��ȯ
		sprintf(num, "%d", n);

		len = strlen(num);
		count = 0;

		//���ڿ��� ���� n�� �Ųٷ� �����ϴ� �Լ�
		for (i = 0; i < len; i++)
		{
			numc[len - 1 - i] = num[i];
		}
		for (i = 0; i < len; i++)
		{
			if (numc[i] == num[i])
			{
				count++;
			}
		}
		if (count == len)
		{
			printf("yes");
			printf("\n");
		}
		else
		{
			printf("no");
			printf("\n");
		}
	}
	return 0;
}