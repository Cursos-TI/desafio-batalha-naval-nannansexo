#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
//    int tabuleiro [5][5] = {
//        {0, 0, 0, 0, 0},
//        {0, 0, 0, 0, 0}, 
//        {0, 0, 0, 0, 0},
//        {0, 0, 0, 0, 0},
//        {0, 0, 0, 0, 0}
//   };
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    //vertical
//    tabuleiro [0][0] = 1;
//    tabuleiro [1][0] = 1;
//    tabuleiro [2][0] = 1;

    //horizontal
//    tabuleiro [1][2] = 1;
//    tabuleiro [1][3] = 1;
//    tabuleiro [1][4] = 1;

    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.
//    printf ("o navio vertical esta na coluna %d, e nas linhas %d, %d, %d\n", 0, 0, 1, 2);
//    printf ("o navio horizontal esta na linha %d, e nas colunas %d, %d, %d\n", 1, 2, 3, 4);

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal

    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    int tabuleiro [10][10]; //= {
       //0  1  2  3  4  5  6  7  8  9
//       {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //0
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //1
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //2
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //3
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //4
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //5
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //6
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //7
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, //8
//        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}  //9
//   };
    //primeiro colchete COULUNA
    //segundo colchete LINHA
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro [i][j] = 0;
     // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
         //vertical
    tabuleiro [0][0] = 3;
    tabuleiro [1][0] = 3;
    tabuleiro [2][0] = 3;

        //horizontal
    tabuleiro [1][2] = 3;
    tabuleiro [1][3] = 3;
    tabuleiro [1][4] = 3;

        //diagonal 1
    tabuleiro [9][0] = 3;
    tabuleiro [8][1] = 3;
    tabuleiro [7][2] = 3;

        //diagonal 2
    tabuleiro [4][7] = 3;
    tabuleiro [5][8] = 3;
    tabuleiro [6][9] = 3;

            printf("%d", tabuleiro [i][j]);
        }
    }



    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.
//    printf ("%d\n",tabuleiro [10][10]);
    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
