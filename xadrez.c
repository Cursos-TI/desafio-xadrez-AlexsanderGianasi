#include <stdio.h>

int main() {

    // Quantidade de casas para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    // Movimento do Cavalo
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("=== Movimentacao da Torre ===\n");
    /* 
        A Torre se movimenta em linha reta.
        Aqui usamos o loop FOR para mover 5 casas para a direita.
    */
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n=== Movimentacao do Bispo ===\n");
    /* 
        O Bispo se movimenta na diagonal.
        Usamos WHILE para mover 5 casas na diagonal: "Cima, Direita".
    */
    int contador = 1;
    while (contador <= casasBispo) {
        printf("Cima, Direita\n");
        contador++;
    }

    printf("\n=== Movimentacao da Rainha ===\n");
    /*
        A Rainha pode se mover em todas as direções.
        Aqui usamos DO-WHILE para mover 8 casas para a esquerda.
    */
    int passos = 1;
    do {
        printf("Esquerda\n");
        passos++;
    } while (passos <= casasRainha);

    // -------------------------------
    // MOVIMENTO DO CAVALO
    // -------------------------------
    printf("\n=== Movimentacao do Cavalo ===\n");

    /*
        O Cavalo se move em "L":
        - 2 casas em uma direção (aqui: para baixo)
        - 1 casa perpendicular (aqui: para a esquerda)

        Requisito: usar loops ANINHADOS, sendo um FOR obrigatório.
        Estrutura escolhida:
            - Loop FOR externo -> controla as 2 casas "Baixo"
            - Loop WHILE interno -> controla a 1 casa "Esquerda"
    */

    for (int i = 1; i <= casasBaixo; i++) {
        printf("Baixo\n");   // Cada repetição representa uma casa
    }

    // Agora a parte perpendicular do L
    int j = 1;
    while (j <= casasEsquerda) {
        printf("Esquerda\n");
        j++;
    }

    return 0;
}