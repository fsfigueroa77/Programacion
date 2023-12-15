#include <stdio.h>

int main(){
    short primos = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47, 53, 59, 61, 67, 71, 73, 79, 83, 89, 97};
    int valor, i;
    printf("Ingrese un numero: ");
    scanf("%d", &valor);
    for(i = 0; i < 25; i++){
        do{
            int operacion;
            operacion = valor % primos[i];
            if(operacion == 0){
                
            }
        }
    }
    
}