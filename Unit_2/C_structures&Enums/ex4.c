#include <stdio.h>
#define SIZE 10

typedef struct
{
    char name[20];
    unsigned int roll;
    float marks;
} student;

void read_students(student student_arr[])
{
    student *ptr_student = student_arr;
    printf("Enter information of students:\n");
    for (char i = 0; i < SIZE; i++)
    {
        printf("For roll number:\n");
        scanf("%u", &ptr_student->roll);
        printf("Enter name:\n");
        scanf("%s", ptr_student->name);
        printf("Enter marks:\n");
        scanf("%f", &ptr_student->marks);
        ptr_student++;
    }
}

void print_students(student student_arr[])
{
    student *ptr_student = student_arr;

    printf("Displaying information of students:\n");
    for (char i = 0; i < SIZE; i++)
    {
        printf("Information for roll number %u:\n", ptr_student->roll);
        printf("Name: %s\n", ptr_student->name);
        printf("Marks: %0.1f\n", ptr_student->marks);
        ptr_student++;
    }
}

int main()
{
    student students_arr[SIZE];

    read_students(students_arr);
    print_students(students_arr);

    return 0;
}