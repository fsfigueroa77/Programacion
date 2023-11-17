#include <stdio.h>
int n = 0, m = 4, i, j, elecc = 0;
float fresas = 2, moras = 3.5, naranjas = 2.75;
float total = 0;
int inicio_compra();
int frutas(float compras);
/*float resto(compras);*/

int main(){
    printf("Simulador de fruteria.\n\n");

    inicio_compra();
    float compras[n][m];

    for(i = 0; i < n; i++){
        frutas(float compras);
        /*resto(compras);*/  

        elecc = 0;

        for(j = 0; j < m; j ++){
        }
    }

    return(0);
}

int inicio_compra(){
    while(n <= 0){
        printf("Ingrese cuantas compras de frutas va a hacer: ");
        scanf("%d", &n);

        if(n <= 0){
            printf("Entrada invalida.\n");
        }
    }
    return(n);
}

int frutas(float compras){
    while(elecc < 1 || elecc > 3){
        printf("\t[1] Fresas.\n\t[2] Moras.\n\t[3] Naranjas.\nCual frutas va a llevar: ");
        scanf("%d", &elecc);

        compras[i][0] = (float) elecc;

        if(elecc < 1 || elecc > 3){
            printf("Opcion no valida.\n");
        }
    }
    return(compras[i][0]);
}
/*
float resto(compras){
    if(elecc == 1){
        compras[i][1] = fresas;
        printf("\nCuantas libras de fresa va a llevar: ");
        scanf("%f", &compras[i][2]);
        compras[i][3] = compras[i][1] * compras[i][2];
        printf("\nUsted ha comprado %.2f libras de fresas con un valor de %.2f.\n", compras[i][2], compras[i][3]);
        total += compras[i][3];
    }else if(elecc == 2){
        compras[i][1] = moras;
        printf("\nCuantas libras de mora va a llevar: ");
        scanf("%f", &compras[i][2]);
        compras[i][3] = compras[i][1] * compras[i][2];
        printf("\nUsted ha comprado %.2f libras de moras con un valor de %.2f.\n", compras[i][2], compras[i][3]);
        total += compras[i][3];
    }else if(elecc == 3){
        compras[i][1] = naranjas;
        printf("\nCuantas libras de naranja va a llevar: ");
        scanf("%f", &compras[i][2]);
        compras[i][3] = compras[i][1] * compras[i][2];
        printf("\nUsted ha comprado %.2f libras de naranajas con un valor de %.2f.\n", compras[i][2], compras[i][3]);
        total += compras[i][3];
    }
    return(compras[i][1], compras[i][2], compras[i][3], total);
}
*/