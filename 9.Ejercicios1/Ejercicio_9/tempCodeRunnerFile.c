#include <stdio.h>
int num1;
int leer_num();
void calc_factorial();

int main(){
    num1 = leer_num();
    calc_factorial();
    return(0);
}

int leer_num(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    return(num);
}

void calc_factorial(){
    int factorial = 1;
    for (int i = 1; i <= num1; i++){
        factorial = factorial * i;
    }
    printf("El factorial de %d es: %d.", num1, factorial);
}