#include <stdio.h>
#include <stdlib.h>
int dia = 0, km = 0;
void modo_alquiler();
void tipo_vehiculo(int *elecc);
float operaciones_dias(float *cantidad, float *precio, float *descuento);
float operaciones_kms(float *cantidad, float *precio, float *descuento);

int main(){
    int opcion = 0;
    while(opcion < 1 || opcion > 2){
        modo_alquiler();
        while(opcion < 1 || opcion > 2){
            printf("\n\nDesea ingresar mas alquileres (1) Si (2) No: ");
            scanf("%d", &opcion);
            if(opcion < 1 || opcion > 2){
                printf("\nOpcion Incorrecta elija nuevamente.");
            }
        }        
        if(opcion == 1){
            opcion = 0;
        }else{
            printf("\nSe alquilaron %d vehiculos por dia.\nSe alquilaron %d vehiculos por kilometros.\n", dia, km);
            break;
        }
    }
    system("pause");
    return(0);
}

void modo_alquiler(){
    int elec = 0;
    while(elec < 1 || elec > 2){
        printf("\nElija el modo de alquiler (1) Por Dias (2) Por Kilometros: ");
        scanf("%d", &elec);
        if(elec < 1 || elec > 2){
            printf("\nOpcion Incorrecta elija nuevamente.");
        }
    }    
    tipo_vehiculo(&elec);
}

void tipo_vehiculo(int *elecc){
    int elec = 0;
    float dias = 0, kms = 0;

    if(*elecc == 1){
        printf("\nCuantos dias alquilo el vehiculo: ");
        scanf("%f", &dias);
    }else{
        printf("\nCuantos kilometros recorrio el vehiculo: ");
        scanf("%f", &kms);
    }
    float auto_dia = 50, cami_dia = 80, suv_dia = 110; //Precios por DIA
    float desc_auto_dia = .9, desc_cami_dia = .93, desc_suv_dia = .95; //Descuentos por DIA
    float auto_km = 1, cami_km = 1.5, suv_km = 1.75; //Precios por KM    
    float desc_auto_km = .95, desc_cami_km = .93, desc_suv_km = .9; //Descuentos por KM
    while(elec < 1 || elec > 3){
        printf("\nElija el tipo de vehiculo (1) Automovil (2) Camioneta (3) SUV: ");
        scanf("%d", &elec);
        if(elec < 1 || elec > 3){
            printf("\nOpcion Incorrecta elija nuevamente.");
        }
    }    
    switch(elec){
        case 1:
            if(*elecc == 1){
                float precio = operaciones_dias(&dias, &auto_dia, &desc_auto_dia);
                printf("\nEl automovil se alquilo %.0f dias. Total a pagar: %.2f USD.", dias, precio);
                dia +=1;
            }else{
                float precio = operaciones_kms(&kms, &auto_km, &desc_auto_km);
                printf("\nEl automovil recorrio %.0f kilometros. Total a pagar: %.2f USD.", kms, precio);
                km +=1;
            }
            break;
        case 2:
            if(*elecc == 1){
                float precio = operaciones_dias(&dias, &cami_dia, &desc_cami_dia);
                printf("\nLa camioneta se alquilo %.0f dias. Total a pagar: %.2f USD.", dias, precio);
                dia +=1;
            }else{
                float precio = operaciones_kms(&kms, &cami_km, &desc_cami_km);
                printf("\nLa camioneta recorrio %.0f kilometros. Total a pagar: %.2f USD.", kms, precio);
                km +=1;
            }
            break;
        case 3:
            if(*elecc == 1){
                float precio = operaciones_dias(&dias, &suv_dia, &desc_suv_dia);
                printf("\nEl SUV se alquilo %.0f dias. Total a pagar: %.2f USD.", dias, precio);
                dia +=1;
            }else{
                float precio = operaciones_kms(&kms, &suv_km, &desc_suv_km);
                printf("\nEl SUV recorrio %.0f kilometros. Total a pagar: %.2f USD.", kms, precio);
                km +=1;
            }
            break;        
    }
}

float operaciones_dias(float *cantidad, float *precio, float *descuento){
    float calculo;
    if(*cantidad > 7){
        calculo = *cantidad * *precio * *descuento;
    }else{
        calculo = *cantidad * *precio * 1;
    }
    return(calculo);
}

float operaciones_kms(float *cantidad, float *precio, float *descuento){
    float calculo;
    if(*cantidad > 1000){
        calculo = *cantidad * *precio * *descuento;
    }else{
        calculo = *cantidad * *precio * 1;
    }
    return(calculo);
}