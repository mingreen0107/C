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
		//¦���� �������� �����ֱ� ����
		j = 2;

		//�Ҽ��� �����ϱ� ����
		while (1)
		{
			//-1�ϴ� ������ inputN[i]�� ���� ���� �Ҽ����� Ȯ���� ����� �ϱ� ������ ����
			if (j <= inputN[i] - 1)
			{
				//����� �ڽŰ� 1���� �ٸ� ���� ���� �� ��������
				if (inputN[i] % j == 0)
					break;
				//�ƴ� �� j�� �÷��־� �ٸ� ��� Ȯ��
				else
					j++;
			}
			else
			{
				//1�� 2�� ���� �Ŀ��� �ɷ����� �ʾƼ� ���� �ɷ���
				if (inputN[i] == 1 || inputN[i]== 2)
					break;
				//���� ���ǿ� �� ���� �� �Ҽ��� �����̹Ƿ� count
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