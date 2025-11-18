#include <stdio.h>

int main()
{

    // Quantidade de casas a percorrer para cada peça
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimentacao da Torre ===\n");
    /*
        A Torre se movimenta em linha reta.
        Aqui usamos o loop FOR para mover 5 casas para a direita.
    */
    for (int i = 1; i <= casasTorre; i++)
    {
        printf("Direita\n");
    }

    printf("\n=== Movimentacao do Bispo ===\n");
    /*
        O Bispo se movimenta em diagonal.
        Usaremos WHILE para mover 5 casas na diagonal:
        "Cima, Direita"
    */
    int contador = 1;
    while (contador <= casasBispo)
    {
        printf("Cima, Direita\n");
        contador++;
    }

    printf("\n=== Movimentacao da Rainha ===\n");
    /*
        A Rainha pode se mover em todas as direções.
        Aqui usamos DO-WHILE para mover 8 casas para a esquerda.
    */
    int passos = 1;
    do
    {
        printf("Esquerda\n");
        passos++;
    } while (passos <= casasRainha);

    return 0;
}
