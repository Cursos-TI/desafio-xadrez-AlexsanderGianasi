#include <stdio.h>

/*
===============================================================================
FUNÇÕES RECURCIVAS PARA TORRE, BISPO E RAINHA EM UM TABULEIRO DE XADREZ
===============================================================================
*/

/*
    Funçoes para mover a torre.
    Move-se apenas em linha reta (para a direita, no caso desse codigo).
*/

void moverTorre(int casas)
{
    if (casas == 0)
        return;

    printf("Direita.\n");

    moverTorre(casas - 1);
}

/*
    Funçoes para mover o bispo.
    Move-se apenas em diagonal (para a direita e para frente, no caso desse codigo).
    Depois, loops aninhados imprimem a mesma direção, mas com controle vertical/ horizontal separados.
*/

void moverBispo(int casas)
{
    if (casas == 0)
        return;

    // Movimento Diagonal
    printf("Cima, Direita. \n");

    moverBispo(casas - 1);
}

/*
    Função para mover a rainha.
    No caso deste codigo a rainha se movera apenas para a esquerda.
*/
void moverRainha(int casas)
{
    if (casas == 0)
        return;

    printf("Esquerda.\n");

    moverRainha(casas - 1);
}

/*
===================================================================================
LOOP COMPLEXO PARA O CAVALO
Duas casas para cima e uma casa para a direita.
loops aninhados com múltiplas variáveis, break e continue.
===================================================================================
*/

void moverCavalo()
{

    int movVertical = 2;   // Duas casas para cima
    int movHorizontal = 1; // Uma casa para a direita

    printf("=== Movendo o cavalo ===\n");

    /*
        loop externo controla o movimento vertical.
        loop interno controla o movimento horizontal.
        Uso de múltiplas variáveis e condições.
    */

    for (int i = 1, limite = movVertical; i <= limite; i++)
    {
        if (i < 0)
        {
            continue;
        }

        printf("Cima.\n");

        // loop interno para o movimento horizontal
        for (int j = 1; j <= movHorizontal; j++)
        {
            if (j > movHorizontal)
            {
                break;
            }

            if (i == movVertical && j == movHorizontal)
            {
                printf("Direita.\n");
            }
        }
    }
}

/*
===================================================================================
Loops aninhados para o bisbo
obs : Exigencia do desafio: loop externo vertical, interno horizontal.
===================================================================================
*/

void movimentoBispoLoops(int casas){
    printf("=== Movendo o bispo com loops aninhados ===\n");

    for (int linha = 1; linha <= casas; linha++) {

        for (int coluna = 1; coluna <= linha; coluna++) {
        // O movimento diagonal é Cima + Direita
        printf("Cima, Direita.\n");
        }
    }   
}

int main () {

    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("=== Movimentação da Torre ===\n");
    moverTorre(casasTorre);

    printf("=== Movimentação do Bispo ===\n");
    moverBispo(casasBispo);

    printf("=== Movimentação da Rainha ===\n");
    moverRainha(casasRainha);

    printf("\n"); // apenas estética

    moverCavalo();

    printf("\n"); // apenas estética

    movimentoBispoLoops(casasBispo); // loops aninhados obrigatórios

    return 0;
}
