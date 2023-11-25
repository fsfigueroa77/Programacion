#include <stdio.h>

int main(){
    int i, j, n = 0, m = 5;
    float super = 4.25, eco = 7.35, die = 1.89, acum_super = 0, acum_eco = 0, acum_die = 0;

    printf("\nGasolinera.\n");

    while(n < 1){
        printf("\nCuantos clientes compraron gasolina: ");
        scanf("%d", &n);
        if(n < 1){
            printf("\nEl numero de clientes debe ser mayor que 1.\n");
        }
    }
    float gas[n][m];
    for(i = 0; i < n; i++){
        gas[i][0] = 0;
        while(gas[i][0] < 1 || gas[i][0] > 3){
            printf("\n\t[1] Super (4.25 USD)\n\t[2] Eco (7.35 USD)\n\t[3] Diesel (1.89 USD)\nElija que combustible compro el cliente: ");
            scanf("%f", &gas[i][0]);
            if(gas[i][0] < 1 || gas[i][0] > 3){
                printf("\nOpcion incorrecta. Elija una de las opciones mostradas en pantalla.\n");
            }
        }
        if(gas[i][0] == 1){
            gas[i][1] = super;
            printf("\nCuantos galones de Super compro el cliente: ");
            scanf("%f", &gas[i][2]);
            acum_super += gas[i][2];
            float sub_super = gas[i][1] * gas[i][2];
            if(sub_super >= 50){
                gas[i][3] = sub_super * .1;
            }else{
                gas[i][3] = 0;
            }
            gas[i][4] = sub_super - gas[i][3];
        }else if(gas[i][0] == 2){
            gas[i][1] = eco;
            printf("\nCuantos galones de Eco compro el cliente: ");
            scanf("%f", &gas[i][2]);
            acum_eco += gas[i][2];
            float sub_eco = gas[i][1] * gas[i][2];
            if(sub_eco >= 35){
                gas[i][3] = sub_eco * .07;
            }else{
                gas[i][3] = 0;
            }
            gas[i][4] = sub_eco - gas[i][3];
        }else{
            gas[i][1] = die;
            printf("\nCuantos galones de Diesel compro el cliente: ");
            scanf("%f", &gas[i][2]);
            acum_die += gas[i][2];
            float sub_die = gas[i][1] * gas[i][2];
            gas[i][3] = 0;
            gas[i][4] = sub_die - gas[i][3];
        }
    }
    for(i = 0; i < n; i++){
        if(gas[i][0] == 1){
            printf("\nEl cliente #%d compro %.2f galones de Super con un descuento de %.2f USD y un total de %.2f USD.", i + 1, gas[i][2], gas[i][3], gas[i][4]);
        }else if(gas[i][0] == 2){
            printf("\nEl cliente #%d compro %.2f galones de Eco con un descuento de %.2f USD y un total de %.2f USD.", i + 1, gas[i][2], gas[i][3], gas[i][4]);
        }else{
            printf("\nEl cliente #%d compro %.2f galones de Diesel con un descuento de %.2f USD y un total de %.2f USD.", i + 1, gas[i][2], gas[i][3], gas[i][4]);
        }
    }
    printf("\n%.2f galones de Super.\n%.2f galones de Eco.\n%.2f galones de Diesel.", acum_super, acum_eco, acum_die);
}