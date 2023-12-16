#include <stdio.h>
#include <stdlib.h>
int menu_modo();
void menu_vehiculo(float *precio_auto, float *precio_cami, float *precio_suv, float *desc_auto, float *desc_cami, float *desc_suv, int *modoo, int *contador);
void operaciones(float *precio, float *cant, float *desc, int *modooo, float *descu, float *calc);

int main(){
    int dia = 0, km = 0, modo, opcion = 0;
    float auto_dia = 50, cami_dia = 80, suv_dia = 110, auto_km = 1, cami_km = 1.5, suv_km = 1.75, desc_auto_dia = .9, desc_cami_dia = .93, desc_suv_dia = .95, desc_auto_km = .95, desc_cami_km = .93, desc_suv_km = .9;
    while(opcion < 1 || opcion > 2){
        modo = menu_modo();
        if(modo == 1){
            menu_vehiculo(&auto_dia, &cami_dia, &suv_dia, &desc_auto_dia, &desc_cami_dia, &desc_suv_dia, &modo, &dia); //Paso de parametros por dia
        }else{
            menu_vehiculo(&auto_km, &cami_km, &suv_km, &desc_auto_km, &desc_cami_km, &desc_suv_km, &modo, &km); //Paso de parametros por kilometro
        }
        while(opcion < 1 || opcion > 2){
            printf("\n\t[1] Si.\n\t[2] No.\nDesea ingresar mas alquileres : ");
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

int menu_modo(){
    int elec = 0;
    while(elec < 1 || elec > 2){
        printf("\n\t[1] Alquiler por dia.\n\t[2] Alquiler por kilomentro.\nElija el tipo de alquiler: ");
        scanf("%d", &elec);
        if(elec < 1 || elec > 2){
            printf("\nOpcion incorrecta vuelva a elejir.");
        }
    }
    return(elec);
}

void menu_vehiculo(float *precio_auto, float *precio_cami, float *precio_suv, float *desc_auto, float *desc_cami, float *desc_suv, int *modoo, int *contador){
    int elec = 0;
    float cantidad = 0, descuento = 0, calculo = 0;
    while(elec < 1 || elec > 3){
        printf("\n\t[1] Automovil.\n\t[2] Camioneta.\n\t[3] SUV.\nElija el tipo de vehiculo: ");
        scanf("%d", &elec);
        if(elec < 1 || elec > 3){
            printf("\nOpcion incorrecta vuelva a elejir.");
        }
    }
    switch(elec){
        case 1:
            operaciones(precio_auto, &cantidad, desc_auto, modoo, &descuento, &calculo);
            if(*modoo == 1){
                printf("\nEl automovil se alquilo %.0f dias. Aplica descuento de %.2f USD. Total a pagar: %.2f USD.\n", cantidad, descuento, calculo);
                system("pause");
            }else{
                printf("\nEl automovil recorrio %.0f kilometros. Aplica descuento de %.2f USD. Total a pagar: %.2f USD.\n", cantidad, descuento, calculo);
                system("pause");
            }            
            break;
        case 2:
            operaciones(precio_cami, &cantidad, desc_cami, modoo, &descuento, &calculo);
            if(*modoo == 1){
                printf("\nLa camioneta se alquilo %.0f dias. Aplica descuento de %.2f USD. Total a pagar: %.2f USD.\n", cantidad, descuento, calculo);
                system("pause");
            }else{
                printf("\nLa camioneta recorrio %.0f kilometros. Aplica descuento de %.2f USD. Total a pagar: %.2f USD.\n", cantidad, descuento, calculo);
                system("pause");
            }
            break;
        case 3:
            operaciones(precio_suv, &cantidad, desc_suv, modoo, &descuento, &calculo);
            if(*modoo == 1){
                printf("\nEl SUV se alquilo %.0f dias. Aplica descuento de %.2f USD. Total a pagar: %.2f USD.\n", cantidad, descuento, calculo);
                system("pause");
            }else{
                printf("\nEl SUV recorrio %.0f kilometros. Aplica descuento de %.2f USD. Total a pagar: %.2f USD.\n", cantidad, descuento, calculo);
                system("pause");
            }
            break;            
    }
    *contador += 1;
}

void operaciones(float *precio, float *cant, float *desc, int *modooo, float *descu, float *calc){   
    if(*modooo == 1){
        printf("\nCuantos dias alquilo el vehiculo: ");
        scanf("%f", cant);
        if(*cant > 7){
            *calc = *precio * *cant * *desc;
            *descu = (*precio * *cant) - *calc;
        }else{
            *calc = *precio * *cant;
            *descu = 0;
        }
    }else{
        printf("\nCuantos kilometros recorrio el vehiculo: ");
        scanf("%f", cant);
        if(*cant > 1000){
            *calc = *precio * *cant * *desc;
            *descu = (*precio * *cant) - *calc;
        }else{
            *calc = *precio * *cant;
            *descu = 0;
        }
    }        
}
