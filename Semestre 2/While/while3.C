#include <stdio.h>

int main() {

    int senha;
    int tentativas = 0;

    while (tentativas < 3) {

        printf("Digite a senha correta\n");
        scanf("%d", &senha);

        if (senha == 1234) {
            printf("Senha correta, seja bem-vindo(a) gostoso(a)\n");
            break;
        } else {
            tentativas++;
            printf("Senha incorreta, tente novamente\n");
        }
    }

    if (tentativas == 3) {
        printf("Você errou a senha 3 vezes. Programa encerrado.\n");
    }

    getchar();
    return 0;
}
