#include <stdio.h>

int main(){
    int n = 0, m = 4, i, j, elecc = 0;
    float fresas = 2, moras = 3.5, naranjas = 2.75;
    float total = 0;

    printf("");
    printf("");
    printf("=================================================================================================================================\n\nSimulador de Fruteria.\n\n=================================================================================================================================\n\n");



    while(n <= 0){
        printf("Ingrese cuantas compras de frutas va a hacer: ");
        scanf("%d", &n);

        if(n <= 0){
            printf("Entrada invalida.\n");
        }
    }
    float compras[n][m];
    
    
    for(i = 0; i < n; i++){
        while(elecc < 1 || elecc > 3){
            printf("\t[1] Fresas.\n\t[2] Moras.\n\t[3] Naranjas.\nCual frutas va a llevar: ");
            scanf("%d", &elecc);

            compras[i][0] = (float) elecc;

            if(elecc < 1 || elecc > 3){
                printf("Opcion no valida.\n");
            }
        }

        if(elecc == 1){
            compras[i][1] = fresas;
            printf("\nCuantas libras de fresa va a llevar: ");
            scanf("%f", &compras[i][2]);
            compras[i][3] = compras[i][1] * compras[i][2];
            printf("\nUsted ha comprado %.2f libras de fresas con un valor de %.2f.\n", compras[i][2], compras[i][3]);
            total += compras[i][3];
        }

        else if(elecc == 2){
            compras[i][1] = moras;
            printf("\nCuantas libras de mora va a llevar: ");
            scanf("%f", &compras[i][2]);
            compras[i][3] = compras[i][1] * compras[i][2];
            printf("\nUsted ha comprado %.2f libras de moras con un valor de %.2f.\n", compras[i][2], compras[i][3]);
            total += compras[i][3];
        }

        else if(elecc == 3){
            compras[i][1] = naranjas;
            printf("\nCuantas libras de naranja va a llevar: ");
            scanf("%f", &compras[i][2]);
            compras[i][3] = compras[i][1] * compras[i][2];
            printf("\nUsted ha comprado %.2f libras de naranajas con un valor de %.2f.\n", compras[i][2], compras[i][3]);
            total += compras[i][3];
        }

        elecc = 0;

        for(j = 0; j < m; j ++){
        }
    }
    printf(" _______________________________ _______________________________ _______________________________ _______________________________ \n|\t\t\t\t|\t\t\t\t|\t\t\t\t|\t\t\t\t|\n|\tFruta\t\t\t|\tPrecio Unitario\t\t|\tCantidad\t\t|\tTotal\t\t\t|\n|_______________________________|_______________________________|_______________________________|_______________________________|\n|\t\t\t\t|\t\t\t\t|\t\t\t\t|\t\t\t\t|\n");
    for(i = 0; i < n; i++){
        for(j = 0; j < m; j ++){
            if(j == 0){                
                if(compras[i][j] == 1){
                    printf("|\tFresas    \t\t|");
                }
                if(compras[i][j] == 2){
                    printf("|\tMoras     \t\t|");
                }
                if(compras[i][j] == 3){
                    printf("|\tNaranjas\t\t|");
                }
            }            
            if(j == 1){
                printf("\t%.2f USD\t\t|", compras[i][j]);
            }
            if(j == 2){
                printf("\t%.2f libras\t\t|", compras[i][j]);
            }
            if(j == m - 1){                
                printf("\t%.2f USD\t\t|\n", compras[i][j]);
            }
        }
    }
    printf("|_______________________________|_______________________________|_______________________________|_______________________________|\n|                                                                                                                               |\n");
    printf("|\tEl valor total a pagar es:\t\t\t\t\t\t\t\t\t%.2f USD\t\t|\n|_______________________________________________________________________________________________________________________________|", total);

    return(0);
}