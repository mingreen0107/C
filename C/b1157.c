#include <stdio.h>
#include <string.h>

int main() {

	char arr[1000000] = { 0 };
	char abc[26] = { 0 };
	int check[26] = { 0 };
	int count = 0, len, a, max = 0, checkN = 0;
	int i, j;

	for (i = 0, a = 'a'; i < 26; i++)
	{
		abc[i] = a++;
	}
	scanf("%s", arr);

	len = strlen(arr);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < 26; j++)
		{
			if (arr[i] == abc[j] || arr[i]+32 == abc[j])
			{
				check[j]++;
				break;
			}
		}
	}
	for (i = 0; i < 26; i++)
	{
		if (checkN < check[i])
		{
			j = i;
			max = j;
			checkN = check[i];
		}
	}
	for (j = 0; j < 26; j++)
	{
		if (checkN == check[j])
			count++;
	}
	if (count == 1)
		printf("%c", abc[max]-32);
	else
		printf("?");

	return 0;
}