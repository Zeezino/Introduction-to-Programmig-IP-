#include <stdio.h>

int main() {
    int matricula;
    double notas_prova[8], notas_lista[5], nota_trabalho, presenca;
    int i; // Movendo a declaração de i para fora do loop

    // Lendo os dados dos alunos
    while (1) {
        scanf("%d", &matricula);
        
        // Verificando se é o final da entrada
        if (matricula == -1) 
            break;

        // Lendo as notas das provas
        for (i = 0; i < 8; i++) { // Removendo a declaração de i do loop
            scanf("%lf", &notas_prova[i]);
        }

        // Lendo as notas das listas
        for (i = 0; i < 5; i++) { // Removendo a declaração de i do loop
            scanf("%lf", &notas_lista[i]);
        }

        // Lendo a nota do trabalho final e a presença
        scanf("%lf %lf", &nota_trabalho, &presenca);

        // Calculando a média das notas das provas
        double media_prova = 0.0;
        for (i = 0; i < 8; i++) {
            media_prova += notas_prova[i];
        }
        media_prova /= 8.0;

        // Calculando a média das notas das listas
        double media_lista = 0.0;
        for (i = 0; i < 5; i++) {
            media_lista += notas_lista[i];
        }
        media_lista /= 5.0;

        // Calculando a nota final
        double nota_final = 0.7 * media_prova + 0.15 * media_lista + 0.15 * nota_trabalho;

        // Verificando a situação do aluno
        const double carga_horaria_minima = 128;
        if (presenca >= (0.75 * carga_horaria_minima) && nota_final >= 6) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: APROVADO\n", matricula, nota_final);
        } else if (presenca >= (0.75 * carga_horaria_minima)) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA\n", matricula, nota_final);
        } else if (nota_final >= 6) {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR FREQUENCIA\n", matricula, nota_final);
        } else {
            printf("Matricula: %d, Nota Final: %.2lf, Situacao Final: REPROVADO POR NOTA E POR FREQUENCIA\n", matricula, nota_final);
        }
    }
    
    return 0;
}
