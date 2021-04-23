#include <stdio.h>
#include <stdlib.h>
int main() {
    char name[100], appellido[100];
    printf("Ingresar nombres: ");
    gets(name);
    printf("Ingresar apellidos: ");
    gets(appellido);
    printf("Nombre feliz= %s %s :)\n", name, appellido);
    return 0;
}