#include <stdio.h>
#include <math.h>

int main(){
    double a, b, c, x1, x2;
    printf("Ingrese a, b y c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if(a==0){
        x1=(-c)/b;
        printf("x=%0.lf\n", x1);
        return 0;
    }
    x1=(-b+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    x2=(-b-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    if(pow(b,2)-(4*a*c)>0){
        printf("x1=%0.lf\nx2=%0.lf\n", x1, x2);
        return 0;
    }
    if(pow(b,2)-(4*a*c)==0){
        x1=b/2*a;
        printf("x=%0.lf\n", x1);
        return 0;
    }
    printf("No tiene soluciones reales\n");
    return 0;
}
