#include <stdio.h>

void moverTorre(int casas) {
    if (casas > 0) {
        printf("Direita \n");
        moverTorre(casas - 1);
    }
}

void moverRainha(int casas){
    if (casas > 0) {
        printf("Esquerda \n");
        moverRainha(casas - 1);
    }
}

void moverBispo(int casas){
    if (casas > 0) {
        for (int i = 0; i < 1; i++){
        
        for (int j = 0; j < 1; j++) {
            printf("Direita ");
        }
        printf("Cima \n");
    }
        moverBispo(casas - 1);
    }
}

int main() {
    printf("Movimento das Torres \n");
    moverTorre(5);

    printf("Movimentos da Rainha \n");
    moverRainha(8);

    printf("Movimento do Bispo \n");
    moverBispo(5);

    printf("Movimento do Cavalo \n");
    for (int i = 0, j = 1; i < j; i++, j--) {

        for (int i = 0, k = 2; i < k; i++, j--){
            printf("Cima \n");
        }
        printf("Direita \n");
    }

    return 0;
}