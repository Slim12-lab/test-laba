#include <stdio.h>

#include "myfunc.h"

int main()
{
    double *roots;

    printf("Enter number\n");
    double n = 0;
    scanf("%lf", &n);
    printf("SQRT %f\n", my_sqrt(n));
    printf("Fibonachi %d\n", fibonachi(n));
    printf("SQRT Fibonachi %f\n", my_sqrt(fibonachi(n)));
    printf("Enter a, b, c\n");
    double a = 0;
    scanf("%lf", &a);
    double b = 0;
    scanf("%lf", &b);
    double c = 0;
    scanf("%lf", &c);
    roots = realQuadraticRoots(a, b, c);
    printf("ROOT1 %f\n", roots[0]);
    printf("ROOT2 %f\n", roots[1]);
    free(roots);
}
