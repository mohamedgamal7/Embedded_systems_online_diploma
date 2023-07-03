#include <stdio.h>
#define alphabet_size 26

int main()
{
    char letter = 'a';
    char *ptr_to_aphabet = &letter;
    for (int i = 0; i < alphabet_size; i++)
    {
        printf("%c\n", (*ptr_to_aphabet)++);
    }

    return 0;
}