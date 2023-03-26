#include <stdio.h>
#include <string.h>

int main() {

    char static arr[1000000];
    int count = 0, len;
    int i = 0;

    scanf("%[^\n]", arr);

    len = strlen(arr);

    if (len == 1)
    {
        if (arr[i] == ' ')
        {
            printf("0");

            return 0;
        }
        else
        {
            printf("1");

            return 0;
        }
    }
    for (i = 1; i < len-1; i++)
    {
        if (arr[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count + 1);

    return 0;
}