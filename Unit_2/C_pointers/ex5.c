#include <stdio.h>

typedef struct
{
    char name[20];
    unsigned int ID;
} employee;

int main()
{
    employee e1 = {"Alex", 1002};
    employee e2 = {"Samy", 1022};

    employee *arr_ptr[] = {&e1, &e2};
    employee *(*ptr)[] = &arr_ptr; // pointer to an array of pointer to employee

    // printing elements through the pointer to array
    for (int i = 0; i < 2; i++)
    {
        printf("employee #%d\n", i);
        printf("name: %s\n", (**(*ptr + i)).name);
        printf("ID: %d\n", (**(*ptr + i)).ID);
    }

    return 0;
}