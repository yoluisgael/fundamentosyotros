#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define SALIR 6
#define SALDO_MAX 1000

 int main(){
    float saldo = 0;
    int opcion = !SALIR, _MB=0, opcion2, recarga;
    // QUE SE REPITA  QUE SE REPITA   QUE SE REPITA    
    while ( opcion != SALIR )  {
        printf("\n=====================================================");
        printf("\n1. Ingresar ficha");
        printf("\n2. Llamar (5 pesos la llamada) \n3. Enviar SMS (1 peso el mensaje)");
        printf("\n4. Escuchar canción (4MB) \n5. Ver película 720p (1GB)");
        printf("\n6. Ver saldo   7. Ver megas   \n8. Finalizar");
        printf("\n=====================================================");
        printf("\nElige opción: ");
        scanf("%d", &opcion);
        switch(opcion){
                case 1: 
                printf("\n1. $50  y 500MB  2. $80  y 700MB");
                printf("\n3. $100 y 1600MB 4. $150 y 2500MB");
                printf("\n5. $200 y 3500MB 6. $300 y 5000MB");
                printf("\n7. $500 y 8000MB 8. Regresar");
                if(saldo>=500){
                        printf("\nSaldo máximo = $1000 (Consecuentes recargas para MB)\nSaldo = %4.2f", saldo);
                }
                printf("\nFicha de: ");
                scanf("%d", &opcion2);
                switch(opcion2){
                        case 1:
                        saldo = saldo + 50;
                        _MB += 500;
                        recarga=50;
                        break;
                        case 2:
                        saldo = saldo + 80;
                        _MB += 700;
                        recarga=80;
                        break;
                        case 3:
                        saldo = saldo + 100;
                        _MB += 1600;
                        recarga=100;
                        break;
                        case 4:
                        saldo = saldo + 150;
                        _MB += 2500;
                        recarga=150;
                        break;
                        case 5:
                        saldo = saldo + 200;
                        _MB += 3500;
                        recarga=200;
                        break;
                        case 6:
                        saldo = saldo + 300;
                        _MB += 5000;
                        recarga=300;
                        break;
                        case 7:
                        saldo = saldo + 500;
                        _MB += 8000;
                        recarga=500;
                        break;
                        default:
                        recarga=0;
                        break;
                }
                if(saldo>1000){
                        saldo=SALDO_MAX;
                }
                printf("\nAbonado %d pesos, Saldo = $%4.2f, MB = %d", recarga, saldo, _MB);
                break;
                case 2: 
                if(saldo>=5){
                        saldo -= 5;
                        printf("\nLlamada realizada, Saldo = %4.2f, MB = %d", saldo, _MB);
                } else {
                        printf("\nSaldo insuficiente, realice una recarga");
                }
                break;    
                case 3:
                if(saldo>=1){
                        saldo -= 1;
                        printf("\nMensaje enviado, Saldo = %4.2f, MB = %d", saldo, _MB);    
                } else {
                        printf("\nSaldo insuficiente, realice una recarga");
                }
                break;
                case 4:
                if(_MB<4){
                        printf("\nMB insuficientes, realice una recarga");
                } else{
                        _MB-=4;
                        printf("\nCanción escuchada, Saldo = %4.2f, MB = %d", saldo, _MB);
                }
                break;
                case 5:
                if(_MB<1024){
                        printf("\nMB insuficientes, realice una recarga");
                } else{
                        _MB-=1024;
                        printf("\nPelícula vista, Saldo = %4.2f, MB = %d", saldo, _MB);
                }
                break;
                case 6:
                printf("\nSaldo = %4.2f", saldo);
                break;
                case 7:
                printf("\nMB = %d", _MB);
                break;
                case 8:
                printf("\n¡ Hasta pronto !\n");
                opcion = SALIR;
                break;
                default: 
                printf("\nOpción no válida \a");
                break;
                }
        } 
        return 0;
 }
