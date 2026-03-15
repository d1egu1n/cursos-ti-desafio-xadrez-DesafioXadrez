#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void movebispo(int casas) {
    if (casas > 0)
    {
        for (int x = 0; x < 1; x++)
        {
            for (int y = 0; y < 1; y++)
            {
                printf("Cima\n");
                printf("Direita\n");
                
            }
            
        }
        movebispo(casas - 1);
    }
    
}

void movetorre(int casas1) {
    if (casas1 > 0)
    {
        printf("Direita\n");
        movetorre(casas1 - 1);
    }
    
}

void moverainha(int casas2) {
    if (casas2 > 0)
    {
        printf("Esquerda\n");
        moverainha(casas2 - 1);
    }
    
}

int main() {
    

    
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.
    printf("\nBispo\n\n");
    movebispo(5);

    printf("\nTorre\n\n");
    movetorre(5);

    printf("\nRainha\n\n");
    moverainha(8);

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.
    printf("\nCavalo\n\n");
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 2; y++)
        {
            if (y == 0)
            {
                printf("Cima\n");
                continue;
            }
            if (x == 1)
            {
                printf("Direita\n");
                break;
            }
            
        }
        
    }

    return 0;
}
