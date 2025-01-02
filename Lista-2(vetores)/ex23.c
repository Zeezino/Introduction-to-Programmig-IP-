#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>

void freq(char *str, int *freq){
    int I;
    for(I=0; str[I] !='\0'; I++){
        if(str[I] == 'a' || str[I] == 'A') freq[0]++;
        else if(str[I] == 'e' || str[I] == 'E') freq[1]++;
        else if(str[I] == 'i' || str[I] == 'I') freq[2]++;
        else if(str[I] == 'o' || str[I] == 'O') freq[3]++;
        else if(str[I] == 'u' || str[I] == 'U') freq[4]++;
        }
    }

double dist(int *fA, int *fB){
    double distancia, soma=0;
    int I;

    for(I=0; I<5; I++){
        soma += pow(fA[I]-fB[I], 2);
    }
    distancia=sqrt(soma);

    return distancia;
}


int main(){
    char str[1001], A[1001], B[1001];
    int I, II;
    int freqA[5]={0}, freqB[5]={0};


    fgets(str, 1001, stdin);

    if(strchr(str, ';')==NULL || strchr(str, ';') != strrchr(str, ';')){
        printf("FORMATO INVALIDO!\n");
        return 1;
    }
    
    I=0;
    while(str[I]!=';'){
        A[I]=str[I];
        I++;
    }
    A[I]='\0';

    I++;
    II=0;
    while(str[I]!='\0'){
        B[II]=str[I];
        I++; II++;
    }
    B[II]='\0';

    freq(A, freqA);
    freq(B, freqB);

    double distancia = dist(freqA, freqB);

    printf("(");
    for(I=0; I<5; I++){
        if(I==4) printf("%d", freqA[I]);
        else printf("%d,", freqA[I]);
    }
    printf(")\n");

    printf("(");
    for(I=0; I<5; I++){
        if(I==4) printf("%d", freqB[I]);
        else printf("%d,", freqB[I]);
    }
    printf(")\n");

    printf("%.2lf\n", distancia);

    
    return 0;
}