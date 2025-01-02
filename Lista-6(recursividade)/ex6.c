#include <stdio.h>
#include <stdlib.h>

int somatorio(int *vet, int tam){
    int count = vet[tam];
 
    if(tam == 0) return 0;
 
    return count + somatorio(vet, tam-1);
}


int main(){

    int I, casos, n;
    //n eh o numero de coelhos

    scanf("%d", &casos);
    getchar();

    I=0;
    while (I<casos)
    {
        scanf("%d", &n);    

        int *vet = (int *)malloc(n*sizeof(int));

        int II;
        for(II=1; II<=n; II++){
            if(II % 2 == 0) vet[II] = 3;
            else vet[II] = 2;
        }

        int soma = somatorio(vet, n);

        printf("%d\n", soma);

        I++;
    }

    return 0;
}