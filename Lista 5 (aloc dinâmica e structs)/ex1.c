#include <stdio.h>

// Função para verificar se duas frações são equivalentes
int saoEquivalentes(int num1, int den1, int num2, int den2) {
    return num1 * den2 == num2 * den1;
}

int main() {
    int casos, i, j, k;
    scanf("%d", &casos);

    for (i = 1; i <= casos; i++) {
        int tamanho;
        scanf("%d", &tamanho);
        
        int numerador[50], denominador[50]; // declaração dos arrays com tamanho máximo
        for (j = 0; j < tamanho; j++) {
            scanf("%d/%d", &numerador[j], &denominador[j]);
        }

        printf("Caso de teste %d\n", i);

        int encontrou = 0;
        for (j = 0; j < tamanho - 1; j++) {
            for (k = j + 1; k < tamanho; k++) {
                if (saoEquivalentes(numerador[j], denominador[j], numerador[k], denominador[k])) {
                    printf("%d/%d equivalente a %d/%d\n", numerador[j], denominador[j], numerador[k], denominador[k]);
                    encontrou = 1;
                }
            }
        }

        if (!encontrou) {
            printf("Nao ha fracoes equivalentes na sequencia\n");
        }
    }

    return 0;
}
