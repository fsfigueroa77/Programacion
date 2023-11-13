#include <stdio.h>

int main(){
    int n, m = 4, i, j;
    float fresas = 2, moras = 3.5, naranjas = 2.75;
    printf("Cuántas frutas va a llevar: ");
    scanf("%d", &n);
    int matriz[n][m];
    
    for (i=0; i<n; i++){
        printf("Que frutas?: ");
        scanf("%d", &matriz[i][0]);
        for(j=0;j<m;j++){
            
            
        }
    }

    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            printf("%d\t", matriz[i][j]);
            if(j == m -1){
                printf("\n");
            }
        }
    }

    return(0);
}
