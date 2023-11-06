#include <stdio.h>

int main(){
	int eleccion = 0, elec1 = 1;
    float camisetas, pantalones, camisas;
    float pu_camisetas = 10.0, pu_pantalones = 15.0, pu_camisas = 12.0, sub_camisetas, sub_pantalones, sub_camisas;
    printf("Simulador de venta de ropa.");
    
    
    do{    	
		do{
    		printf("\n\t[1] Camisetas\tP. Unitario = 10\n\t[2] Pantalones.\tP. Unitario = 15\n\t[3] Camisas.\tP. Unitario = 12\nElija que articulo compro?: ");
    		scanf("%d", &eleccion);
		}while(eleccion > 1 || eleccion < 3);
	
		switch(eleccion){
    	case 1:
    		printf("Cuantas camisetas compro? ");
    		scanf("%f", &camisetas);
    		
    		if (camisetas > 5){
    			sub_camisetas = camisetas * pu_camisetas * .9;
			}
    		else{
    			sub_camisetas = camisetas * pu_camisetas;
			}
			
    		break;
    	case 2:
    		printf("Cuantas pantalones compro? ");
    		scanf("%f", &pantalones);
    		
    		if (pantalones > 7){
    			sub_pantalones = pantalones * pu_pantalones *.93;
			}
    		else{
    			sub_pantalones = pantalones * pu_pantalones;
			}
    		
    		break;
    	case 3:
    		printf("Cuantas camisas compro? ");
    		scanf("%f", &camisas);
    		
    		if (camisas > 9){
    			sub_camisas = camisas * pu_camisas * .95;
			}
    		else{
    			sub_camisas = camisas * pu_camisas;
			}
    		
    		break;
		}
		printf("\n[1] Si.\n[2] No.\nVa a comprar algo mas?: ");
		scanf("%d", &elec1);
		
	}while(elec1 == 1);
    
    float descuento_camisetas = (camisetas * pu_camisetas) - (sub_camisetas);
    float descuento_pantalones = (pantalones * pu_pantalones) - (sub_pantalones);
    float descuento_camisas = (camisas * pu_camisas) - (sub_camisas);
    
    printf("\nUsted compro: \n\t%.0f camisetas con un descuento de %.2f USD. Subtotal de: %.2f USD.\n\t%.0f pantalones con un descuento de %.2f USD. Subtotal de: %.2f USD.\n\t%.0f camisas con un descuento de %.2f USD. Subtotal de: %.2f USD.", camisetas, descuento_camisetas, sub_camisetas, pantalones, descuento_pantalones, sub_pantalones, camisas, descuento_camisas, sub_camisas);
    printf("\nEl total de la compra es: %.2f USD.", sub_camisetas, sub_pantalones, sub_camisas);
    
	return(0);
}
