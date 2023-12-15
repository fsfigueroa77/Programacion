#include <stdio.h>
void operaciones(float *tipo, float *comp, float *desc, float *acum_dinero, float *acum_cantidad);
void resultados(float *acum_cos_super, float *acum_cos_eco, float *acum_cos_die, float *acum_can_super, float *acum_can_eco, float *acum_can_die);
int main(){
    int n = 0, m = 4, i;
    float super = 4.2, eco = 1.85, die = 2.4;
    float costo_super = 0, costo_eco = 0, costo_die = 0, cant_super = 0, cant_eco = 0, cant_die = 0;
    printf("Cuantos clientes compraron gasolina: ");
    scanf("%d", &n);
    float gasolina[n][m];

    for(i = 0; i < n; i++){
        printf("\n\t[1] Super.\n\t[2] Eco.\n\t[3] Diesel.\nQue tipo de gasolina compro: ");
        scanf("%f", &gasolina[i][0]);
        switch((int)gasolina[i][0]){
            case 1:                               
                gasolina[i][1] = super;
                gasolina[i][2] = 50;                
                gasolina[i][3] = .9;
                operaciones(&gasolina[i][1], &gasolina[i][2], &gasolina[i][3], &costo_super, &cant_super);
                break;
            case 2:
                gasolina[i][1] = eco;
                gasolina[i][2] = 25;                
                gasolina[i][3] = .95;
                operaciones(&gasolina[i][1], &gasolina[i][2], &gasolina[i][3], &costo_eco, &cant_eco);
                break;
            case 3:
                gasolina[i][1] = die;
                gasolina[i][2] = 35;                
                gasolina[i][3] = .93;
                operaciones(&gasolina[i][1], &gasolina[i][2], &gasolina[i][3], &costo_die, &cant_die);
                break;
        }
    }
    resultados(&costo_super, &costo_eco, &costo_die, &cant_super, &cant_eco, &cant_die);
    return(0);
}
void operaciones(float *tipo, float *comp, float *desc, float *acum_dinero, float *acum_cantidad){
    float galones;
    printf("Cuantos galones compro: ");
    scanf("%f", &galones);
    *acum_cantidad += galones;
    
    if(galones > *comp){
        float dinero = (*tipo) * (galones) * (*desc);
        *acum_dinero += dinero;
    }else{
        float dinero = (*tipo) * (galones);
        *acum_dinero += dinero;
    }
}
void resultados(float *acum_cos_super, float *acum_cos_eco, float *acum_cos_die, float *acum_can_super, float *acum_can_eco, float *acum_can_die){
    printf("\nDetalle de la compra:\nSe compro %.2f galones de Super.\nSe compro %.2f galones de Eco.\nSe compro %.2f galones de Diesel.\nSe gasto %.2f USD de Super.\nSe gasto %.2f USD de Eco.\nSe gasto %.2f USD de Diesel.", *acum_can_super, *acum_can_eco, *acum_can_die, *acum_cos_super, *acum_cos_eco, *acum_cos_die);
}
