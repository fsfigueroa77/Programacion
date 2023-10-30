#include <stdio.h>
#include <stdlib.h>
int lista[10], i, eleccion, op = 0, suma, mayor, menor;
int leer_elec();
int op_suma();
int op_mayor();
int op_menor();

int main()
{
    for (i = 0; i < 10; i++)
    {
        printf("Ingrese un numero: ");
        scanf("%d", &lista[i]);        
    }

    eleccion = leer_elec();
    suma = op_suma();
    mayor = op_mayor();
    menor = op_menor();

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
            printf("La suma de los numeros ingresados es: %d\n", suma);
            break;
        case 3:
            printf("El promedio de los numeros ingresados es: %.2f\n", (float)suma / 10);
            break;
        case 4:
            printf("El numero mayor entre todos los numeros ingresados es: %d\n", mayor);
            break;
        case 5:
            printf("El numero menor entre todos los numeros ingresados es: %d\n", menor);
            break;
        default:
            printf("Opcion incorrecta.\n");
            break;
    }

    system("pause");
    return(0);
}

int leer_elec()
{
    int elec;
    printf("\t[1] Mostrar.\n\t[2] Suma.\n\t[3] Promedio.\n\t[4] Mayor.\n\t[5] Menor.\nElija la operacion: ");
    scanf("%d", &elec);
    return (elec);
}

int op_suma()
{    
    for (i = 0; i < 10; i++)
    {
        op += lista[i];                
    }
    return(op);
}

int op_mayor()
{
    int num_mayor = 0;
    for (i = 0; i < 10; i++)
    {
        if (lista[i] > num_mayor)
        {
            num_mayor = lista[i];
        }
    }
    return(num_mayor);
}

int op_menor()
{
    int num_menor = lista[0];
    for (i = 0; i < 10; i++)
    {
        if (lista[i] < num_menor)
        {
            num_menor = lista[i];
        }
    }
    return(num_menor);
}
