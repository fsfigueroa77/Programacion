#include <stdio.h>
int i, j, n = 0, m = 4, elec = 0;
float fresas = 2, moras = 3.5, naranjas = 2.75, subtotal = 0;

int main(){
    printf("Simulador de Fruteria.\n\n");

    while(n <= 0){
        printf("Cuantas compras desea hacer: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("El numero de compras debe ser mayor a 1.\n\n");
        }
    }
    float frutas[n][m];

    
    
    for(i = 0; i < n; i++){
        while(elec <= 0 || elec >= 4){
            printf("\n\t[1] Fresas.\n\t[2] Moras.\n\t[3] Naranjas.\nElija la compra que va a hacer: ");
            scanf("%d", &elec);        
            if(elec <= 0 || elec >=3){
                printf("Opcion Incorrecta. Elija nuevamente.\n\n");
            }
        }
        elec = (float) frutas[i][0];
        elec = 0;

        if(frutas[i][0] = 1){
            frutas[i][1] = fresas;
            printf("\n\nCuantas libras va a comprar: ");
            scanf("%f", &frutas[i][2]);
            frutas[i][3] = frutas[i][1] * frutas[i][2];
            subtotal += frutas[i][3];
            printf("\n\nUsted ha comprado %.2f libras fresas con un valor de %.2f.", frutas[i][2], frutas[i][3]);
        }else if(frutas[i][0] = 2){
            frutas[i][1] = moras;
            printf("\n\nCuantas libras va a comprar: ");
            scanf("%f", &frutas[i][2]);
            frutas[i][3] = frutas[i][1] * frutas[i][2];
            subtotal += frutas[i][3];
            printf("\n\nUsted ha comprado %.2f libras moras con un valor de %.2f.", frutas[i][2], frutas[i][3]);
        }else{
            frutas[i][1] = naranjas;
            printf("\n\nCuantas libras va a comprar: ");
            scanf("%f", &frutas[i][2]);
            frutas[i][3] = frutas[i][1] * frutas[i][2];
            subtotal += frutas[i][3];
            printf("\n\nUsted ha comprado %.2f libras naranjas con un valor de %.2f.", frutas[i][2], frutas[i][3]);
        }        
        for(j = 0; j < m; j++){
        }
    }

    for(i = 0; i < n; i++){
        printf("\t%.2f\t", frutas[i][j]);
        if(j == m - 1){
            printf("\t%.2f\n\n", frutas[i][j]);
        }
        for(j = 0; j < m; j++){            
        }
    }

    printf("El valor total a pagar es: %.2f", subtotal);

    return(0);
}