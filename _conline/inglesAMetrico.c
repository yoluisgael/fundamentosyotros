#include <stdio.h>
#include <math.h>

int main(int argc, char *argv[]) {
    float ft, lb, m, kg, price;

    printf("Ingrese los datos del objeto: ");
    scanf("%f %f", &ft, &lb);

    m = ft * 0.3048;
    kg = lb * 0.453592;
    price = (ceil(lb/3))*5;

    printf("\nDatos del objeto \nLongitud: %5.2f m \t Peso: %5.2f kg\nPrecio: US$%.0f\n", m, kg, price);

    return 0;
}