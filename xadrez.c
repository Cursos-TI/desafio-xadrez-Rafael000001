#include <stdio.h>

int main() {
    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    int casas_torre = 5;
    for (int i = 0; i < casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e direita) usando while
    printf("Movimento do Bispo:\n");
    int casas_bispo = 5;
    int contador_bispo = 0;
    while (contador_bispo < casas_bispo) {
        printf("Cima, Direita\n");
        contador_bispo++;
    }
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("Movimento da Rainha:\n");
    int casas_rainha = 8;
    int contador_rainha = 0;
    do {
        printf("Esquerda\n");
        contador_rainha++;
    } while (contador_rainha < casas_rainha);
    printf("\n");

    // Movimento do Cavalo (2 casas para baixo e 1 para esquerda) usando loops aninhados
    printf("Movimento do Cavalo:\n");
    int casas_baixo = 2;  // Primeira parte do L: 2 casas para baixo
    int casas_esquerda = 1;  // Segunda parte do L: 1 casa para esquerda
    
    // Loop for para controlar as direções principais do movimento
    for (int etapa = 1; etapa <= 2; etapa++) {
        // Loop while para controlar cada parte do movimento
        int contador = 0;
        while (contador < (etapa == 1 ? casas_baixo : casas_esquerda)) {
            if (etapa == 1) {
                printf("Baixo\n");  // Primeira parte do L
            } else {
                printf("Esquerda\n");  // Segunda parte do L
            }
            contador++;
        }
    }

    return 0;
}