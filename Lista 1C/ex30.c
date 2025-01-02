#include <stdio.h>

int main() {
    int n, original, divisor = 2, primeiro = 1;
    
    // Loop até que o número seja válido (maior que 1)
    while (1) {
        scanf("%d", &n);

        // Verifica se o número é válido
        if (n > 1) {
            original = n;
            break;
        } else {
            printf("Fatoracao nao e possivel para o numero %d!\n", n);
        }
    }

    // Calculando a fatoração em números primos
    printf("%d = ", original);
    while (n > 1) {
        if (n % divisor == 0) {
            if (primeiro) {
                printf("%d", divisor);
                primeiro = 0;
            } else {
                printf(" x %d", divisor);
            }
            n /= divisor;
        } else {
            divisor++;
        }
    }
    printf("\n");
    
    return 0;
}
