#include <stdio.h>
#define PI 3.141592654
#define area(r) ((PI * r * r))

int main()
{
    unsigned int r;
    printf("ENter the radius:");
    scanf("%u", &r);
    printf("Area=%0.2f", area(r));

    return 0;
}