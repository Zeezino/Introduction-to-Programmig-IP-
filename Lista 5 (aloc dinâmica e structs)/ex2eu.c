#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
    codigo criado em 22.06.2024*/
/*
    scanear a qntd de casos de teste e criar loop que 
    vai ler os produtos disponiveis e os requisitados*/
/*
    ler todos os produtos disponiveis em uma funcao
    dentro da funcao de ler os disponiveis, chamar outra
    ler os requisitados e se for a mesma palavra, soma o valor*/

void calcular_preco(char **produtos, double *precos, int total){
    int I, qntd;

    scanf("%d", &qntd);

    //alocando memoria para a matriz e o vetor
    char **escolhas=(char **)malloc(qntd*(sizeof(char *)));
    for(I=0; I<qntd; I++){
        escolhas[I]=(char *)malloc(15*(sizeof(char)));
    }

    int *qntd_produtos=(int *)malloc(qntd*(sizeof(int)));

    for(I=0; I<qntd; I++){
        scanf("%s %d", escolhas[I], &qntd_produtos[I]);
    }

    int II;
    double soma=0;
    for(I=0; I<qntd; I++){
        for(II=0; II<total; II++){
            if(strcmp(escolhas[I], produtos[II]) == 0) soma+=qntd_produtos[I]*precos[II];
        }
    }

    printf("R$ %.2lf\n", soma);

    //liberando memoria alocada
    for(I=0; I<qntd; I++){
        free(produtos[I]);
    }
    free(produtos);
    free(precos);
}

void ler_qntd_disp(int qntd){

    int I;

    //alocando memoria para a matriz e o vetor
    double *valor;
    valor=malloc(qntd*(sizeof(double)));

    char **produto;
    produto=(char **)malloc(qntd*(sizeof(char *)));
    for(I=0; I<qntd; I++){
        produto[I]=(char *)malloc(15*(sizeof(char)));
    }

    for(I=0; I<qntd; I++){
        scanf("%s %lf", produto[I], &valor[I]);
    }
  
    calcular_preco(produto, valor, qntd);

    //liberando memoria alocada
    for(I=0; I<qntd; I++){
        free(produto[I]);
    }
    free(produto);
    free(valor);
}


int main(){

    int casos, I, qntd_disp;

    scanf("%d", &casos);

    I=0;
    while(I<casos){
        scanf("%d", &qntd_disp);

        ler_qntd_disp(qntd_disp);

        I++;
    }    

    return 0;
}