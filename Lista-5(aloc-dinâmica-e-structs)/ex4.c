#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct coordenada{
    double u, x, y, z;
    double norma;
};

double calc_norma(double u, double x, double y, double z){
    double norma;

    norma = sqrt(u*u+ x*x + y*y + z*z);

    return norma;
}

void ordenar();


int main(){

    int casos, I, II;
    double guarda;

    scanf("%d", &casos);

    struct coordenada vetor[casos];

    for(I=0; I<casos; I++){
        scanf("%lf %lf %lf %lf", &vetor[I].u, &vetor[I].x, &vetor[I].y, &vetor[I].z);
        vetor[I].norma = calc_norma(vetor[I].u, vetor[I].x, vetor[I].y, vetor[I].z);
    }


    for(I=1; I<casos; I++){
        guarda = vetor[I].norma;

        for(II=I-1; II>=0 ; II--){
            if(vetor[II].norma > guarda){
                vetor[II+1].norma = vetor[II].norma;
                ordenar(vetor[II], vetor[I]);
            }
        }
        vetor[II+1].norma=guarda;
    }







    return 0;
}