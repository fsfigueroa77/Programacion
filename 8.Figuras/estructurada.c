#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.1415
int eleccion, eleccion2, menu;
float base, altura, radio, area, perimetro;
int leer_elec();
int leer_menu();
void leer_cuadrado();
void leer_rectangulo();
void leer_triangulo();
void leer_circulo();

int main()
{
	eleccion = leer_elec();
	menu = leer_menu();

	system("pause");
	return(0);
}

int leer_elec()
{
	int elec;
	do
	{
		printf("Programa para calcular areas y perimetro.\n\t[1] Cuadrado.\n\t[2] Rectangulo.\n\t[3] Triangulo.\n\t[4] Circulo.\nElija que figura geometrica desea analizar: ");
		scanf("%d", &elec);
	} while (elec < 1 || elec >4);
	
	return(elec);
}

int leer_menu()
{
	switch (eleccion)
	{
		case 1:
			printf("====================================================================================================\nAnalisis de un cuadrado.\nIngrese el valor del lado: ");
			scanf("%f", &base);
			leer_cuadrado();
			break;
		case 2:
			printf("====================================================================================================\nAnalisis de un rectangulo.\nIngrese el valor de la base: ");
			scanf("%f", &base);
			printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			leer_rectangulo();
			break;
		case 3:
			printf("====================================================================================================\nAnalisis de un triangulo.\nIngrese el valor de la base: ");
			scanf("%f", &base);
			printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			leer_triangulo();			
			break;
		case 4:
			printf("====================================================================================================\nAnalisis de un circulo.\nIngrese el valor del radio: ");
			scanf("%f", &radio);
			leer_circulo();
			break;	
	}
	return(0);
}

void leer_cuadrado()
{
	do
	{
		printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
		scanf("%d", &eleccion2);
	} while (eleccion2 < 1 || eleccion2 > 2);	
						
	if (eleccion2 == 1)
	{
		area = base * base;
		printf("El area del cuadrado de lado %.0f es: %.0f\n", base, area);
	}
	else
	{
		perimetro = 4 * base;
		printf("El perimetro del cuadrado de lado %.0f es: %.0f\n", base, perimetro);
	}	
}

void leer_rectangulo()
{
	do
	{
		printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
		scanf("%d", &eleccion2);
	} while (eleccion2 < 1 || eleccion2 >2);

	if (eleccion2 == 1)
	{
		area = base * altura;
		printf("El area del rectangulo de base %.0f y altura %.0f es: %.0f\n", base, altura, area);
	}
	else
	{
		perimetro = (2 * base) + (2 * altura);
		printf("El perimetro del rectangulo de base %.0f y altura %.0f es: %.0f\n", base, altura, perimetro);
	}	
}

void leer_triangulo()
{
	do
	{
		printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
		scanf("%d", &eleccion2);
	} while (eleccion2 < 1 || eleccion2 > 2);
	
						
	if (eleccion2 == 1)
	{
		area = (base * altura) / 2;
		printf("El area del triangulo de base %.0f y altura %.0f es: %.0f\n", base, altura, area);
	}
	else
	{
		perimetro = base + altura + sqrt((base * base) + (altura * altura));
		printf("El perimetro del triangulo de base %.0f y altura %.0f es: %.2f\n", base, altura, perimetro);
	}
}

void leer_circulo()
{
	do
	{
		printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
		scanf("%d", &eleccion2);
	} while (eleccion2 < 1 || eleccion2 > 2);
						
	if (eleccion2 == 1)
	{
		area = pi * (radio * radio);
		printf("El area del circulo de radio %.0f es: %.2f\n", radio, area);
	}
	else
	{
		perimetro = 2* pi * radio;
		printf("El perimetro del circulo de radio %.0f es: %.2f\n", radio, perimetro);
	}	
}