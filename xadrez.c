#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

void recursivorainha(int rainha){
    if(rainha > 0){
    printf("Esquerda\n");
    recursivorainha(rainha - 1);

    }
}

void recursivotorre(int torre){
    if(torre > 0){
        printf("Direita\n");
        recursivotorre(torre - 1);
    }
}

void recursivobispo(int bispo) {
    for (int v = bispo; v >= 1; v--) { // movimento vertical decrescente
        for (int h = bispo; h >= 1; h--) { // movimento horizontal decrescente
            if (v == h) { // garante que seja diagonal (mesma quantidade de cima e direita)
                printf("Cima\n");
                printf("Direita\n");
            }
        }
    }
}


int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    int i = 1, numero = 5, movimentocavalo = 1, andarcavalo = 21;
    int quantidaderainha = 8, quantidadetorre = 5, quantidadebispo = 5;

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    printf(" Movimentação do Bispo: \n");
    recursivobispo(quantidadebispo);
    
        printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
       do{
        printf("Digite o número 5 para mover a torre em 5 casas á direita.\n");
        scanf("%d", &numero);
       
        if(numero == 5){
            printf("A movimentação da torre: \n");
            recursivotorre(quantidadetorre);
        }else{
            printf("Você digitou %d\n", numero);
        }
       }while( numero != 5);
      
       printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
       printf("A movimentação da rainha (8 casas para a esquerda):\n");
        recursivorainha(quantidaderainha);

       printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
       do{
       printf("Digite '21' para o cavalo andar duas vezes para cima e uma vez para a direita.\n");
       scanf("%d", &andarcavalo);

       if(andarcavalo == 21){
        printf("Você moveu o cavalo.\n");

        for(int cv = 2; cv >= 1; cv--){
            if(cv == 1){
            printf("Cima\n");
            continue; //Seria printado 2 vezes o "Cima", mas o 'continue' eliminou 1 "Cima".
            }
            printf("Cima\n");
        }
        for(int o = 1; o >= 1; o--){
            printf("Direita\n");}
        break; 
        }
        else{
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
