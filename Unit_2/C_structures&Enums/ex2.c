#include <stdio.h>

typedef struct
{
    unsigned int feet;
    double inch;

} distance;

void add_distances(distance *a, distance *b)
{
    printf("Enter information for 1st distance:\n");
    printf("Enter feet: ");
    scanf("%u", &a->feet);
    printf("Enter inch: ");
    scanf("%lf", &a->inch);

    printf("Enter information for 2nd distance:\n");
    printf("Enter feet: ");
    scanf("%u", &b->feet);
    printf("Enter inch: ");
    scanf("%lf", &b->inch);

    unsigned int sum_feet;
    double sum_inches;
    sum_inches = a->inch + b->inch;
    sum_feet = a->feet + b->feet;

    while (sum_inches >= 12.0)
    {
        sum_feet++;
        sum_inches -= 12;
    }

    printf("Sum of distances=%u'-%0.1f\"", sum_feet, sum_inches);
}

int main()
{
    distance a, b;
    distance *p_a = &a;
    distance *p_b = &b;

    add_distances(p_a, p_b);
    return 0;
}