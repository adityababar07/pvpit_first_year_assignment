#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double a,b;
    double c;
    printf("Enter the first number: \t");
    scanf("%lf", &a);
    printf("Enter the second number: \t");
    scanf("%lf", &b);

    printf("addition for no.s = %lf\n", a+b);
    printf("substraction for no.s = %lf\n", a-b);    
    printf("multiplication for no.s = %lf\n", a*b);
    c = a/b;
    printf("division for no.s = %lf\n", c);

    // You need to link with the standard math library:
    // gcc t1.c -o t1 -lm
    
    c = fmod(a, b);
    printf("reminder for no.s = %lf\n", c);

    return 0;
}
