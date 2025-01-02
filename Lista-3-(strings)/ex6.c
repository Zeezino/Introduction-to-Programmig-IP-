#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
    programa criado em 10/06/24
    ler palavra de até 200 caracteres e ver se é palíndromo
    não conta espaços*/
/*
    vamos ler a string, analisar a string do começo pro final
    e depois ler do final pro começo (os caracteres tem que ser
    (iguais)*/
/*  
    ler o programa por EOF*/


int main(){

    char str[201], str_semespaco[201], virado[201];
    int I, II, III, tam;

    while(fgets(str, 201, stdin) != NULL){

        tam = strlen(str);
        II=0;
        for(I=0; I<tam; I++){
            if(isalpha(str[I])){
                str_semespaco[II]=str[I];
                II++;
            }
        }
        str_semespaco[II]='\0';

        III=0;
        for(I=II-1; I>=0; I--){
            virado[III]=str_semespaco[I];
            III++;
        }
        virado[III]='\0';

        if(strcmp(str_semespaco, virado)!=0) printf("nao\n");
        else printf("sim\n");
    }




    return 0;
}