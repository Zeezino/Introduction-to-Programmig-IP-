#include <stdio.h>

int main() {
    int n;
    double soma = 0.0;
    int k; // Declaração movida para fora do loop

    // Lendo o valor de n
    scanf("%d", &n);

    // Verificando se n é válido
    if (n <= 1) {
        printf("Numero invalido!\n");
        return 0;
    }

    // Calculando a soma
    for (k = 1; k <= n; k++) {
        soma += 1.0 / k;
    }

    // Imprimindo o resultado com 6 casas decimais
    printf("%.6lf\n", soma);

    return 0;
}