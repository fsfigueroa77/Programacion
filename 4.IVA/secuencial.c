#include <stdio.h>
#define porcentaje_iva 0.12

int main()
{
    printf("Programa para calcular el IVA.\n");
    
    float valor;
    int cantidad;
    printf("Ingrese el costo: ");
    scanf("%f", &valor);

    printf("Cuantos va a llevar: ");
    scanf("%d", &cantidad);

    float precio, iva, total;
    precio = valor * cantidad;
    iva = precio * porcentaje_iva;
    total = precio + iva;
    
    printf("El subtotal de la compra es: %.2f\n", precio);
    printf("El valor del iva es: %.2f\n", iva);
    printf("El precio final es: %.2f", total);

    return(0);
}