#include <stdio.h>
#define porcentaje_iva 0.12
float valor;
int cantidad;
float leervalor();
int leercantidad();
void calculartotal(int cantidad, float valor);

int main()
{
    printf("Programa para calcular el IVA.\n");
    valor = leervalor();
    cantidad = leercantidad();
    
    calculartotal(cantidad, valor);
    return(0);
}

float leervalor()
{
    float input_valor;
    printf("Ingrese el costo: ");
    scanf("%f", &input_valor);
    return(input_valor);
}

int leercantidad()
{
    int input_cantidad;
    printf("Cuantos va a llevar: ");
    scanf("%d", &input_cantidad);
    return(input_cantidad);
}

void calculartotal(int cantidad, float valor)
{
    float precio = cantidad * valor;
    float iva = precio * porcentaje_iva;
    float total = precio + iva;

    printf("El subtotal de la compra es: %.2f\nEl valor del iva es: %.2f\nEl precio final es: %.2f", precio, iva, total);
}