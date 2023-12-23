#include <stdio.h>
#include <stdlib.h>
void personas(int *perso);
void numero_dias(int *dia);
void calculos(float *tipo, float *desc, int *cant, int *dia);

int main(){
    int cantidad = 0, dias = 0, opcion = 0;
    float sin_descuento = 1;
    float casa = 250, depa = 150, habi = 80, desc_casa = 0.85, desc_depa = 0.9, desc_habi = 0.95;

    while(opcion < 1 || opcion > 2){
        personas(&cantidad);
        numero_dias(&dias);

        if(cantidad >= 1 && cantidad <= 2){ //Validacion para HABITACION
            if(dias > 15){
                calculos(&habi, &desc_habi, &cantidad, &dias);
            }else{
                calculos(&habi, &sin_descuento, &cantidad, &dias);
            }
        }else if(cantidad >= 3 && cantidad <= 5){ //Validacion para DEPARTAMENTO
            if(dias > 7){
                calculos(&depa, &desc_depa, &cantidad, &dias);
            }else{
                calculos(&depa, &sin_descuento, &cantidad, &dias);
            }
        }else{ //Validacion para CASA
            if(dias > 5){
                calculos(&depa, &desc_depa, &cantidad, &dias);
            }else{
                calculos(&depa, &sin_descuento, &cantidad, &dias);
            }
        }        
        while(opcion < 1 || opcion > 2){
            printf("\n\t[1] Si.\n\t[2] No.\nDesea hacer otro alquiler: ");
            scanf("%d", &opcion);
            if(opcion < 1 || opcion > 2){
                printf("\nOpcion incorrecta. Vuelva a elegir.");
            }
        }
        if(opcion == 1){
            opcion = 0;
        }else{
            printf("\nPrograma terminado.\n");
            break;
        }
        cantidad = 0;
        dias = 0;
    }
    system("pause");
    return(0);
}

void personas(int *perso){
    while(*perso < 1 || *perso > 10){
        printf("\nCuantas personas se van a hospedad: ");
        scanf("%d", perso);
        if(*perso < 1 || *perso > 10){
            printf("\nSolo pueden hospedarse de 1 a 10 personas. Ingrese un numero de personas en dicho rango.\n");
        }
    }
}

void numero_dias(int *dia){
    while(*dia < 1){
        printf("\nCuantas son los dias de hospedaje: ");
        scanf("%d", dia);
    }
}

void calculos(float *tipo, float *desc, int *cant, int *dia){
    if(*cant >= 1 && *cant <= 2){
        printf("\nUsted ha alquilado una Habitacion para %d personas por %d dias con un descuento de %.2f USD y un valor a pagar de %.2f USD.\n", *cant, *dia, - (*tipo * *dia * *desc) + (*tipo * *dia), (*tipo * *dia * *desc));
    }else if(*cant >= 3 && *cant <= 5){
        printf("\nUsted ha alquilado un Departamento para %d personas por %d dias con un descuento de %.2f USD y un valor a pagar de %.2f USD.\n", *cant, *dia, - (*tipo * *dia * *desc) + (*tipo * *dia), (*tipo * *dia * *desc));
    }else{
        printf("\nUsted ha alquilado una Casa para %d personas por %d dias con un descuento de %.2f USD y un valor a pagar de %.2f USD.\n", *cant, *dia, - (*tipo * *dia * *desc) + (*tipo * *dia), (*tipo * *dia * *desc));
    }
}