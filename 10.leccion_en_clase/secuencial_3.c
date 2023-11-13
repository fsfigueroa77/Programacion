#include <stdio.h>

int main(){
    int elec1 = 1, elec2;//variables para ingreso de decisiones en menus.
    float pu_camisetas = 10, pu_pantalones = 15, pu_camisas = 12;//valores de los precios unitarios de los items.
    float dsc_camisetas = .9, dsc_pantalones = .93, dsc_camisas = .95;//multiplicadores para descuentos en items.
    float sub_camisetas = 0, sub_pantalones = 0, sub_camisas = 0;//acumuladores de valores por cada item.

    printf("Simulador de compras.");
    
    while(elec1 == 1){
        
        do{
            printf("\nQue desea comprar?\n\t[1] Camisetas.\n\t[2] Pantalones.\n\t[3] Camisas.\nElija una opcion: ");
            scanf("%d", &elec2);
            if (elec2 < 1 || elec2 > 3){
                printf("Opcion no valida.\n");
            }
        }while(elec2 < 1 || elec2 > 3);

        switch(elec2){
            case 1:{
                float subtotal;
                int unidades = 0;
                printf("\nCuantas camisetas desea comprar: ");
                scanf("%d", &unidades);
                if (unidades > 5){
                    subtotal = pu_camisetas * unidades * dsc_camisetas;
                    sub_camisetas += subtotal;
                    printf("\nAplico un descuento del 10%% y usted ahorro %.2f USD. El valor de la compra por %d camisetas es de %.2f USD. ", (pu_camisetas * unidades) - subtotal, unidades, subtotal);
                }
                else{
                    subtotal = pu_camisetas * unidades;
                    sub_camisetas += subtotal;
                    printf("\nEl valor de la compra por %d camisetas es de %.2f USD. No aplico descuento.", unidades, subtotal);
                }
                break;
            }
            case 2:{
                float subtotal;
                int unidades = 0;
                printf("\nCuantos pantalones desea comprar: ");
                scanf("%d", &unidades);
                if (unidades > 4){
                    subtotal = pu_pantalones * unidades * dsc_pantalones;
                    sub_pantalones += subtotal;
                    printf("\nAplico con descuento del 7%% y usted ahorro %.2f USD. El valor de la compra por %d pantalones es de %.2f USD. ", (pu_pantalones * unidades) - subtotal, unidades, subtotal);
                }
                else{
                    subtotal = pu_pantalones * unidades;
                    sub_pantalones += subtotal;
                    printf("\nEl valor de la compra por %d pantalones es de %.2f USD. No aplico descuento.", unidades, subtotal, (pu_pantalones * unidades) - subtotal);
                }
                break;
            }
            case 3:{
                float subtotal;
                int unidades = 0;
                printf("\nCuantas camisas desea comprar: ");
                scanf("%d", &unidades);
                if (unidades > 9){
                    subtotal = pu_camisas * unidades * dsc_camisas;
                    sub_camisas += subtotal;
                    printf("\nAplico con descuento del 5%% y usted ahorro %.2f USD. El valor de la compra por %d camisas es de %.2f USD. ", (pu_camisas * unidades) - subtotal, unidades, subtotal);
                }
                else{
                    subtotal = pu_camisas * unidades;
                    sub_camisas += subtotal;
                    printf("\nEl valor de la compra por %d camisas es de %.2f USD. No aplico descuento.", unidades, subtotal, (pu_camisas * unidades) - subtotal);
                }
                break;
            }
        }
        
        do{
            printf("\n\nDesea seguir comprando?\n\t[1] Si.\n\t[2] No.\nElija una opcion: ");
            scanf("%d", &elec1);
            if (elec1 < 1 || elec1 > 2){
                printf("Opcion no valida.");
            }
        }while(elec1 < 1 || elec1 > 2);
        
    }
    
    printf("\nEl valor de la compra de camisetas es de %.2f USD.\nEl valor de la compra de pantalones es de %.2f USD.\nEl valor de la compra de camisas es de %.2f USD.", sub_camisetas, sub_pantalones, sub_camisas);
    printf("\nEl valor total de la compra es de %.2f USD.", sub_camisetas + sub_pantalones + sub_camisas);
    
    return(0);
}