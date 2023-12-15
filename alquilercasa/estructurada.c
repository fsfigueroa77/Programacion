#include <stdio.h>
#include <stdlib.h>
int cantidad;
int personas();
void operaciones(int *cant, float *ca, float *de, float *ha);

int main() {
    float casa = 250, dep = 150, habi = 80;
    cantidad = personas();
    operaciones(&cantidad, &casa, &dep, &habi);
    return 0;
}

int personas(){
    int pers = 0;
    while(pers < 1 || pers > 10){
        printf("\nCuantas personas se van a hospedar: ");
        scanf("%d", &pers);
        if(pers < 0 || pers > 10){
            printf("\nSolo se puede hospedar de 1 a 10 personas.");
        }
    }
    return(pers);
}

void operaciones(int *cant, float *ca, float *de, float *ha){
    float calculo;
    float dias = 0;
    while(dias < 1){
        printf("\nCuantos dias va a alquilar: ");
        scanf("%f", &dias);
        if(dias < 1){
            printf("\nLa cantidad de dias debe ser mayor a 1.");
        }
    }
    if(*cant < 1 || *cant > 2){
        if(dias > 5){
            calculo = dias * *ca * 0.85;
            printf("Usted ha alquilado una CASA para %d personas por %.0f dias con un descuento de %.2f USD y un valor a pagar de %.2f.", *cant, dias, calculo - (calculo * 0.85), calculo);
        }else{
            calculo = dias * *ca;
            printf("Usted ha alquilado una CASA para %d personas por %.0f dias con un descuento de 0.00 USD y un valor a pagar de %.2f.", *cant, dias, calculo);
        }
    }else if(*cant < 3 || *cant > 5){
        if(dias > 7){
            calculo = dias * *de * 0.90;
            printf("Usted ha alquilado un DEPARTAMENTO para %d personas por %.0f dias con un descuento de %.2f USD y un valor a pagar de %.2f.", *cant, dias, calculo - (calculo * 0.90), calculo);
        }else{
            calculo = dias * *de;
            printf("Usted ha alquilado un DEPARTAMENTO para %d personas por %.0f dias con un descuento de 0.00 USD y un valor a pagar de %.2f.", *cant, dias, calculo);
        }
    }else{
        if(dias > 15){
            calculo = dias * *ha * 0.95;
            printf("Usted ha alquilado una HABITACION para %d personas por %.0f dias con un descuento de %.2f USD y un valor a pagar de %.2f.", *cant, dias, calculo - (calculo * 0.95), calculo);
        }else{
            calculo = dias * *ha;
            printf("Usted ha alquilado una HABITACION para %d personas por %.0f dias con un descuento de 0.00 USD y un valor a pagar de %.2f.", *cant, dias, calculo);
        }
    }    
}
