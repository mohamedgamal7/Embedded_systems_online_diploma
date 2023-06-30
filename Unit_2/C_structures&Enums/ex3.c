#include <stdio.h>

typedef struct
{
    float R;
    float I;
} complex;

void add_complex(complex *a, complex *b)
{
    printf("For 1st complex number:\n");
    printf("Enter real and Imaginaary respectively: ");

    scanf("%f %f", &a->R, &a->I);

    printf("For 2nd complex number:\n");
    printf("Enter real and Imaginaary respectively: ");
    scanf("%f %f", &b->R, &b->I);

    printf("Sum=%0.1f+%0.1fi", a->R + b->R, a->I + b->I);
}

int main()
{
    complex a, b;
    complex *p_a = &a;
    complex *p_b = &b;
    add_complex(p_a, p_b);

    return 0;
}