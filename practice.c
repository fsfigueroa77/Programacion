#include <stdio.h>
int choice, skill_1, skill_2, skill_3, skill_4, skills = 4;
int green_or_blue();
void escribir_skillset(int* skill_set, int skills);

int main(){
    printf("Calculadora de tomos azules.");
    choice = green_or_blue();
    int skill_set[skills];
    escribir_skillset(skill_set, skills);
    int tomos[skills];
    
    return(0);
}

int green_or_blue(){
    int cho = 0;
    do{
        printf("\n\t[1] Unidad SS/EX.\n\t[2] Unidad S.\nElija una opcion: ");
        scanf("%d", &cho);
    }while(cho < 1 && cho > 2);

    return(cho);
}

void escribir_skillset(int* skill_set, int skills){
    for (int i = 0; i < skills; i++){
        skill_set[i] = 1;
    }

    if (choice == 1){
        for (int i = 0; i < skills; i++){
            skill_set[i] *= 2;
        }
    }
}

int escribir_skills(){
    printf("En cuanto va a dejar la primera habilidad [1], [2], [3], [4] o [5]?: ");
    scanf("%d", &skill_1);
    printf("En cuanto va a dejar la segunda habilidad [1], [2], [3], [4] o [5]?: ");
    scanf("%d", &skill_2);
    printf("En cuanto va a dejar la tercera habilidad [1], [2], [3], [4] o [5]?: ");
    scanf("%d", &skill_3);
    printf("En cuanto va a dejar la cuarta habilidad [1], [2], [3], [4] o [5]?: ");
    scanf("%d", &skill_4);
    return(skill_1, skill_2, skill_3, skill_4);
}

