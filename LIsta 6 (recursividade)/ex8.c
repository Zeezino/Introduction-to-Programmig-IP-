#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
 
 
void formatar_str(char *str, int tam){
    int I, II=0;
 
    for(I=0; I<tam; I++){
        if(isalpha(str[I]) != 0){
            str[II] = str[I];
            II++;
        }
    }
    str[II]='\0';
 
    for(I=0; I<II; I++){
        str[I] = tolower(str[I]);
    }
}
 
int palindromo(char *str, int ultimo, int primeiro){
    if(ultimo == -1) return 0;
 
    if(str[ultimo] == str[primeiro]) return 1 + palindromo(str, ultimo-1, primeiro+1);
 
    return palindromo(str, ultimo-1, primeiro+1);
}
 
 
int main(){
    int casos, I, condicional;
    int n, tam;
 
    scanf("%d", &casos);
    char str[casos][2001];
 
    I=0;
    while(I<casos){
        scanf("%d", &n);
        getchar();
            
        tam = (n*2);
 
        fgets(str[I], tam, stdin);
        formatar_str(str[I], tam);
 
        condicional = palindromo(str[I], n-1, 0);
 
        if(condicional > n/2) printf("PALINDROMO\n");
        else printf("NAO PALINDROMO\n");
 
        I++;
    }
    
 
    return 0;
}