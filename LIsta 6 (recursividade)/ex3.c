#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
 
int ler5(char *str,int tam){
    int count;
 
    if(tam < 0) return 0;
 
    if(str[tam] == '5') count = 1;
 
    else count = 0;
 
    return count + ler5(str, tam-1);
}
 
 
int main(){
 
    int casos, I, qntdX, tam;
 
    scanf("%d", &casos);
    getchar();
 
    char **str;
    str = (char **)malloc(casos*sizeof(char*));
 
    for(I=0; I<casos; I++){
        str[I] = (char *)malloc(1001*sizeof(char));
    }
 
    I=0;
    while(I<casos){
        fgets(str[I], 1001, stdin);
 
        tam = strlen(str[I]);
 
        if(str[I][tam-1] == '\n'){
            str[I][tam-1] = '\0';
            tam--;
        }
        else tam--;
 
        qntdX = ler5(str[I], tam);
 
        printf("%d\n", qntdX);
 
        I++;
    }
 
    for(I=0; I<casos; I++){
        free(str[I]);    
    }
    free(str);
 
    return 0;
}