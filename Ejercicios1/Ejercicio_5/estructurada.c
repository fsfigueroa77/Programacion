#include <stdio.h>
int num1, num2;
int leer_num();
void max2();

int main(){
    num1 = leer_num();
    num2 = leer_num();
    max2();

    return(0);
}

int leer_num(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    return(num);
}

void max2(){
    if (num1 > num2){
        printf("El mayor es: %d.", num1);
    }
    else{
        printf("El mayor es: %d.", num2);
    }
}
