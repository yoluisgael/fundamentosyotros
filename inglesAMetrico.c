#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
    float ft, lb, m, kg;

    printf("Ingrese los datos del objeto: ");
    scanf("%f %f", &ft, &lb);

    m = ft * 0.3048;
    kg = lb * 0.453592;

    printf("\nDatos del objeto \nLongitud: %5.2f \t Peso: %5.2f\n", m, kg);

    return 0;
}