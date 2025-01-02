#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void buscar_pais(char *p){
    if (strcmp(p, "brasil") == 0) {
        printf("Feliz Natal!\n");
    } else if (strcmp(p, "alemanha") == 0) {
        printf("Frohliche Weihnachten!\n");
    } else if (strcmp(p, "austria") == 0) {
        printf("Frohe Weihnacht!\n");
    } else if (strcmp(p, "coreia") == 0) {
        printf("Chuk Sung Tan!\n");
    } else if (strcmp(p, "espanha") == 0) {
        printf("Feliz Navidad!\n");
    } else if (strcmp(p, "grecia") == 0) {
        printf("Kala Christougena!\n");
    } else if (strcmp(p, "estados-unidos") == 0 || strcmp(p, "inglaterra") == 0 || strcmp(p, "australia") == 0 ||
               strcmp(p, "antardida") == 0 || strcmp(p, "canada") == 0) {
        printf("Merry Christmas!\n");
    } else if (strcmp(p, "portugal") == 0) {
        printf("Feliz Natal!\n");
    } else if (strcmp(p, "suecia") == 0) {
        printf("God Jul!\n");
    } else if (strcmp(p, "turquia") == 0) {
        printf("Mutlu Noeller\n");
    } else if (strcmp(p, "argentina") == 0 || strcmp(p, "chile") == 0 || strcmp(p, "mexico") == 0) {
        printf("Feliz Navidad!\n");
    } else if (strcmp(p, "irlanda") == 0) {
        printf("Nollaig Shona Dhuit!\n");
    } else if (strcmp(p, "belgica") == 0) {
        printf("Zalig Kerstfeest!\n");
    } else if (strcmp(p, "italia") == 0 || strcmp(p, "libia") == 0) {
        printf("Buon Natale!\n");
    } else if (strcmp(p, "siria") == 0 || strcmp(p, "marrocos") == 0) {
        printf("Milad Mubarak!\n");
    } else if (strcmp(p, "japao") == 0) {
        printf("Merii Kurisumasu!\n");
    } else {
        printf("-- NOT FOUND --\n");
    }
}


int main(){
    char pais[100];

    while(scanf("%s", pais)!=EOF){
        buscar_pais(pais);
    }
    
    return 0;
}