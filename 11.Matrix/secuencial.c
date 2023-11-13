#include <stdio.h>

int main(){
    int n, m, i, j;
    printf("Ingrese el numero de filas de la matriz: ");
    scanf("%d", &n);
    printf("Ingrese el numero de columnas de la matriz: ");
    scanf("%d", &m);
    int datos[n][m];

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("Ingrese un numero para la posicion [%d, %d]: ", i, j);
            scanf("%d", &datos[i][j]);
        }
    }

    for (i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            printf("%d\t", datos[i][j]);
            if (j == m - 1){
                printf("\n");
            }
        }
    }

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSumatoria de los elementos de cada fila.\n");
    for (i = 0; i < n; i++){  
        int sumatoria_filas = 0;
        for (j = 0; j < m; j++){
            sumatoria_filas += datos[i][j];            
        }
        printf("\tFila %d -> %d\n", i + 1, sumatoria_filas);
    }

    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nSumatoria de los elementos de cada columna.\n");
    for (j = 0; j < m; j++){  
        int sumatoria_columnas = 0;
        for (i = 0; i < n; i++){
            sumatoria_columnas += datos[i][j];            
        }
        printf("\tColumna %d -> %d\n", j + 1, sumatoria_columnas);
    }

    for (i = 0; i < n; i++){  
        int min = datos[i][j];         
        for (j = 0; j < m; j++){
            if (datos[i][j] < min){
                min = datos[i][j];
            }            
        }
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nEl numero menor de la fila %d es: %d.\n", i + 1, min);
    }

    for (j = 0; j < m; j++){  
        int max = 0;         
        for (i = 0; i < n; i++){
            if (datos[i][j] > max){
                max = datos[i][j];
            }            
        }
        printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\nEl numero mayor de la colunna %d es: %d.\n", j + 1, max);
    }

    return(0);
}
