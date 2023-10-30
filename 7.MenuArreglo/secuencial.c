#include <stdio.h>
#include <stdlib.h>

int main()
{
    int lista[10];
    int i, eleccion, op = 0;

    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &lista[i]);        
    }
    
    printf("\t[1] Mostrar.\n\t[2] Suma.\n\t[3] Promedio.\n\t[4] Mayor.\n\t[5] Menor.\nElija la operacion: ");
    scanf("%d", &eleccion);

    switch (eleccion)
    {
        case 1:
            printf("Los numeros ingresados son: \n");
            for (i = 0; i < 10; i++)
            {
                printf("%d)\t%d\n", i + 1, lista[i]);
            }
            break;
        case 2:
            for (i = 0; i < 10; i++)
            {
                op += lista[i];                
            }
            printf("La suma de los numeros ingresados es: %d\n", op);
            break;
        case 3:
            for (i = 0; i < 10; i++)
            {
                op += lista[i];                
            }
            printf("El promedio de los numeros ingresados es: %.2f\n", (float)op / 10);
            break;
        case 4:
            int mayor = 0;
            for (i = 0; i < 10; i++)
            {
                if (lista[i] > mayor)
                {
                    mayor = lista[i];
                }
            }
            printf("El numero mayor entre todos los numeros ingresados es: %d\n", mayor);
            break;
        case 5:
            int menor = lista[0];
            for (i = 0; i < 10; i++)
            {
                if (lista[i] < menor)
                {
                    menor = lista[i];
                }
            }
            printf("El numero menor entre todos los numeros ingresados es: %d\n", menor);
            break;
        default:
            printf("Opcion incorrecta.");
            break;
    }

    system("pause");
    return(0);
}
