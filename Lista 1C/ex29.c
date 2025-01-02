#include <stdio.h>
#include <math.h>

#define M_PI 3.14159265358979323846

int main() {
    double x;
    int N;

    // Lendo o valor de x e N
    scanf("%lf %d", &x, &N);

    // Convertendo o ângulo para o intervalo [0, 2*pi]
    while (x < 0) {
        x += 2 * M_PI;
    }
    while (x >= 2 * M_PI) {
        x -= 2 * M_PI;
    }

    // Inicializando o seno
    double seno = x;
    double termo = x;
    int sinal = -1;

    // Calculando o seno usando a série de Taylor
    int n;
    for (n = 1; n <= N; n++) {
        termo *= (x * x) / ((2 * n) * (2 * n + 1));
        seno += sinal * termo;
        sinal *= -1;
    }

    // Imprimindo o resultado
    printf("seno(%.2lf) = %.6lf\n", x, seno);

    return 0;
}
