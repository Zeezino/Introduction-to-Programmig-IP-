#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void){
    int *tamanho, tam;
    char *caracteristica, carac[20];

    printf("Coloque o tamanho e a caracteristica da rola no bumbum do pedro\n\n");
    printf("Caracteristicas: preta, veiuda, grossa ou torta\n\n");

    scanf("%d %s", &tam, carac);
    printf("\n");

    tamanho = (int *)malloc(tam * sizeof(int));
    caracteristica = (char *)malloc((strlen(carac)+1) * sizeof(char));

    strcpy(caracteristica, carac);
    *tamanho = tam;

    if(tam>=0 && tam<11){
        if(strcmp(caracteristica, "preta")==0) printf("nem sentiu, mas tem o fenotipo que ele gosta\n");
        else if(strcmp(caracteristica, "veiuda")==0) printf("nem sentiu, mas impressionou\n");
        else if(strcmp(caracteristica, "grossa")==0) printf("famosa picthulinha, n entrou mas alargou\n");
        else if(strcmp(caracteristica, "torta")==0) printf("quase saiu pela tangente\n");
    }

    else if(tam>10 && tam<16){
        if(strcmp(caracteristica, "preta")==0) printf("criou muita expectativa pela cor, ele se arrependeu\n");
        else if(strcmp(caracteristica, "veiuda")==0) printf("mais parrudinha\n");
        else if(strcmp(caracteristica, "grossa")==0) printf("pitchula original, fez um estragozin\n");
        else if(strcmp(caracteristica, "torta")==0) printf("saiu meio manco dps\n");
    }
    
    else if(tam>15 && tam<20){
        if(strcmp(caracteristica, "preta")==0) printf("fez mais sentido pro meninu, goxtou\n");
        else if(strcmp(caracteristica, "veiuda")==0) printf("soh os cano pvc na trolha\n");
        else if(strcmp(caracteristica, "grossa")==0) printf("pitchula brabissimo, pedrao arregou\n");
        else if(strcmp(caracteristica, "torta")==0) printf("comecou a senti a medula ossea sendo desgastada\n");
    }

    else if(tam>19){
        if(strcmp(caracteristica, "preta")==0) printf("a preferida dele\n");
        else if(strcmp(caracteristica, "veiuda")==0) printf("tava parecendo o venom ja, ficou assustado\n");
        else if(strcmp(caracteristica, "grossa")==0) printf("press F no chat para o pedrao\n");
        else if(strcmp(caracteristica, "torta")==0) printf("ficou paraplegico\n");
    }

    printf("\n");

    free(tamanho);
    free(caracteristica);


    return 0;
}