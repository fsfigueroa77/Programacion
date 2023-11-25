#include <stdio.h>

int main(){
    int n = 0, m = 6, i, j;
    float seco = 2.75, chau = 8.5, ence = 5.25, desc_seco = .05, desc_chau = .07, desc_ence = .1;
    printf("\nRestaurante.\n");
    while(n < 1){
        printf("\nCuantos clientes compraro: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nEl numero de clientes debe ser mayor a 1.\n");
        }
    }
    float platos[n][m];
    for(i = 0; i < n; i++){
        platos[n][0] = 0;
        while(platos[n][0] < 1){
            printf("\n\t[1] Seco\t\t->\t\t2.75 USD.\n\t[2] Chaulafan\t\t->\t\t8.50 USD.\n\t[3] Encebollado\t->\t\t5.25 USD.\nElija el plato que compro el cliente: ");
            scanf("%d", platos[n][0]);
            if(platos[n][0] < 1){
                printf("\nOpcion incorrecta.\n");
            }
        }
        if(platos[n][0] == 1){
            platos[n][1] = seco;
            printf("\nCuantos platos de seco compro el cliente: ");
            scanf("%d", platos[n][2]);
            platos[n][3] = platos[n][1] * platos[n][2];
            if(platos[n][3] >= 30){
                platos[n][4] = platos[n][3] * desc_seco;
            }else{
                platos[n][4] = 0;
            }
            platos[n][5] = platos[n][3] - platos[n][4];
        }else if(platos[n][0] == 2){
            platos[n][1] = chau;
            printf("\nCuantos platos de chaulafan compro el cliente: ");
            scanf("%d", platos[n][2]);
            platos[n][3] = platos[n][1] * platos[n][2];
            if(platos[n][3] >= 40){
                platos[n][4] = platos[n][3] * desc_chau;
            }else{
                platos[n][4] = 0;
            }
            platos[n][5] = platos[n][3] - platos[n][4];
        }else{
            platos[n][1] = ence;
            printf("\nCuantos platos de encebollado compro el cliente: ");
            scanf("%d", platos[n][2]);
            platos[n][3] = platos[n][1] * platos[n][2];
            if(platos[n][3] >= 50){
                platos[n][4] = platos[n][3] * desc_ence;
            }else{
                platos[n][4] = 0;
            }
            platos[n][5] = platos[n][3] - platos[n][4];
        }
    }
    for(i = 0; i < n; i++){
        if(platos[n][0] == 1){
            
        }
    }
}