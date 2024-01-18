#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void valores_adicionales(int *elecc, int *adi);
void verificacion(int *elecc);

int main(){
    
    int elec = 0, adicional = 0;
    while(elec < 1 || elec > 3){
        printf("\n\t[1] Emergencia:\t\t40 USD\n\t[2] Control:\t\t25 USD\n\t[3] Vacunas:\t\t30 USD\nElija el tipo de consulta: ");
        scanf("%d", &elec);
        if(elec < 1 || elec > 3){
            printf("\nEleccion incorrecta! Elije nuevamente.");
        }
    }
    
    valores_adicionales(&elec, &adicional);    

    return(0);
}

void valores_adicionales(int *elecc, int *adi){
    int elec = 0;
    float emer = 40, cont = 25, vacu = 30;
    if(*elecc == 1){ //adicional para EMERGENCIA
        printf("\n\t[1] Si.\n\t[2] No.\nHay costos adicionales?: ");
        verificacion(&elec);
        if(elec == 1){
            srand(time(NULL));
            *adi = rand() % 81 + 20;  //Genero un numero aleatorio entre 20 y 100 para añadir un valor adicional al azar dentro del menu de emergencia.
            printf("\nEl Valor a pagar por EMERGENCIA es de %.2f USD. Con costo adicional de %.2f USD. Valor total: %.2f USD", )           
        }
    }else if(*elecc == 2){ //adicional para CONTROL
        printf("\n\t[1] Si.\n\t[2] No.\nDesea agregar el corte y banho? (20 USD): ");
        verificacion(&elec);
        if(elec == 1){
            *adi = 20;
        }
    }else{ //adicional para VACUNAS
        printf("\n\t[1] Si.\n\t[2] No.\nDesea obtener el certificado? (5 USD): ");
        verificacion(&elec);
        if(elec == 1){
            *adi = 5;
        }
    }
}

void verificacion(int *elecc){
    while(*elecc < 1 || *elecc > 2){
        scanf("%d", elecc);
        if(*elecc < 1 || *elecc > 2){
            printf("\nEleccion incorrecta! Elije nuevamente: ");
        }
    }
}

