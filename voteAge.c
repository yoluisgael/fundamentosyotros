#include <stdio.h>

int main(){
    int _age;
    printf("Enter your age: ");
    scanf("%d", &_age);
    if(_age >= 18){
        printf("You are eligible for voting\n");
    }
    else{
        printf("You are not eligible for voting\n");
    }
    return 0;
}