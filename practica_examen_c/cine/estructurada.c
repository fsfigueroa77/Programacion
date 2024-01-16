#include <stdio.h>
void tipo_entrada(float *fila1, float *fila2, int *num_fila);
void cantidad(float *fila3, int *num_fila);

int main(){
    int n = 0, m = 5, i;
    while(n < 1){
        printf("Cuantos clientes compraron entrada: ");
        scanf("%d", &n);
        if(n < 1){
            printf("Error! El numero de clientes debe ser mayor que 0.\n");
        }
    }
    float tabla[n][m];

    for(i = 0; i < n; i++){
        tipo_entrada(&tabla[i][0], &tabla[i][1]);
        float tabla[i][2] = cantidad(&tabla[i][2]);
        float tabla[i][3] = tarjeta(&tabla[i][3]);
        //float tabla[i][4] = total(&tabla[i][4]);
    }

    return(0);
}

void tipo_entrada(float *fila1, float *fila2){
    float vip = 10.0, reg = 5.0, esp = 2.7;
    *fila1 = 0;
    while(*fila1 < 1 || *fila1 > 3){
        printf("\n\t[1] VIP\n\t[2] Regular\n\t[3] Especial\nQue tipo de entrada compro: ");
        scanf("%f", fila1);
        if(*fila1 < 1 || *fila1 > 3){
            printf("Error! Opcion incorrecta. Elija nuevamente.\n");
        }
    }
    if(*fila1 == 1){
        *fila2 = vip;
    }else if(*fila1 == 2){
        *fila2 = reg;
    }else{
        *fila2 = esp;
    }
}

void cantidad(float *fila3){
    *fila3 = 0;
    while(*fila3 < 1){
        printf("Cuantas entradas compro: ");
        scanf("%f", fila3);
        if(*fila3 < 1){
            printf("Error! El numero de entradas debe ser mayor que 0.\n");
        }
    }
    
}

void tarjeta(float *fila4){

}