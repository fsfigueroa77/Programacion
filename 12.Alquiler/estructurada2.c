#include <stdio.h>

int main(){
    int elec = 0, elec2 = 0;
    float auto_dia = 50, cami_dia = 80, suv_dia = 110; //Precios por DIA
    float desc_auto_dia = .9, desc_cami_dia = .93, desc_suv_dia = .95; //Descuentos por DIA

    float auto_km = 1, cami_km = 1.5, suv_km = 1.75; //Precios por KM    
    float desc_auto_km = .95, desc_cami_km = .93, desc_suv_km = .9, no_desc = 1; //Descuentos por KM
    float dia = 0, km = 0;
    float acum_dia = 0, acum_km = 0; //ACUMULADORES

    modo_alquiler(&elec);
    
    while(elec2 < 1 || elec2 > 3){
        printf("\n\t[1] Automovil.\n\t[2] Camioneta.\n\t[3] SUV.\nElija el tipo de vehiculo: ");
        scanf("%d", &elec2);
        switch(elec){
            case 1:
                if(elec == 1){
                    printf("\nCuantos dias alquilo el auto: ");
                    scanf("%f", &dia);
                    if(dia > 7){
                        operaciones(&auto_dia, &desc_auto_dia);
                    }else{
                        operaciones(&auto_dia, &no_desc);
                    }                    
                }else{
                    printf("\nCuantos dias alquilo el auto: ");
                    scanf("%f", &km);
                    if(km > 1000){
                        operaciones(&auto_km, &desc_auto_km);
                    }else{
                        operaciones(&auto_km, &no_desc);
                    }
                }
                break;
            case 2:
                if(elec == 1){
                    printf("\nCuantos dias alquilo el auto: ");
                    scanf("%f", &dia);
                    if(dia > 7){
                        operaciones(&cami_dia, &desc_cami_dia);
                    }else{
                        operaciones(&cami_dia, &no_desc);
                    }                    
                }else{
                    printf("\nCuantos dias alquilo el auto: ");
                    scanf("%f", &km);
                    if(km > 1000){
                        operaciones(&cami_km, &desc_cami_km);
                    }else{
                        operaciones(&cami_km, &no_desc);
                    }
                }
                break;
            case 3:
                if(elec == 1){
                    printf("\nCuantos dias alquilo el auto: ");
                    scanf("%f", &dia);
                    if(dia > 7){
                        operaciones(&suv_dia, &desc_suv_dia);
                    }else{
                        operaciones(&suv_dia, &no_desc);
                    }                    
                }else{
                    printf("\nCuantos dias alquilo el auto: ");
                    scanf("%f", &km);
                    if(km > 1000){
                        operaciones(&suv_km, &desc_suv_km);
                    }else{
                        operaciones(&suv_km, &no_desc);
                    }
                }
                break;
        }
    }
}

void modo_alquiler(*elecc){
    while(*elecc < 1 || *elecc > 2){
        printf("\n\t[1] Por Dia.\n\t[2] Por km.\nElija el modo de alquiler de vehiculo: ");
        scanf("%d", elecc);
    }        
}    

void operaciones(float *precio, float *desc){
    float calculo = *precio * *desc;
}