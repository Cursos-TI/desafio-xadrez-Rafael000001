#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas para a direita)
void moverTorre(int casas) {
    if (casas <= 0) return;  // Caso base
    printf("Direita\n");
    moverTorre(casas - 1);   // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (5 casas na diagonal)
void moverBispo(int casas) {
    if (casas <= 0) return;  // Caso base
    printf("Cima, Direita\n");
    moverBispo(casas - 1);   // Chamada recursiva
}

// Implementação com loops aninhados para o Bispo (alternativa)
void moverBispoComLoops() {
    int casas = 5;
    // Loop externo para controle vertical
    for (int i = 0; i < casas; i++) {
        // Loop interno para controle horizontal
        for (int j = 0; j < 1; j++) {  // Apenas 1 iteração para combinar as direções
            printf("Cima, Direita\n");
        }
    }
}

// Função recursiva para o movimento da Rainha (8 casas para a esquerda)
void moverRainha(int casas) {
    if (casas <= 0) return;  // Caso base
    printf("Esquerda\n");
    moverRainha(casas - 1);  // Chamada recursiva
}

// Função para o movimento complexo do Cavalo (2 cima, 1 direita)
void moverCavalo() {
    int cima = 2, direita = 1;
    int i, j;
    
    // Loop externo para controlar as direções principais
    for (i = 0; i < 2; i++) {
        // Loop interno para controlar cada parte do movimento
        j = 0;
        while (1) {
            if (i == 0 && j >= cima) break;  // Sai após 2 movimentos para cima
            if (i == 1 && j >= direita) break; // Sai após 1 movimento para direita
            
            if (i == 0) {
                printf("Cima\n");
            } else {
                printf("Direita\n");
            }
            j++;
            
            // Controle adicional com continue
            if (j < ((i == 0) ? cima : direita)) continue;
            else break;
        }
    }
}

int main() {
    // Movimento da Torre (recursivo)
    printf("Movimento da Torre (recursivo):\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (recursivo)
    printf("Movimento do Bispo (recursivo):\n");
    moverBispo(5);
    printf("\n");

    // Movimento do Bispo (com loops aninhados)
    printf("Movimento do Bispo (loops aninhados):\n");
    moverBispoComLoops();
    printf("\n");

    // Movimento da Rainha (recursivo)
    printf("Movimento da Rainha (recursivo):\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (loops complexos)
    printf("Movimento do Cavalo (loops complexos):\n");
    moverCavalo();
    printf("\n");

    return 0;
}