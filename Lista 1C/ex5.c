#include <stdio.h>

int main()
{
    int a1, r, n, sum;

    // Lendo os valores de entrada
    scanf("%d %d %d", &a1, &r, &n);

    // Calculando a soma dos n primeiros elementos da progressão aritmética
    sum = (n * (2 * a1 + (n - 1) * r)) / 2;

    // Imprimindo o resultado
    printf("%d\n", sum);

    return 0;
    
}