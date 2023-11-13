#include <stdio.h>
int a, b, x;
int leer_num();
void verificar();

int main(){
    a = leer_num();
    b = leer_num();
    x = leer_num();
    verificar();

    return(0);
}

int leer_num(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    return(num);
}

void verificar(){
    if (x >= a && x < b){
        printf("El numero x es mayor o igual que el numero a y al mismo tiempo estrictamente menor que b.");
    }
    else{
        printf("El numero x NO cumple las condiciones.");
    }
}
