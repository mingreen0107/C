#include <stdio.h>
#include <string.h>


int main() {

    char arr[1000000];
    int i, count = 0, len;

    scanf_s("%[^\n]", arr);

    len = strlen(arr);

    for (i = 0; i < len; i++)
    {
        if (arr[i] == ' ')
        {
            count++;
        }
    }
    printf("%d", count + 1);

    return 0;
}