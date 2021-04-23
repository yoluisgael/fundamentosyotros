#include <stdio.h>
#include <math.h>

int main(){
    int x1, x2, y1, y2, d;
    printf("\nIngrese coordenadas (x,y) del primer punto: ");
    scanf("%d %d", &x1, &y1);
    printf("\nIngrese coordenadas (x,y) del segundo punto: ");
    scanf("%d %d", &x2, &y2);
    d=sqrt(pow(x2-x1, 2)+pow(y2-y1, 2));
    printf("%d\n", d);
}