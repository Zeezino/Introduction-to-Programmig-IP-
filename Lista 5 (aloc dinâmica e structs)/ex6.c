#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/* codigo criado 23.06.2024*/
/*
    colocar a qntd de nomes que serao lidos, com tamanho
    estatico*/
/*
    */


int main(){

    char nome[1001];
    int casos, I;
    char **p;

    scanf("%d", &casos);
    getchar();

    p=(char **)malloc(casos*(sizeof(char *)));

    int tam;
    for(I=0; I<casos; I++){
        fgets(nome, 1001, stdin);
        nome[strcspn(nome, "\n")]='\0';
        tam = strlen(nome)+1;

        p[I]=(char *)malloc(tam*(sizeof(char)));

        strcpy(p[I], nome);

        printf("%s\n", p[I]);
    }

    for(I=0; I<casos; I++){
        free(p[I]);
    }
    free(p);

    return 0;
}