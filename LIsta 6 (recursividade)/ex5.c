#include <stdio.h>
#include <stdlib.h>
 
 
int somatorio(int *vet, int tam){
    int count = vet[tam];
 
    if(tam < 0) return 0;
 
    return count + somatorio(vet, tam-1);
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

        int II;
        for(II=0; II<n; II++){
            scanf("%d", &vet[II]);
        }
 
        soma = somatorio(vet, n-1);
 
        printf("%d\n", soma);
 
        I++;
        free(vet);
    }
 
    return 0;
}