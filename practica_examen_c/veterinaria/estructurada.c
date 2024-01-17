#include <stdio.h>
#include <stdlib.h>
void valores_adicionales(int *elecc);
void verificacion(int *elecc);

int main(){
    
    int elec = 0, adicional = 0;
    while(elec < 1 || elec > 3){
        printf("\n\t[1] Emergencia (40 USD)\n\t[2] Control (25 USD)\n\t[3] Vacunas (30 USD)\nElija el tipo de consulta: ");
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
    if(*elecc == 1){        
        printf("\n\t[1] Si.\n\t[2] No.\nHay costos adicionales?: ");
        verificacion(&elec);
        if(elec == 1){
            *adi = rand() % 11 + 20;  // Este está entreo 20 y 30
        }
    }else if(*elecc == 2){
        printf("\n\t[1] Si.\n\t[2] No.\nDesea agregar el corte y banho? (20 USD): ");
        verificacion(&elec);
    }else{
        printf("\n\t[1] Si.\n\t[2] No.\nDesea obtener el certificado? (5 USD): ");
        verificacion(&elec);
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

