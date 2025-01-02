#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
 
void criarmatriz(int **p, int linha, int coluna){
    int I;
 
    p=(int **)malloc(linha*sizeof(int *));
    for(I=0; I<linha; I++){
        p[I]=(int *)malloc(coluna*sizeof(int));
    }
}
 
int multmtrz(int **mtz1, int **mtz2, int linha, int coluna){
    int valor=0, I, II;
 
    for(I=0; I<linha; I++){
        for(II=0; II<coluna; II++){
            valor += mtz1[I][II]*mtz2[II][I];
        }
    }
 
    return valor;
}
 
int main(){
    int l1 , cl1, l2, cl2, I, II, **mtz1, **mtz2;
 
    scanf("%d %d", &l1, &cl1);
 
    criarmatriz(mtz1, l1, cl1);
 
    scanf("%d %d", &l2, &cl2);
 
    criarmatriz(mtz2, l2, cl2);
 
    if(cl1!=l2){
        printf("erro\n");
        return 1;
    }
 
    int **mtz3;
 
    criarmatriz(mtz3, l1, cl2);
 
    for(I=0; I<l1; I++){
        for(II=0; II<cl2; II++){
            mtz3[I][II] = multmtrz(mtz1, mtz2, l1, cl2);
        }
    }
 
    for(I=0; I<l1; I++){
        for(II=0; II<cl2; II++){
            if(II==cl2-1) printf("%d\n", mtz3[I][II]);
            else printf("%d ", mtz3[I][II]);
        }
    }
 
    for(I=0; I<l1; I++){
        free(mtz1[I]);
    }
    free(mtz1);
 
    for(I=0; I<l2; I++){
        free(mtz2[I]);
    }
    free(mtz2);
 
    for(I=0; I<l1; I++){
        free(mtz3[I]);
    }
    free(mtz3);
 
    return 0;
}