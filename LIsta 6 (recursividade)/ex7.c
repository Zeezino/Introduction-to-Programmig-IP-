#include <stdio.h>
#include <stdlib.h>
 
int log(int logaritmando){
    int quociente = logaritmando/2;
    int count = 1;
 
    if(quociente == 1) return 1;
 
    return count + log(quociente);
}
 
 
 
int main(){
    int casos, I;
 
    scanf("%d", &casos);
    getchar();
 
    int entrada[casos], saida[casos];
 
    for(I=0; I<casos; I++){
        scanf("%d", &entrada[I]);
    }
 
    for(I=0; I<casos; I++){
        saida[I] = log(entrada[I]);
    }
 
    for(I=0; I<casos; I++){
        printf("%d\n", saida[I]);
    }
    
 
    return 0;
}