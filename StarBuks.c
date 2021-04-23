#include <stdio.h>
#define SALIR 5

int main(){
    int opcion, tamaño, crema;
    int a=0;
    int fin = !SALIR;
    float total=0, pago=0, pago_extra;
    int cjavachip=0, cyogurth=0, ctermo=0, cvaso=0, ccrema=0;
    while(fin != SALIR){
        printf("\n\nBIENVENIDO A STARBUKS\n");
        printf("\t\t\tTamaño");
        printf("\nBEBIDAS\t\t\tCh\tMd\tGr");
        printf("\n=============================================");
        printf("\n1. Javachip\t\t$56\t$85\t$94");
        printf("\n2. Yogurth Frapuccino\t$54\t$81\t92.52");
        printf("\n=============================================");
        printf("\nARTÍCULOS ESPECIALES\tPRECIO");
        printf("\n=============================================");
        printf("\n3. Termo Conmemorativo\t$620");
        printf("\n4. Vaso Conmemorativo\t$620");
        printf("\nSi no agregar nada, presione cualquier otra tecla");
        printf("\n¿Qué desea ordenar?: ");
        scanf("%d", &opcion);
        switch(opcion){
            case 1:
            printf("\n¿Qué tamaño?\n1. Chico\t2. Mediano\t3. Grande\nTamaño: ");
            scanf("%d", &tamaño);
            switch(tamaño){
                case 1:
                total+=56;
                a=1;
                break;
                case 2:
                total+=85;
                a=1;
                break;
                case 3:
                total+=94;
                a=1;
                break;
                default:
                printf("Opción no válida");
            }
            if(a==1){
                printf("\n¿Desea agregar crema batida por $10?\n1.Sí 2.No: ");
                scanf("%d", &crema);
                if(crema==1){
                    total+=10;
                    ccrema++;
                }
            }
            cjavachip++;
            a=0;
            break;

            case 2:
            printf("\n¿Qué tamaño?\n1. Chico\t2. Mediano\t3. Grande\nTamaño: ");
            scanf("%d", &tamaño);
            switch(tamaño){
                case 1:
                total+=54;
                a=1;
                break;
                case 2:
                total+=81;
                a=1;
                break;
                case 3:
                total+=92.52;
                a=1;
                break;
                default:
                printf("Opción no válida");
            }
            if(a==1){
                printf("\n¿Desea agregar crema batida por $10?\n1.Sí 2.No: ");
                scanf("%d", &crema);
                if(crema==1){
                    total+=10;
                    ccrema++;
                }
            }
            a=0;
            cyogurth++;
            break;

            case 3:
            total+=620;
            ctermo++;
            break;
            case 4:
            total+=620;
            cvaso++;
            break;
            default:
            fin=SALIR;
            break;
        }
    }
    printf("\n\n\n=============================================");
    printf("\nARTÍCULOS \tCantidad");
    printf("\n=============================================");
    printf("\nJavachip\t%d", cjavachip);
    printf("\nYogurth\t\t%d", cyogurth);
    printf("\nCrema\t\t%d", ccrema);
    printf("\nTermo Conm.\t%d", ctermo);
    printf("\nVaso Conm.\t\t%d", cvaso);
    printf("\n\t   Total: %.2f", total);
    printf("\n¿Con cuánto desea pagar?: ");
    scanf("%f", &pago);
    while(pago<total){
        printf("Le hacen falta $%.2f", total-pago);
        printf("Por favor haga otro pago para completar: ");
        scanf("%f", &pago_extra);
        pago+=pago_extra;
    }
    printf("\n¡Gracias por su compra!\nVuelva Pronto :)\n");
    if(pago-total!=0){
        printf("Su cambio es de $%.2f\n", pago-total);
    }
    return 0;
}