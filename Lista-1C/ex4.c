#include <stdio.h>

int main() {
    int x, y, i; // Declaração de i movida para o início da função
    
    // Lendo os números x e y
    scanf("%d %d", &x, &y);

    // Verificando se x é par
    if (x % 2 == 0) {
        // Imprimindo a sequência de números pares
        for (i = 0; i < y; i++) {
            printf("%d ", x + 2 * i);
        }
        printf("\n");
    } else {
        // Caso x não seja par
        printf("O PRIMEIRO NUMERO NAO E PAR\n");
    }
    
    return 0;
}
