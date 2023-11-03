#include <stdio.h>
int lista[10], suma = 0;
void calc_suma();
void calc_promedio(float suma);

int main(){
    for (int i = 0; i < 10; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &lista[i]);
    }
    
    calc_suma();
    calc_promedio((float)suma);
    return(0);
}

void calc_suma(){
    for (int i = 0; i < 10; i++){
        suma += lista[i];
    }
    printf("La suma de los numeros es: %d\n", suma);
}

void calc_promedio(float suma){
    printf("El promedio de los numeros es: %.2f", suma / 10);
}
