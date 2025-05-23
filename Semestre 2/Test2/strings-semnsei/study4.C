#include <stdio.h>
#include <string.h>

int main() {
    // Definindo o status das peças como strings
    char *peca1 = "Disponível";
    char *peca2 = "Indisponível";
    char *peca3 = "Disponível";
    char *peca4 = "Indisponível";
    char *peca5 = "Disponível";

    int escolha;
   
    // Pedindo ao usuário para escolher uma peça de 1 a 5
    printf("Digite o número da peça (1 a 5) que você quer verificar: ");
    scanf("%d", &escolha);

    // Usando switch case para verificar o status da peça escolhida
    switch (escolha) {
        case 1:
            printf("O status da peça 1 é: %s.\n", peca1);
            break;
        case 2:
            printf("O status da peça 2 é: %s.\n", peca2);
            break;
        case 3:
            printf("O status da peça 3 é: %s.\n", peca3);
            break;
        case 4:
            printf("O status da peça 4 é: %s.\n", peca4);
            break;
        case 5:
            printf("O status da peça 5 é: %s.\n", peca5);
            break;
        default:
            printf("Opção inválida! Escolha um número entre 1 e 5.\n");
            break;
    }

    return 0;
}
