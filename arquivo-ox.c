#include <stdio.h>
#include <stdlib.h>

int validar_caractere(char c);

int main(int argc, char *argv[]) {

    if (argc != 11) {
        printf("Uso: %s arquivo.txt O X O X O X O X O\n", argv[0]);
        return 1;
    }

    FILE *arquivo = fopen(argv[1], "w");

    if (arquivo == NULL) {
        printf("Erro ao criar arquivo.\n");
        return 1;
    }

    int indice = 2;

    for (int linha = 0; linha < 3; linha++) {

        fprintf(arquivo, "| ");

        for (int coluna = 0; coluna < 3; coluna++) {

            char c = argv[indice][0];

            if (!validar_caractere(c)) {
                printf("Caractere invalido: %c\n", c);
                fclose(arquivo);
                return 1;
            }

            fprintf(arquivo, "%c | ", c);
            indice++;
        }

        fprintf(arquivo, "\n");
    }

    fprintf(arquivo, "\n");
    fprintf(arquivo, "Criado por Ana Beatriz Von Zastrow de Moraes\n");

    fclose(arquivo);

    printf("Arquivo criado com sucesso.\n");

    return 0;
}
