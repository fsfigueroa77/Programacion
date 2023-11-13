#include <stdio.h>
#include <math.h>
#define pi 3.1415
int eleccion, menu;
float lado, radio, altura;
int leer_elec();
void leer_menu();
void leer_cubo();
void leer_tetra();
void leer_cilindro();
void leer_cono();

int main(){
	eleccion = leer_elec();
	leer_menu();
	return(0);
}

int leer_elec(){
	int elec;
	do
	{
		printf("Programa para calcular areas y volumen de figuras 3D.\n\t[1] CUBO.\n\t[2] TETRAEDRO.\n\t[3] CILINDRO.\n\t[4] CONO.\nElija que figura 3D desea analizar: ");
		scanf("%d", &elec);
	} while (elec < 1 || elec >4);	
	return(elec);
}

void leer_menu(){
	switch (eleccion)
	{
		case 1:
			printf("========================================\nAnalisis de un Cubo.\nIngrese el valor del lado: ");
			scanf("%f", &lado);
			leer_cubo();
			break;
		case 2:
			printf("========================================\nAnalisis de un Tetraedro.\nIngrese el valor del lado: ");
			scanf("%f", &lado);	
            leer_tetra();		
			break;
		case 3:
			printf("========================================\nAnalisis de un Cilindro.\nIngrese el valor del radio: ");
			scanf("%f", &radio);
            printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			leer_cilindro();	
			break;
		case 4:
			printf("========================================\nAnalisis de un Cono.\nIngrese el valor del radio: ");
			scanf("%f", &radio);
            printf("Ingrese el valor de la altura: ");
			scanf("%f", &altura);
			leer_cono();
			break;	
	}
}

void leer_cubo(){
    printf("Area\t=\t%.2f\nVolumen\t=\t%.2f", (6 * pow(lado, 2)), (pow(lado, 3)));
}

void leer_tetra(){
    printf("Area\t=\t%.2f\nVolumen\t=\t%.2f", (pow(lado, 2) * sqrt(3)), (pow(lado, 3) * (sqrt(2) / 12)));
}

void leer_cilindro(){
    printf("Area\t=\t%.2f\nVolumen\t=\t%.2f", (2 * pi * radio * (radio + altura)), (pi * pow(radio, 2) * altura));
}

void leer_cono(){
    printf("Area\t=\t%.2f\nVolumen\t=\t%.2f", (pi * radio * (radio + sqrt(pow(radio, 2) + pow(altura, 2)))), ((pi * altura * pow(radio, 2)) / 3));
}
