#include <stdio.h>

int main()
{
    int m = 29;

    printf("Address of m: 0X%x\n", &m);
    printf("Value of m: %d\n", m);

    int *ab = &m;
    printf("Now ab is assigned with the addresss of m\n");
    printf("Address stored in pointer AB: 0X%x\n", ab);

    m = 34;
    printf("The value of m assigned to 34 now\n");
    printf("Address stored in pointer ab: 0X%x\n", ab);
    printf("content of ab: %d\n", *ab);

    *ab = 7;
    printf("Address of m: 0X%x\n", &m);
    printf("Value of m :%d\n", m);

    return 0;
}