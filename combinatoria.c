#include <stdio.h>

int main(){
    int n, m, c;
    long long int N=1, M=1, r;
    printf("Ingrese número de datos: ");
    scanf("%d", &n);
    printf("Ingresar número de lugares: ");
    scanf("%d", &m);
    if(n>m){
        for (c=1; n>=c; c++){
            N=N*c;
        }
        for (c=1; m>=c; c++){
            M=M*c;
        }
        r=N/M;
        printf("%lli\n", r);  
        return 0;  
    }  
    printf("El número de datos tiene que ser mayor al número de lugares\n");
    return 0;
}