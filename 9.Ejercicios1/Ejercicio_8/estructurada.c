#include <stdio.h>
int numero;
int leer_num();
void tabla1();
void tabla2();
void tabla3();

int main(){
    numero = leer_num();
    printf("Tabla de multiplicar usando for.\n");
    tabla1();
    printf("\nTabla de multiplicar usando while.\n");
    tabla2();
    printf("\nTabla de multiplicar usando do-while.\n");
    tabla3();
    return(0);
}

int leer_num(){
    int num;
    printf("Ingrese un numero entero: ");
    scanf("%d", &num);

    return(num);
}

void tabla1(){
    for (int i = 1; i < 13; i++){
        printf("%d\tx\t%d\t=\t%d\n", numero, i, numero * i);
    }
}

void tabla2(){
    int multiplicador = 1;
    while(multiplicador <= 12){
        printf("%d\tx\t%d\t=\t%d\n", numero, multiplicador, numero * multiplicador);
        multiplicador ++;
    }
}

void tabla3(){
    int multiplicador = 1;
    do{
        printf("%d\tx\t%d\t=\t%d\n", numero, multiplicador, numero * multiplicador);
        multiplicador ++;
    }while(multiplicador <= 12);
}
