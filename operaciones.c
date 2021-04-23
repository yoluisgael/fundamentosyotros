#include <stdio.h>
#include <stdlib.h>

int
main()
{
    int num, denom;
    float res;
    printf("Ingrese numerador: ");
    scanf("%d", &num);
    printf("\nIngrese denominador: ");
    scanf("%d", &denom);
    res=(float)num/denom;
    printf("El cociente de %d/%d es: %.1f\n", num, denom, res);
    return 0;
}