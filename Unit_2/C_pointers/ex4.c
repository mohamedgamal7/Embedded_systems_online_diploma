#include <stdio.h>
#define MAX_SIZE 15
int main()
{
    int arr[MAX_SIZE];
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1;
    }

    for (int i = 4; i >= 0; i--)
    {
        printf("element-%d : %d\n", i + 1, *(arr + i));
    }

    return 0;
}