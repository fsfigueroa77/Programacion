#include <stdio.h>

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
            for (i = 0; i < 10; i++)
            {
                printf("Numero %d: %d\n", i + 1, lista[i]);
            }
            break;
        case 2:
            for (i = 0; i < 10; i++)
            {
                op += lista[i];                
            }
            printf("La suma de los numeros es: %d", op);
            break;
        case 3:
            for (i = 0; i < 10; i++)
            {
                op += lista[i];                
            }
            printf("La suma de los numeros es: %.2f", (float)op / 10);
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
            printf("El numero mayor es: %d", mayor);
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
            printf("El numero menor es: %d", menor);
            break;
        default:
            printf("Opcion incorrecta.");
            break;
    }

    return(0);
}
