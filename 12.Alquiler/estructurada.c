#include <stdio.h>
int elec = 0; //Uso la misma variable para elegir en los menus
float auto_dia = 50, cami_dia = 80, suv_dia = 110, auto_km = 1, cami_km = 1.5, suv_km = 1.75;
float desc_auto_dia = .9, desc_cami_dia = .93, desc_suv_dia = .95, desc_auto_km = .95, desc_cami_km = .93, desc_suv_km = .9, no_desc = 1;
float acum_dia = 0, acum_km = 0;
int modo(int *elecc);
void tipo(int *elecc);
float operaciones(float *tipo, float *desc, float *cantidad);

int main(){    
    modo(&elec); //Funcion para elegir el modo de alquiler (dia o km)
    return(0);
}

int modo(int *elecc){
    while(*elecc < 1 || *elecc > 2){
        printf("\n\t[1] Por dia.\n\t[2] Por kilometros.\nElija la modalidad de alquiler de autos: ");
        scanf("%d", elecc);        
    }
    switch(*elecc){
        case 1: //Opcion por DIA
            tipo(&elec); //Funcion para elegir el tipo de vehiculo alquilado por dia
            break;
        case 2: //Opcion por KM                        
            tipo(&elec); //Funcion para elegir el tipo de vehiculo alquilado por km
            break;
    }
    return(*elecc);
}

void tipo(int *elecc){
    float dias = 0, kilometros = 0;
    int modo = *elecc; //Creo una variable local de eleccion para el menu de tipo de vehiculo
    *elecc = 0;
    while(*elecc < 1 || *elecc > 3){
        printf("\n\t[1] Automovil.\n\t[2] Camioneta.\n\t[3] SUV.\nElija el tipo de vehiculo: ");
        scanf("%d", elecc);                
    }
    switch(*elecc){        
        case 1:            
            if(modo == 1){
                float calculo;
                printf("\nCuantos dias alquilo el vehiculo: ");
                scanf("%.2f", &dias);
                if(dias > 7){
                    calculo = operaciones(&auto_dia, &desc_auto_dia, &dias);
                }else{
                    calculo = operaciones(&auto_dia, &no_desc, &dias);
                }
                printf("\nAlquiler de por dia, aplica descuento de %.2f USD. Total: %.2f USD.", (&auto_dia * &desc_auto_dia) - calculo);
            }else{
                float calculo;
                printf("\nCuantos kilometros alquilo el vehiculo: ");
                scanf("%.2f", &kilometros);
                float calculo = operaciones(&auto_km, &desc_auto_dia, &kilometros);
                }
                printf("\nAlquiler de por dia, aplica descuento de %.2f USD. Total: %.2f USD.", (&auto_dia * &desc_auto_dia) - calculo);
            break;
        case 2:            
            if(modo == 1){
                float calculo;
                printf("\nCuantos dias alquilo el vehiculo: ");
                scanf("%.2f", &dias);
                if(dias > 7){
                    float calculo = operaciones(&cami_dia, &desc_cami_dia, &dias);
                }else{
                    float calculo = operaciones(&cami_dia, &no_desc, &dias);
                }
                printf("\nAlquiler de por dia, aplica descuento de %.2f USD. Total: %.2f USD.", (&auto_dia * &desc_auto_dia) - calculo);                
            }else{
                float calculo;
                printf("\nCuantos kilometros alquilo el vehiculo: ");
                scanf("%.2f", &kilometros);
                float calculo = operaciones(&cami_km, &desc_cami_dia, &kilometros);
                printf("\nAlquiler de por dia, aplica descuento de %.2f USD. Total: %.2f USD.", (&auto_dia * &desc_auto_dia) - calculo);
            }
            break;
        case 3:            
            if(modo == 1){
                float calculo;
                printf("\nCuantos dias alquilo el vehiculo: ");
                scanf("%.2f", &dias);
                if(dias > 7){
                    float calculo = operaciones(&suv_dia, &desc_suv_dia, &dias);
                }else{
                    float calculo = operaciones(&suv_dia, &no_desc, &dias);
                }
                printf("\nAlquiler de por dia, aplica descuento de %.2f USD. Total: %.2f USD.", (&auto_dia * &desc_auto_dia) - calculo);                
            }else{
                float calculo;
                printf("\nCuantos kilometros alquilo el vehiculo: ");
                scanf("%.2f", &kilometros);
                float calculo = operaciones(&suv_km, &desc_suv_dia, &kilometros);
                printf("\nAlquiler de por dia, aplica descuento de %.2f USD. Total: %.2f USD.", (&auto_dia * &desc_auto_dia) - calculo);
            }
            break;
    }
    *elecc = 0;    
}

float operaciones(float *tipo, float *desc, float *cantidad){
    float calc = *tipo * *desc * *cantidad;
    return(calc);
}