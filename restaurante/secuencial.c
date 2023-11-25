#include <stdio.h>
int main(){
    int n = 0, m = 6, i, j;
    float seco = 2.75, chau = 8.5, ence = 5.25, desc_seco = 0.04, desc_chau = 0.07, desc_ence = .1;
    printf("\nRestaurante\n\n");
    while(n < 1){
        printf("Cuantos clientes compraron: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nEl numero de clientes debe ser mayor a 1.\n\n");
        }
    }
    float compras[n][m];
    for(i = 0; i < n; i++){
        compras[i][0] = 0;
        while(compras[i][0] < 1 || compras[i][0] > 3){
            printf("\n\t[1] Seco:\t\t2.75 USD\n\t[2] Chaulafan:\t\t8.50 USD\n\t[3] Encebollado:\t\t5.25 USD\nQue plato compro el cliente #%d: ", i + 1);
            scanf("%f", &compras[i][0]);
            if(compras[i][0] < 1 || compras[i][0] > 3){
                printf("\nOpcion invalida. Debe elegir una opcion de las que se muestra en pantalla.\n");
            }
        }
        if(compras[i][0] == 1){
            compras[i][1] = seco;
            printf("\nCuantos Seco compro: ");
            scanf("%f", &compras[i][2]);
            compras[i][3] = compras[i][2] * compras[i][1];
            if(compras[i][3] >= 30){
                compras[i][4] = compras[i][3] * desc_seco;
            }else{
                compras[i][4] = 0;
            }            
            compras[i][5] = compras[i][3] - compras[i][4];
        }
        else if(compras[i][0] == 2){
            compras[i][1] = chau;
            printf("\nCuantos Chaulafan compro: ");
            scanf("%f", &compras[i][2]);
            compras[i][3] = compras[i][2] * compras[i][1];
            if(compras[i][3] >= 30){
                compras[i][4] = compras[i][3] * desc_seco;
            }else{
                compras[i][4] = 0;
            }   
            compras[i][5] = compras[i][3] - compras[i][4];
        }
        else{
            compras[i][1] = ence;
            printf("\nCuantos Encebollado compro: ");
            scanf("%f", &compras[i][2]);
            compras[i][3] = compras[i][2] * compras[i][1];
            if(compras[i][3] >= 30){
                compras[i][4] = compras[i][3] * desc_seco;
            }else{
                compras[i][4] = 0;
            }   
            compras[i][5] = compras[i][3] - compras[i][4];
        }
    }
    for(i = 0; i < n; i++){
        if(compras[i][0] == 1){
            printf("\nEl cliente #%d ha comprado %d platos de Seco y tiene un descuento de %.2f y debe pagar %.2f.", i + 1, (int) compras[i][0], compras[i][4], compras[i][5]);
        }else if(compras[i][0] == 2){
            printf("\nEl cliente #%d ha comprado %d platos de Chaulafan y tiene un descuento de %.2f y debe pagar %.2f.", i + 1, (int) compras[i][0], compras[i][4], compras[i][5]);
        }else{
            printf("\nEl cliente #%d ha comprado %d platos de Encebollado y tiene un descuento de %.2f y debe pagar %.2f.", i + 1, (int) compras[i][0], compras[i][4], compras[i][5]);
        }
    }
}