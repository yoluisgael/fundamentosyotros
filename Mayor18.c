#include <stdio.h>

int main(){
    int edad;
    printf("Ingresar edad: ");
    scanf("%d", &edad);
    if (edad>18){
        printf("Mayor de edad\n");
    }
    else{
    printf("Menor de edad\n");
    }
    return 0;
}