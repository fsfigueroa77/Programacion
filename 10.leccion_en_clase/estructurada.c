#include <stdio.h>
int elec1 = 1, elec2;//variables para ingreso de decisiones en menus.
float pu_camisetas = 10, pu_pantalones = 15, pu_camisas = 12;//valores de los precios unitarios de los items.
float dsc_camisetas = .9, dsc_pantalones = .93, dsc_camisas = .95;//multiplicadores para descuentos en items.
float sub_camisetas = 0, sub_pantalones = 0, sub_camisas = 0;//acumuladores de valores por cada item.
int eleccion_compra();
float calculo_camisetas();
float calculo_pantalones();
float calculo_camisas();
int continuar_comprando();
void muestra_resultado();

int main(){
    while(elec1 == 1){ 
        elec2 = eleccion_compra();
        switch(elec2){
            case 1:{
                float valores = calculo_camisetas();
                sub_camisetas += valores;
            }
            break;
            case 2:{
                float valores = calculo_pantalones();
                sub_pantalones += valores;
            }
            break;
            case 3:{
                float valores = calculo_camisas();
                sub_camisas += valores;
            }
            break;
        }
        elec1 = continuar_comprando();
    }
    muestra_resultado();
    return(0);
}

int eleccion_compra(){
    int eleccion = 1;
    do{
        printf("\nQue desea comprar?\n\t[1] Camisetas.\t\t10 USD\n\t[2] Pantalones.\t\t15 USD\n\t[3] Camisas.\t\t12 USD\nElija una opcion: ");
        scanf("%d", &eleccion);
        if (eleccion < 1 || eleccion > 3){
            printf("Opcion no valida.\n");
        }
    }while(eleccion < 1 || eleccion > 3);
    return(eleccion);
}

float calculo_camisetas(){
    float subtotal;
    int unidades = 0;
    printf("\nCuantas camisetas desea comprar: ");
    scanf("%d", &unidades);
    if (unidades > 5){
        subtotal = pu_camisetas * unidades * dsc_camisetas;
        printf("\nAplico un descuento del 10%% y usted ahorro %.2f USD. El valor de la compra por %d camisetas es de %.2f USD. ", (pu_camisetas * unidades) - subtotal, unidades, subtotal);
    }
    else{
        subtotal = pu_camisetas * unidades;
        printf("\nEl valor de la compra por %d camisetas es de %.2f USD. No aplico descuento.", unidades, subtotal);
    }
    return(subtotal);
}

float calculo_pantalones(){
    float subtotal;
    int unidades = 0;
    printf("\nCuantos pantalones desea comprar: ");
    scanf("%d", &unidades);
    if (unidades > 4){
        subtotal = pu_pantalones * unidades * dsc_pantalones;
        printf("\nAplico con descuento del 7%% y usted ahorro %.2f USD. El valor de la compra por %d pantalones es de %.2f USD. ", (pu_pantalones * unidades) - subtotal, unidades, subtotal);
    }
    else{
        subtotal = pu_pantalones * unidades;
        printf("\nEl valor de la compra por %d pantalones es de %.2f USD. No aplico descuento.", unidades, subtotal, (pu_pantalones * unidades) - subtotal);
    }
    return(subtotal);
}

float calculo_camisas(){
    float subtotal;
    int unidades = 0;
    printf("\nCuantas camisas desea comprar: ");
    scanf("%d", &unidades);
    if (unidades > 9){
        subtotal = pu_camisas * unidades * dsc_camisas;
        printf("\nAplico con descuento del 5%% y usted ahorro %.2f USD. El valor de la compra por %d camisas es de %.2f USD. ", (pu_camisas * unidades) - subtotal, unidades, subtotal);
    }
    else{
        subtotal = pu_camisas * unidades;
        printf("\nEl valor de la compra por %d camisas es de %.2f USD. No aplico descuento.", unidades, subtotal, (pu_camisas * unidades) - subtotal);
    }

    return(subtotal);
}

int continuar_comprando(){
    int eleccion;
    do{
        printf("\n\nDesea seguir comprando?\n\t[1] Si.\n\t[2] No.\nElija una opcion: ");
        scanf("%d", &eleccion);
        if (eleccion < 1 || eleccion > 2){
            printf("Opcion no valida.");
        }
    }while(eleccion < 1 || eleccion > 2);

    return(eleccion);
}

void muestra_resultado(){
    printf("\nEl valor de la compra de camisetas es de %.2f USD.\nEl valor de la compra de pantalones es de %.2f USD.\nEl valor de la compra de camisas es de %.2f USD.", sub_camisetas, sub_pantalones, sub_camisas);
    printf("\nEl valor total de la compra es de %.2f USD.", sub_camisetas + sub_pantalones + sub_camisas);
}