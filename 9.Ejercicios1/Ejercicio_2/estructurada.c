#include <stdio.h>
int a,b,c;
int leer_num();
void calc_suma();

int main(){
    a = leer_num();
    b = leer_num();
    c = leer_num();
    calc_suma();

    return(0);
}

int leer_num(){
    int num;
    printf("Ingrese un numero: ");
    scanf("%d", &num);

    return(num);
}

void calc_suma(){
    printf("La suma de los numero %d, %d , %d es: %d", a, b, c, a + b + c);
}
