#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int casos;
    scanf("%d", &casos);

    // Loop principal para cada caso de teste
    for (int i = 0; i < casos; i++) {
        int produtos_disponiveis;
        scanf("%d", &produtos_disponiveis);

        // Alocação dinâmica para os nomes e preços dos produtos
        char **nomes_produtos = (char **)malloc(produtos_disponiveis * sizeof(char *));
        double *precos_produtos = (double *)malloc(produtos_disponiveis * sizeof(double));

        // Lendo os produtos disponíveis e seus preços
        for (int j = 0; j < produtos_disponiveis; j++) {
            nomes_produtos[j] = (char *)malloc(50 * sizeof(char));
            scanf("%s %lf", nomes_produtos[j], &precos_produtos[j]);
        }

        int produtos_comprados;
        scanf("%d", &produtos_comprados);

        double total = 0;

        // Lendo os produtos que Dona Parcinova deseja comprar
        for (int j = 0; j < produtos_comprados; j++) {
            char produto[50];
            int quantidade;
            scanf("%s %d", produto, &quantidade);

            // Procurando o produto na lista de produtos disponíveis
            for (int k = 0; k < produtos_disponiveis; k++) {
                if (strcmp(nomes_produtos[k], produto) == 0) {
                    total += precos_produtos[k] * quantidade;
                    break;
                }
            }
        }

        // Liberando a memória alocada para os nomes e preços dos produtos
        for (int j = 0; j < produtos_disponiveis; j++) {
            free(nomes_produtos[j]);
        }
        free(nomes_produtos);
        free(precos_produtos);

        printf("R$ %.2lf\n", total);
    }

    return 0;
}
