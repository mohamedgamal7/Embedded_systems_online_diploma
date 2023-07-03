#include <stdio.h>

void reverse_string(char *ptr, int size)
{
    for (int i = size - 1; i >= 0; i--)
    {
        printf("%c", *(ptr + i));
    }
}

int main()
{
    char str[] = "w3eresource";
    char *ptr = str;
    int size = sizeof(str) / sizeof(str[0]);
    reverse_string(ptr, size);

    return 0;
}