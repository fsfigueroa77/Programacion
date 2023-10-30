int eleccion, eleccion2, menu;
float base, altura, radio, area, perimetro;
int leer_elec();
int leer_menu();

int main()
{
	eleccion = leer_elec();
	menu = leer_menu();
	
	return(0);
}

int leer_elec()
{
	int elec;
	do
	{
		printf("Programa para calcular areas y perimetro.\n\t[1] Cuadrado.\n\t[2] Rectangulo.\n\t[3] Triangulo.\n\t[4] Circulo.\nElija que figura geometrica desea analizar: ");
		scanf("%d", &elec);
	}while(elec < 1 || elec >4);
	
	return(elec);
}

int leer_menu()
{
	switch (eleccion)
	{
		case 1:
			printf("Analisis de un cuadrado.\nIngrese el valor del lado: ");
			scanf("%f", &base);
			printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
			scanf("%d", &eleccion2);
						
			if (eleccion2 == 1)
			{
				printf("Area del cuadrado: ");
				area = base * base;
				printf("El area del cuadrado de lado %.0f es: %.0f", base, area);
			}
			else if (eleccion2 == 2)
			{
				printf("Perimetro del cuadrado: ");
				perimetro = 4 * base;
				printf("El perimetro del cuadrado de lado %.0f es: %.0f", base, perimetro);
			}
			else
			{
				printf("Opcion incorrecta.");
			}
			break;
		case 2:
			printf("Analisis de un rectangulo.\nIngrese el valor de la base: ");
			scanf("%f", &base);
			printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
			scanf("%d", &eleccion2);
						
			if (eleccion2 == 1)
			{
				printf("Area del rectangulo: ");
				area = base * altura;
				printf("El area del rectangulo de base %.0f y altura %.0f es: %.0f", base, altura, area);
			}
			else if (eleccion2 == 2)
			{
				printf("Perimetro del rectangulo: ");
				perimetro = (2 * base) + (2 * altura);
				printf("El perimetro del rectangulo de base %.0f y altura %.0f es: %.0f", base, altura, perimetro);
			}
			else
			{
				printf("Opcion incorrecta.");
			}	
			break;
		case 3:
			printf("Analisis de un triangulo.\nIngrese el valor de la base: ");
			scanf("%f", &base);
			printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
			scanf("%d", &eleccion2);
						
			if (eleccion2 == 1)
			{
				printf("Area del triangulo: ");
				area = (base * altura) / 2;
				printf("El area del triangulo de base %.0f y altura %.0f es: %.0f", base, altura, area);
			}
			else if (eleccion2 == 2)
			{
				printf("Perimetro del triangulo: ");
				float h_cuadrada = (base * base) + (altura * altura);
				float hipotenusa = sqrt(h_cuadrada);
				perimetro = base + altura + hipotenusa;
				printf("El perimetro del triangulo de base %.0f y altura %.0f es: %.2f", base, altura, perimetro);
			}
			else
			{
				printf("Opcion incorrecta.");				
			}
			break;
		case 4:
			printf("Analisis de un circulo.\nIngrese el valor del radio: ");
			scanf("%f", &radio);
			printf("\t[1] Area. \n\t[2] Perimetro.\nElija la opcion que desea calcular: ");
			scanf("%d", &eleccion2);
						
			if (eleccion2 == 1)
			{
				printf("Area del cuadrado: ");
				area = pi * (radio * radio);
				printf("El area del circulo de radio %.0f es: %.2f", radio, area);
			}
			else if (eleccion2 == 2)
			{
				printf("Perimetro del cuadrado: ");
				perimetro = 2* pi * radio;
				printf("El perimetro del circulo de radio %.0f es: %.2f", radio, perimetro);
			}
			else
			{
				printf("Opcion incorrecta.");
			}
			break;	
	}
	return(0);
}
