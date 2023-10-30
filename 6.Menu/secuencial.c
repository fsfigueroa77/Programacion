#include <stdio.h>

int main()
{
    float num1, num2;
    int eleccion;

    printf("Ingrese un numero: ");
    scanf("%f", &num1);
    printf("Ingrese un numero: ");
    scanf("%f", &num2);

    printf("\t[1] Suma.\n\t[2] Resta.\n\t[3] Multiplicacion.\n\t[4] Division.\nQue operacion desea realizar: ");
    scanf("%d", &eleccion);

    switch (eleccion)
    {
    case 1:
        float suma = num1 + num2;
        printf("El resultado de la suma es: %.0f", suma);
        break;
    
    case 2:
        float resta = num1 - num2;
        printf("El resultado de la resta es: %.0f", resta);
        break;
    
    case 3:
        float multi = num1 * num2;
        printf("El resultado de la multiplicacion es: %.0f", multi);
        break;

    case 4:
        float divi = num1 / num2;
        printf("El resultado de la division es: %.2f", divi);
        break;
    default:
        printf("Opcion incorrecta.");
        break;
    }

    return (0);
}
