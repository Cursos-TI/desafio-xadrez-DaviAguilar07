#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 1, numero = 5, movimentocavalo = 1, andarcavalo = 31;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf("Movimentação ordenada ao bispo (5 casas em diagonal): \n");
        while ( i <= 5)
        {
            printf("Cima e direita\n");
        i++;
        }
        
        printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
       do{
        printf("Digite o número 5 para mover a torre em 5 casas á direita.\n");
        scanf("%d", &numero);
       
        if(numero == 5){
            for(int j = 1; j <= 5; j++)
            printf("Direita\n");
        }else{
            printf("Você digitou %d\n", numero);
        }
       }while( numero != 5);
      
       printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
       printf("A movimentação da rainha (8 casas para a esquerda):\n");
        for(int e = 1; e <= 8; e++){
        printf("Esquerda\n");
       }

       printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
       do{
       printf("Digite '31' para o cavalo andar três vezes para baixo e uma vez para a esquerda.\n");
       scanf("%d", &andarcavalo);

       if(andarcavalo == 31){
        printf("Você moveu o cavalo.\n");

        while(movimentocavalo--){
            for(int m = 1; m <= 3; m++){
                printf("Baixo\n");
            }
            printf("Esquerda\n");
            }
        break;

        }else{
        printf("Você digitou %d, tente novamente.\n", andarcavalo);
       }
    }while(1);
       
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
