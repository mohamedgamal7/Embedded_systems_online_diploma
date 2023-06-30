#include <stdio.h>

typedef struct
{
    char name[20];
    unsigned int roll;
    float marks;
} student;

void read_student(student *a_student)
{
    printf("Enter name: ");
    scanf("%s", a_student->name);
    printf("Enter roll number: ");
    scanf("%u", &a_student->roll);
    printf("Enter marks: ");
    scanf("%f", &a_student->marks);
}

void print_student(student *a_student)
{
    printf("Displaying information:");
    printf("name: %s\n", a_student->name);
    printf("Roll: %u\n", a_student->roll);
    printf("Marks: %f\n", a_student->marks);
}

int main()
{
    student s1;
    student *p_s1 = &s1;
    read_student(p_s1);
    print_student(p_s1);

    return 0;
}