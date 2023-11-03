#include <stdio.h>
int x, unidades, decenas;
int leer_num();
int separar_unidades();
int separar_decenas();
void calc_suma();

int main(){
    x = leer_num();
    unidades = separar_unidades();
    decenas = separar_decenas();
    calc_suma();
    
    return(0);
}

int leer_num(){
    int num;
    do{        
        printf("Ingresar un numero entero no negativo: ");
        scanf("%d", &num);
    } while (num < 0);

    return(num);
}

int separar_unidades(){
    int unidades = x % 10;
    return(unidades);
}

int separar_decenas(){
    int decenas = (x % 100) / 10;
    return(decenas);
}

void calc_suma(){
    printf("La suma de los dos ultimos digitos del numero %d es: %d.", x, unidades + decenas);
}
