#include <stdio.h>

int main()
{
    int titular1=1,
        titular2=2,
        numusuario1=1234,
        numusuario2=5678,
        nip1=1999,
        nip2=2004,
        resp,
        usuario,
        estado,
        estado1=0,
        estado2=0;
    printf("Bienvenido al cajero ATM BBVA");
    printf("\nBuen día");
    printf("\n=============================");
    printf("\nEs usted titular de un número de usuario?\n1.Sí 2.No\n");
    scanf("%d", &resp);
    if(resp==1){
        printf("\nIngresar número de usuario: ");
        scanf("%d", &usuario);
        if(usuario == numusuario1 || usuario == numusuario2){
            printf("\nIngrese su NIP: ");
            scanf("%d", &resp);
            if ((usuario==numusuario1&&resp==nip1)||(usuario==numusuario2&&resp==nip2)){
                printf("\n¿Qué desea hacer?\n1.Depositar 2.Retirar 3.Transacción\n");
                scanf("%d", &resp);
                    switch (resp){
                        case 1:
                        printf("¿Cuánto desea depositar?\n");
                        scanf("%d", &resp);
                        estado=estado1+resp;
                        printf("Estado de cuenta= $%d\n", estado);
                        return 0;
                            break;
                        case 2:
                        printf("¿Cuánto desea retirar?\n");
                        scanf("%d", &resp);
                        estado=estado1-resp;
                        printf("Estado de cuenta= $%d\n", estado);
                        return 0;
                            break;
                        
                        default:
                            printf("Transacciones no disponibles por el momento\n");
                            return 0;
                            break;
                    }
            }
            printf("Ratero\n");
            return 0;
        }
        printf("Usuario no encontrado\n");
        return 0;
    }
    printf("Favor de conseguir número de usuario\n");
    return 0;
}
