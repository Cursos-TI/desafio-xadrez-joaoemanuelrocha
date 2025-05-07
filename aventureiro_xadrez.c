#include <stdio.h>

int main() {

    int i;
    int movimento;

    for (int i = 0; i < 1; i++) {
        printf("Digite de 1 a 5, quantas casas a TORRE sera movida! \n");
        scanf("%d", &i);
        printf("A Torre foi movida para a DIREITA %d vezes \n", i);
        if (i > 5){
            printf("Opção inválida! \n");
        }
        // Essa opção é da torre, lógica feita para a torre ser movida para a direita até 5 vezes!
    }

    while (i <= 1) {
        printf("Digite o valor de casas que o BISPO sera movido na diagonal! \n");
        scanf("%d", &i);
        printf("O Bispo foi movido para Cima, direita %d vezes \n", i);
        if(i > 5) {
            printf("Opção inválida! \n");
        }
        // Essa opção é do bispo, lógica feita para o bispo ser movido em diagonal no sentido direito até 5 vezes!
        i++;
    }

    do {
        printf("Digite 1 a 8 para a RAINHA se mover para a esquerda! \n");
        scanf("%d", &i);
        printf("A Rainha foi movida %d casas a esquerda! \n", i);
        if(i > 8) {
            printf("Opção inválida! \n");
        }
        // Essa opção é da rainha, lógica feita para a rainha ser movida para esquerda até 8 vezes! 
        i++;
    } while (i <= 1);

    printf("O cavalo se moveu para: \n");
    while(movimento <= 1) {
        int k = 1;
        while(k <= 1){
            printf("Cima");
            k++;
        }
        printf("\n");
        movimento++;
    }
    // Essa opção foi feita para o cavalo se mover para a frente 

    printf("Movimento em L do cavalo \n");
    for(int i = 1; i <= 1; i++) {

        for(int j = 0; j <= 1; j++){
            printf("Baixo \n");
        }
            printf("Esquerda \n");
    }
    // Essa opção foi feita para o cavalo se mover no formato de um L
}


