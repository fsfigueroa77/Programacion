#include <stdio.h>
int n = 0, m = 0, i, j;

int validacion_dimension();
int escritura_matriz(int datos[n][m]);
void mostrar_matriz(int datos[n][m]);
void suma_filas(int datos[n][m]);
void suma_columnas(int datos[n][m]);
void promedio_filas(int datos[n][m]);
void promedio_columnas(int datos[n][m]);
void menor_fila(int datos[n][m]);
void mayor_fila(int datos[n][m]);

int main(){
    printf("Construccion de una matriz de dimensiones dadas por el usuario.\n");
    validacion_dimension();
    int datos[n][m];
    escritura_matriz(datos);
    mostrar_matriz(datos);
    suma_filas(datos);
    suma_columnas(datos);
    promedio_filas(datos);
    promedio_columnas(datos);
    menor_fila(datos);
    mayor_fila(datos);

    return(0);
}

int validacion_dimension(){
    while (n <= 0 || m <= 0){
        printf("Ingrese el numero de filas de la matriz: ");
        scanf("%d", &n);
        printf("Ingrese el numero de columnas de la matriz: ");
        scanf("%d", &m);

        if(n <= 0 || m <= 0){
            printf("Error de ingreso de datos. El numero de filas y columnas deben ser mayores que 0.\n");
        }    
    }
    return(n, m);
}

int escritura_matriz(int datos[n][m]){
    for (i = 0; i < n; i++){//Ingreso de valores dentro de la matriz.
        for(j = 0; j < m; j++){
            printf("Ingrese el elemento correspondiente a la posicion [%d, %d] en la matriz: ", i, j);
            scanf("%d", &datos[i][j]);
        }
    }
    return(datos[n][m]);
}

void mostrar_matriz(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nLa matriz de dimension %dx%d es:\n\t", n, m);
    for (i = 0; i < n; i++){//Bucle for para mostrar por pantalla la matriz
        for(j = 0; j < m; j++){
            printf("%d\t", datos[i][j]);
            if (j == m - 1){
                printf("\n\t");
            }
        }
    }
}

void suma_filas(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nSumatoria de elementos de cada una de las filas de la matriz.\n");
    for (i = 0; i < n; i++){
        int acum_filas = 0;
        for(j = 0; j < m; j++){
            acum_filas += datos[i][j];
        }
        printf("\tFila %d:\t\t\t%d\n", i + 1, acum_filas);
    }
}

void suma_columnas(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nSumatoria de elementos de cada una de las columnas de la matriz.\n");
    for (j = 0; j < m; j++){
        int acum_columnas = 0;
        for(i = 0; i < n; i++){
            acum_columnas += datos[i][j];
        }
        printf("\tColumna %d:\t\t%d\n", j + 1, acum_columnas);
    }
}

void promedio_filas(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nPromedio de elementos de cada una de las filas de la matriz.\n");
    for (i = 0; i < n; i++){
        float acum_filas = 0;
        for(j = 0; j < m; j++){
            acum_filas += datos[i][j];
        }
        printf("\tFila %d:\t\t\t%.2f\n", i + 1, acum_filas / m);
    }
}

void promedio_columnas(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nPromedio de elementos de cada una de las columnas de la matriz.\n");
    for (j = 0; j < m; j++){
        float acum_columnas = 0;
        for(i = 0; i < n; i++){
            acum_columnas += datos[i][j];
        }
        printf("\tColumna %d:\t\t%.2f\n", j + 1, acum_columnas / n);
    }
}

void menor_fila(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nLos numeros menores de cada fila son:\n");
    for (i = 0; i < n; i++){
        int menor = datos[i][0];
        for(j = 0; j < m; j++){
            if(datos[i][j] < menor){
                menor = datos[i][j];
            }            
        }
        printf("\tFila %d:\t\t\t%d\n", i + 1, menor);
    }
}

void mayor_fila(int datos[n][m]){
    printf("\n@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\n\nLos numeros mayores de cada columna son:\n");
    for (j = 0; j < m; j++){
        int mayor = 0;
        for(i = 0; i < n; i++){
            if(datos[i][j] > mayor){
                mayor = datos[i][j];
            }            
        }
        printf("\tColumna %d:\t\t%d\n", j + 1, mayor);
    }
}