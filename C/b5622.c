#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	char arr[15] = { 0 };
	int sum = 0;
	int i;

	scanf("%s", arr);

	for (i = 0; i < 15; i++)
	{
		if (arr[i] == 'A' || arr[i] == 'B' || arr[i] == 'C')
			sum += 3;
		else if (arr[i] == 'D' || arr[i] == 'E' || arr[i] == 'F')
			sum += 4;
		else if (arr[i] == 'G' || arr[i] == 'H' || arr[i] == 'I')
			sum += 5;
		else if (arr[i] == 'J' || arr[i] == 'K' || arr[i] == 'L')
			sum += 6;
		else if (arr[i] == 'M' || arr[i] == 'N' || arr[i] == 'O')
			sum += 7;
		else if (arr[i] == 'P' || arr[i] == 'Q' || arr[i] == 'R' || arr[i] == 'S')
			sum += 8;
		else if (arr[i] == 'T' || arr[i] == 'U' || arr[i] == 'V')
			sum += 9;
		else if (arr[i] == 'W' || arr[i] == 'X' || arr[i] == 'Y' || arr[i] == 'Z')
			sum += 10;	
	}
	printf("%d", sum);

	return 0;
}