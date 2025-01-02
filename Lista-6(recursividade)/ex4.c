#include <stdio.h>
#include <stdlib.h>
 
 
int somatorio(int n){
    int count = n;
 
    if(n < 0) return 0;
 
    return count + somatorio(n-1);
}
 
 
int main(){
 
    int casos, I, soma, n;
    //n equivale ao valor de numeros que serao somados com razao 1
 
    scanf("%d", &casos);
    getchar();

    I=0;
    while(I<casos){
        scanf("%d", &n);

        int *vet;
        vet = (int *)malloc(n*sizeof(int));
 
        soma = somatorio(n);
 
        printf("%d\n", soma);
 
        I++;
        free(vet);
    }
 
    return 0;
}