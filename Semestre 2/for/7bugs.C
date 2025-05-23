#include <stdio.h>

int main() {
    int numVersoes, numbugs, totalbugs = 0;

    printf("Digite o número de versões a serem verificadas: ");
    scanf("%d", &numVersoes);

    for (int i = 1; i <= numVersoes; i++) {
        printf("Digite o número de bugs encontrados na versão %d: ", i);
        scanf("%d", &numbugs);
        totalbugs = totalbugs + numbugs; 
    }

    printf("Total de bugs encontrados em todas as versões: %d\n", totalbugs);

    getchar ();
    return 0;
}
