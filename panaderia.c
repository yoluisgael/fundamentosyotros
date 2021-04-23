#include <stdio.h>
#include <stdlib.h>
int main(){
    float $bolillo = 1.50, $Concha=2.5, $chocolatin=10, $oreja=5, $piedra=7;
    short num_bolillos, numConchas, num_chocolatines, num_orejas, num_piedras;
    float total = 0,
          cantidadPagada,
          cambio;

    printf("\nPANADERÍA LA ESPERANZA\n\n");
    printf("Bolillo    $  1.50\t");
    printf("Concha     $  2.50\n");
    printf("Chocolatin $ 10.00\t");
    printf("Oreja      $  5.00\n");
    printf("Piedra     $  7.00\n\n");
    printf("Cuántos bolillos?: ");
    scanf("%hd", &num_bolillos);
    printf("Cuántas conchas?: ");
    scanf("%hd", &numConchas);
    printf("Cuántos chocolatines?: ");
    scanf("%hd", &num_chocolatines);
    printf("Cuántas orejas?: ");
    scanf("%hd", &num_orejas);
    printf("Cuántas piedras?: ");
    scanf("%hd", &num_piedras);

    // Operaciones para calcular el total
    total=(num_bolillos*$bolillo)+(numConchas*$Concha)+(num_chocolatines*$chocolatin)+(num_orejas*$oreja)+(num_piedras*$piedra);
    printf("\nSu total es de : $%.2f", total);

    printf("\nCon cuanto va a pagar? ");
    scanf("%f", &cantidadPagada);

    if(cantidadPagada>=total){
       cambio = cantidadPagada - total;
       
       printf("  PANADERÍA LA ESPERANZA\n\n");
       printf("%hd bolillo      1.50   %.2f\n", num_bolillos, num_bolillos*$bolillo);
       printf("%hd concha       2.50   %.2f\n", numConchas, numConchas*$Concha);
       printf("%hd chocolatin  10.00  %.2f\n", num_chocolatines, num_chocolatines*$chocolatin);
       printf("%hd oreja        5.00   %.2f\n", num_orejas, num_orejas*$oreja);
       printf("%hd piedra       7.00   %.2f\n", num_piedras, num_piedras*$piedra);
       printf("---------------------------\n");
       printf("            Total :  $%.2f\n", total);
       printf("            Pagado:  $%.2f\n", cantidadPagada);
       printf("            Cambio:  $%.2f\n", cambio);
       printf("\nHasta luego, vuelva pronto!\n\n");
       return 0;
    }
    cambio=total-cantidadPagada;
    printf("Le hace falta pagar $%.2f\n", cambio);
    return 0;
}