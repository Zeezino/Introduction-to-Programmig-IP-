#include <stdio.h>
#include <stdlib.h>

void liberarmemoria(int **p,int lin){
    int I;
    for(I=0; I<lin; I++){
        free(p[I]);
    }
    free(p);
}

void criarmatriz(int *p, int col){
    int I;

    for(I=0; I<col; I++){
        scanf("%d", &p[I]);
    }
}

int testeprimo(int num){
    int I, divisores=0;

    for(I=num; I>=1; I--){
        if(num%I==0) divisores++;
    }

    return divisores;
}

int acharprimo(int *p, int col, int indice_lin){
    int I, numdiv;

    for(I=0; I<col; I++){
        if(I==indice_lin){
            if(p[I]!=1 && p[I]!=2){
                numdiv=testeprimo(p[I]);
                if(numdiv==2){
                    return 1;
                }
                else return 0;
            }
            else return 0;
        }
    }
}


void matrizComPrimo(int *p , int indice, int fator, int col){
    int resto = indice%2;
    int I;

    for(I=0; I<col; I++){
        if(I%2!=resto) p[I]*=fator;
    }

    for(I=0; I<col; I++){
        if(I==col-1) printf("%d", p[I]);
        else printf("%d ", p[I]);
    }
    printf("\n");
}

void matrizSemPrimo(int *p, int col, int lin, int fator){
    int I;

    for(I=0; I<col; I++){
        if((lin%2)!=0) p[I]*=fator;
    }

    for(I=0; I<col; I++){
        if(I==col-1) printf("%d", p[I]);
        else printf("%d ", p[I]);
    }
    printf("\n");
}



int main(){
    int n, I;
    int **p;

    scanf("%d", &n);

    p=(int **)malloc(n * (sizeof(int *)));
    if(p==NULL){
        printf("Erro de alocacao\n");
        return 1;
    }

    for(I=0; I<n; I++){
        *(p+I)=(int *)malloc(n * (sizeof(int)));
        if(*(p+I)==NULL){
            printf("Erro de alocacao\n");
            return 1;
        }
    }

    for(I=0; I<n; I++){
        criarmatriz(p[I], n);
    }

    int indicador;
    for(I=0; I<n; I++){
        indicador=acharprimo(p[I], n, I);
        if(indicador==1){
            int fator = p[I][I];
            int II;
            for(II=0; II<n; II++){
                matrizComPrimo(p[II], I, fator, n);
            }
            break;
        }
    }

    if(indicador==0){
        int fator = p[n-1][n-1];
        for(I=0; I<n; I++){
            matrizSemPrimo(p[I], n, I, fator);
        }
    }


    liberarmemoria(p, n);

    return 0;
}