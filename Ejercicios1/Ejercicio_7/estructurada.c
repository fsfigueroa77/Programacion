#include <stdio.h>
int lista[10];
void arreglo_invertido();

int main(){
    for (int i = 0; i < 10; i++){
        printf("Ingrese un numero: ");
        scanf("%d", &lista[i]);
    }
    arreglo_invertido();
    
    return(0);
}

void arreglo_invertido(){
    for (int i = 9; i > -1; i--){
        printf("%d ", lista[i]);
    }
}
