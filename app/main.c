#include <stdio.h>

#include "myfunc.h"

int main()
{
    double *roots;
    double *roots = malloc(2 * sizeof(double));
    
    printf("Enter number\n");
    double n = 0;
    if (scanf("%lf", &n) != 1) {
        printf("Enter correct number!\n");
        return 1;
    }

    if (n < 0) {
        printf("Enter non-negative number!\n");
        return 1;
    }
    printf("Fibonachi %d\n", fibonachi(n));
    printf("Enter a, b, c\n");
    double a = 0;
    if (scanf("%lf", &a) != 1) {
        printf("Enter correct number!\n");
        return 1;
    }
    double b = 0;
    if (scanf("%lf", &b) != 1) {
        printf("Enter correct number!\n");
        return 1;
    }
    double c = 0;
    if (scanf("%lf", &c) != 1) {
        printf("Enter correct number!\n");
        return 1;
    }
    roots = realQuadraticRoots(a, b, c);
    printf("ROOT1 %f\n", roots[0]);
    printf("ROOT2 %f\n", roots[1]);
    free(roots);
}
