// Hello world! Cplayground is an online sandbox that makes it easy to try out
// code.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n = 0, m = 5, i, j;
    float vip = 10, regular = 5, especial = 2.7, desc_tarjeta = .85;
    
    printf("Cine.\n\n");
    
    while(n < 1){
        printf("\nCuantos clientes hicieron su compra: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nEl numero de clientes debe ser mayor que 0.\n");
        }
    }
    
    float cine[n][m];
    
    for(i = 0; i < n; i++){
        cine[i][0] = 0;
        while(cine[i][0] <= 0){
            printf("\t[1] VIP.\n\t[2] Regular.\n\t[3] Especial.\nEscoja el tipo del cliente: ");
            scanf("%f", &cine[i][0]);
            if(cine[i][0] <= 0){
                printf("El valor ingresado es incorrecto.\n");
            }
        }
        if(cine[i][0] == 1){
            cine[i][1] = vip;
            printf("\nCuantas entradas compro: ");
            scanf("%f", &cine[i][2]);
            printf("\nTiene tarjeta [1] Si [2] No: ");
            scanf("%f", &cine[i][3]);
            printf("\n");
            if(cine[i][3] == 1){
                cine[i][4] = cine[i][1] * cine[i][2] * desc_tarjeta;
            }else{
                cine[i][4] = cine[i][1] * cine[i][2];
            }
        }else if(cine[i][0] == 2){
            cine[i][1] = regular;
            printf("\nCuantas entradas compro: ");
            scanf("%f", &cine[i][2]);
            printf("\nTiene tarjeta [1] Si [2] No: ");
            scanf("%f", &cine[i][3]);
            printf("\n");
            if(cine[i][3] == 1){
                cine[i][4] = cine[i][1] * cine[i][2] * desc_tarjeta;
            }else{
                cine[i][4] = cine[i][1] * cine[i][2];
            }
        }else{
            cine[i][1] = especial;
            printf("\nCuantas entradas compro: ");
            scanf("%f", &cine[i][2]);
            printf("\nTiene tarjeta [1] Si [2] No: ");
            scanf("%f", &cine[i][3]);
            printf("\n");
            if(cine[i][3] == 1){
                cine[i][4] = cine[i][1] * cine[i][2] * desc_tarjeta;
            }else{
                cine[i][4] = cine[i][1] * cine[i][2];
            }
        }
        for(j = 0; j < m; j++){
            
        }
    }
    for(i = 0; i < n; i++){
        if(cine[i][1] == 1){
            if(cine[i][3] == 1){
                printf("\nEl cliente #%d ha comprado %d entradas VIP y aplica descuento por tarjeta. Debe pagar %.2f USD.", (int) cine[i][0], (int) cine[i][2], cine[i][4]);
            }else{
                printf("\nEl cliente #%d ha comprado %d entradas VIP y no aplica descuento. Debe pagar %.2f USD.", (int) cine[i][0], (int) cine[i][2], cine[i][4]);
            }
        }else if(cine[i][1] == 2){
            if(cine[i][3] == 1){
                printf("\nEl cliente #%d ha comprado %d entradas Regular y aplica descuento por tarjeta. Debe pagar %.2f USD.", (int) cine[i][0], (int) cine[i][2], cine[i][4]);
            }else{
                printf("\nEl cliente #%d ha comprado %d entradas Regular y no aplica descuento. Debe pagar %.2f USD.", (int) cine[i][0], (int) cine[i][2], cine[i][4]);
            }
        }else if(cine[i][1] == 3){
            if(cine[i][3] == 1){
                printf("\nEl cliente #%d ha comprado %d entradas Especial y aplica descuento por tarjeta. Debe pagar %.2f USD.", (int) cine[i][0], (int) cine[i][2], cine[i][4]);
            }
            else{
                printf("\nEl cliente #%d ha comprado %d entradas Especial y no aplica descuento. Debe pagar %.2f USD.", (int) cine[i][0], (int) cine[i][2], cine[i][4]);
            }
        }
        for(j = 0; j < m; j++){
            
        }
    }
    
    for(i = 0; i < n; i++){
        
    }
    
    return 0;
}
