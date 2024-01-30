#include <stdio.h>

int main(){
    int n = 0;
    pedir_num_materias(&n);
    float materias[n];
    pedir_calificaciones(&materias, &n);

    return(0);
}

void pedir_num_materias(int *cantidad){
    printf("Cuantas materias esta viendo en el semestre: ");
    scanf("%d", cantidad);
}

void pedir_calificaciones(float materias){
    int i;
    for(i = 0; i < n; i++){
        
    }
}