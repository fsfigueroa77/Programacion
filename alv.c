#include <stdio.h>
#include <string.h>

int verificar_penta();
int verificar_palin();
void invertirCadena(char *cadena);
int descomponer();
int separar();
void mayusculas(char *cadena);

int main() {
    int elecc;
    printf("\n\t[1] Pentavocalica.\n\t[2] Palindromo.\n\t[3] Descomponer numero de 5 cifras.\n\t[4] Separar frase por palabras.\n\t[1] Contador de vocales y consonantes.\nElija su opcion: ");
    scanf("%d", &elecc);
    
    switch(elecc){
        case 1:
            verificar_penta();
            break;
        case 2:
            verificar_palin();
            break;
        case 3:
            descomponer();
            break;
        case 4:
            separar();
            break;
        case 5:
            printf("En construccion xd");
            break;
    }
    return(0);
}

int verificar_penta(){
    char vocales[] = {'a', 'e', 'i', 'o', 'u'};
    char cadena[50];
    printf("Ingrese la palabra a verificar si es pentavocalica: ");
    scanf("%s", cadena);
    int counter = 0;
    for(int i = 0; i < sizeof(vocales) / sizeof(vocales[0]); ++i){
        const char *resultado = strchr(cadena, vocales[i]);
        if (resultado != NULL) {
            counter += 1;
        }
    }
    if(counter == 5){
        printf("La palabra es pentavocalica.\n");
    }else{
        printf("La palabra no es pentavocalica.\n");
    }
    return(0);
}

int verificar_palin(){
    char cadena[50];
    printf("Ingrese la palabra a verificar si es palindromo: ");
    scanf("%s", cadena);
    char copia[50];
    strcpy(copia, cadena);
    invertirCadena(copia);
    if(strcmp(cadena, copia) == 0){
        printf("La palabra es un palindromo.\n");
    }else{
        printf("La palabra no es un palindromo.\n");
    }
    return(0);
}

void invertirCadena(char *cadena){
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud / 2; ++i) {
        char temp = cadena[i];
        cadena[i] = cadena[longitud - 1 - i];
        cadena[longitud - 1 - i] = temp;
    }
}

int descomponer(){
    char cadena[150];
    printf("Ingrese un numero de 5 cifras para descomponer: ");
    scanf("%s", cadena);
    int i;
    for(i = 0; i < strlen(cadena); ++i){
        printf("%c\n", cadena[i]);
    }
    return(0);
}

void mayusculas(char *cadena) {
    int longitud = strlen(cadena);
    for (int i = 0; i < longitud; ++i) {
        if (cadena[i] >= 'a' && cadena[i] <= 'z' && cadena[i] != ' ') {
            cadena[i] = cadena[i] - ('a' - 'A');
        }
    }
}

int separar() {
    char cadena[50];
    printf("Ingrese la frase: ");
    if (fgets(cadena, sizeof(cadena), stdin) == NULL) {
        printf("Error al leer la entrada.\n");
        return 1;
    }

    // Eliminar el carácter de nueva línea si está presente
    int longitud = strlen(cadena);
    if (cadena[longitud - 1] == '\n') {
        cadena[longitud - 1] = '\0';
    }

    mayusculas(cadena);

    char s2[4] = " \n\t";
    char *ptr;
    ptr = strtok(cadena, s2);

    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, s2);
    }

    return 0;
}