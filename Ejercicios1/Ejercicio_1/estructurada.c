#include <stdio.h>
int a;
int leer_a();
void calc_cubo();

int main(){
    a = leer_a();
    calc_cubo();

    return(0);
}

int leer_a(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    return(num);
}

void calc_cubo(){
    int cubo = a * a * a;
    printf("El cubo del numero %d es: %d", a, cubo);
}
