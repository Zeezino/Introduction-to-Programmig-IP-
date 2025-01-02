#include <stdio.h>
#include <string.h>

// Função para buscar a frase de Natal correspondente ao país
void buscarFrase(char *pais) {
    if (strcmp(pais, "brasil") == 0) {
        printf("Feliz Natal!\n");
    } else if (strcmp(pais, "alemanha") == 0) {
        printf("Frohliche Weihnachten!\n");
    } else if (strcmp(pais, "austria") == 0) {
        printf("Frohe Weihnacht!\n");
    } else if (strcmp(pais, "coreia") == 0) {
        printf("Chuk Sung Tan!\n");
    } else if (strcmp(pais, "espanha") == 0) {
        printf("Feliz Navidad!\n");
    } else if (strcmp(pais, "grecia") == 0) {
        printf("Kala Christougena!\n");
    } else if (strcmp(pais, "estados-unidos") == 0 || strcmp(pais, "inglaterra") == 0 || strcmp(pais, "australia") == 0 ||
               strcmp(pais, "antardida") == 0 || strcmp(pais, "canada") == 0) {
        printf("Merry Christmas!\n");
    } else if (strcmp(pais, "portugal") == 0) {
        printf("Feliz Natal!\n");
    } else if (strcmp(pais, "suecia") == 0) {
        printf("God Jul!\n");
    } else if (strcmp(pais, "turquia") == 0) {
        printf("Mutlu Noeller\n");
    } else if (strcmp(pais, "argentina") == 0 || strcmp(pais, "chile") == 0 || strcmp(pais, "mexico") == 0) {
        printf("Feliz Navidad!\n");
    } else if (strcmp(pais, "irlanda") == 0) {
        printf("Nollaig Shona Dhuit!\n");
    } else if (strcmp(pais, "belgica") == 0) {
        printf("Zalig Kerstfeest!\n");
    } else if (strcmp(pais, "italia") == 0 || strcmp(pais, "libia") == 0) {
        printf("Buon Natale!\n");
    } else if (strcmp(pais, "siria") == 0 || strcmp(pais, "marrocos") == 0) {
        printf("Milad Mubarak!\n");
    } else if (strcmp(pais, "japao") == 0) {
        printf("Merii Kurisumasu!\n");
    } else {
        printf("-- NOT FOUND --\n");
    }
}

int main() {
    char pais[100];

    // Enquanto houver entrada, continue lendo e buscando a frase correspondente
    while (scanf("%s", pais) != EOF) {
        buscarFrase(pais);
    }

    return 0;
}
