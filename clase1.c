#include <stdio.h>

int main() {
    int elec = 0, n = 0, m = 6, i, j;
    float seco = 2.75, chaulafan = 8.5, encebollado = 5.25;
    float desc_seco = .95, desc_chaulafan = .93, desc_encebollado = .9;
    float descuento = 0, total = 0;
    int nombre_plato;
    printf("Restaurante.\n\n");
    
    while(n <= 0){
        printf("Ingrese cuantos clientes hicieron su compra: ");
        scanf("%d", &n);
        if(n <= 0){
            printf("El numero de clientes debe ser mayor o igual que 1.\n\n");
        }
    }
    
    float platos[n][m];
    
    for(i = 0; i < n; i++){
        while(elec < 1 || elec > 3){
            printf("\t[1] Seco.\n\t[2] Chaulafan.\n\t[3] Encebollado.\n\nQue plato llevo el cliente: ");
            scanf("%d", &elec);
            if(elec < 1 || elec > 3){
            printf("Opcion Incorrecta. Vuelva a elegir un plato.\n\n");
            }
        }
        
        elec = platos[i][0];
        
        if(platos[i][0] == 1){
            platos[i][1] = seco;
            
            
            printf("Cuantos Seco llevo el cliente: ");
            scanf("%f", &platos[i][2]);
            
            platos[i][3] = platos[i][1] * platos[i][2];
            total += platos[i][3];
            if(platos[i][3] >= 30){
                platos[i][4] = platos[i][3] * desc_seco;
            }else{
                platos[i][4] = platos[i][3];
            }
            platos[i][5] = platos[i][3] - platos[i][4];
            total += platos[i][5];
            
            elec = 0;
            if(i < n -1){
                printf("\nSiguiente compra.\n");
            }
        }else if(platos[i][0] == 2){
            platos[i][2] = chaulafan;
            
            
            printf("Cuantos Chaulafan llevo el cliente: ");
            scanf("%f", &platos[i][2]);
            
            platos[i][3] = platos[i][1] * platos[i][2];
            total += platos[i][3];
            if(platos[i][3] >= 40){
                platos[i][4] = platos[i][3] * desc_chaulafan;
            }else{
                platos[i][4] = platos[i][3];
            }
            platos[i][5] = platos[i][3] - platos[i][4];
            total += platos[i][5];
            
            elec = 0;
            if(i < n -1){
                printf("\nSiguiente compra.\n");
            }
        }else{
            platos[i][2] = encebollado;
            
            
            printf("Cuantos Encebollado llevo el cliente: ");
            scanf("%f", &platos[i][2]);
            
            platos[i][3] = platos[i][1] * platos[i][2];
            total += platos[i][3];
            if(platos[i][3] >= 50){
                platos[i][4] = platos[i][3] * desc_encebollado;
            }else{
                platos[i][4] = platos[i][3];
            }
            platos[i][5] = platos[i][3] - platos[i][4];
            total += platos[i][5];
            
            elec = 0;
            if(i < n -1){
                printf("\nSiguiente compra.\n");
            }
        }
        for(j = 0; j < m; j++){
        }
    }
    
    if(platos[i][0] == 1){
        printf("\nEl cliente #%d ha comprado %d platos de seco y tiene un descuento de %.2f USD y debe pagar %.2f USD.\n", (int) platos[i][0] + 1, (int) platos[i][2], platos[i][4], platos[i][5]);
    }else if(platos[i][0] == 2){
        printf("\nEl cliente #%d ha comprado %d platos de chaulafan y tiene un descuento de %.2f USD y debe pagar %.2f USD.\n", (int) platos[i][0] + 1, (int) platos[i][2], platos[i][4], platos[i][5]);
    }else{
        printf("\nEl cliente #%d ha comprado %d platos de encebollado y tiene un descuento de %.2f USD y debe pagar %.2f USD.\n", (int) platos[i][0] + 1, (int) platos[i][2], platos[i][4], platos[i][5]);
    }
    
    printf("\n\n");
   
    return 0;
}
