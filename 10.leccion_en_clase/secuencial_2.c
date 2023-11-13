#include <stdio.h>

int main(){
    int elec1, elec2 = 1;
    float camisetas_usd = 10, pantalones_usd = 15, camisas_usd = 12; //precio unitario de cada prenda
    int u_camisetas, u_pantalones, u_camisas; //unidades de cada prenda
    float sub_camisetas = 0, sub_pantalones = 0, sub_camisas = 0; //acumulador de precio de prendas
    float desc_camisetas = .9, desc_pantalones = .93, desc_camisas = .95; //multiplicadores de descuento
    
    while(elec2 == 1){
        do{
            printf("\n\t[1] Camisetas.\n\t[2] Pantalones.\n\t[3] Camisetas.\nElija una opcion: ");
            scanf("%d", &elec1);
        }while(elec1 < 1 || elec1 > 3);
        
        switch (elec1){
            case 1:{
                printf("Cuantas camisetas va a comprar?: ");
                scanf("%d", &u_camisetas);
                
                if (u_camisetas > 5){
                    float parcial_camisetas = u_camisetas * camisetas_usd * desc_camisetas;
                    printf("Su compra en %d camisetas al momento es de %.2f USD, con un descuento de %.2f USD.", u_camisetas, parcial_camisetas, -parcial_camisetas + (u_camisetas * camisetas_usd));
                    sub_camisetas += parcial_camisetas;
                }
                else{
                    float parcial_camisetas = u_camisetas * camisetas_usd;
                    printf("Su compra en %d camisetas al momento es de %.2f USD, con un descuento de %.2f USD.", u_camisetas, parcial_camisetas, parcial_camisetas - (u_camisetas * camisetas_usd));
                    sub_camisetas += parcial_camisetas;
                }                
                break;
            }
            case 2:{
                printf("Cuantos pantalones va a comprar?: ");
                scanf("%d", &u_pantalones);
                
                if (u_pantalones > 7){
                    float parcial_pantalones = u_pantalones * pantalones_usd * desc_pantalones;
                    printf("Su compra en %d pantalones al momento es de %.2f USD, con un descuento de %.2f USD.", u_pantalones, parcial_pantalones, -parcial_pantalones + (u_pantalones * pantalones_usd));
                    sub_pantalones += parcial_pantalones;
                }
                else{
                    float parcial_pantalones = u_pantalones * pantalones_usd;
                    printf("Su compra en %d pantalones al momento es de %.2f USD, con un descuento de %.2f USD.", u_pantalones, parcial_pantalones, parcial_pantalones - (u_pantalones * pantalones_usd));
                    sub_pantalones += parcial_pantalones;
                }                
                break;
            }
            case 3:{
                printf("Cuantas camisas va a comprar?: ");
                scanf("%d", &u_camisas);
                
                if (u_camisas > 9){
                    float parcial_camisas = u_camisas * camisas_usd * desc_camisas;
                    printf("Su compra en %d camisas al momento es de %.2f USD, con un descuento de %.2f USD.", u_camisas, parcial_camisas, -parcial_camisas + (u_camisas * camisas_usd));
                    sub_camisas += parcial_camisas;
                }
                else{
                    float parcial_camisas = u_camisas * camisas_usd;
                    printf("Su compra en %d camisas al momento es de %.2f USD, con un descuento de %.2f USD.", u_camisas, parcial_camisas, parcial_camisas - (u_camisas * camisas_usd));
                    sub_camisas += parcial_camisas;
                }                
                break;
            }
        }
        
        do{
            printf("\nDesea comprar otro articulo?\n\t[1] Si.\n\t[2] No.\nElija su opcion: ");
            scanf("%d", &elec2);
        }while(elec2 < 1 || elec2 > 2);
    }
    
    printf("\nCamisetas:\t\t%.2f USD.\nPantalones:\t\t%.2f USD.\nCamisas:\t\t%.2f USD.\n\nLa compra total fue de:\t%.2f USD.", sub_camisetas, sub_pantalones, sub_camisas, sub_camisetas + sub_pantalones + sub_camisas);

    return(0);
}