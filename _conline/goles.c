#include <stdio.h>
int main() {
    int var1, var2, diff;
    printf("Input Barcelona goals: ");
    scanf("%d", &var1);
    printf("Input PSG goals: ");
    scanf("%d", &var2);
    if (var1 != var2) {
        printf("They did not get tied !\n");
        if (var1 > var2){
            diff=var1-var2;
            printf("Barza won by %d goals\n", diff);
        }
        else{
            diff=var2-var1;
            printf("PSG won by %d goals\n", diff);
        }
    }
    else{
    printf("Tie\n");
    }
    return 0;
}
