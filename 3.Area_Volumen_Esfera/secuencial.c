#include <stdio.h>
#define pi 3.1415

int main()
{
    int radio;
    
    printf("Programa para calcular el area y volumen de una esfera.\nIngrese el valor del radio de la esfera: ");
    scanf("%d", &radio);

    float area = 4 * pi * (radio * radio);
    float volumen = (4 * pi * (radio * radio * radio)) / 3;
    
    printf("El valor de area la esfera es: %.2f \nEl valor del volumen de la esfera es: %.2f", area, volumen);

    return (0);
}