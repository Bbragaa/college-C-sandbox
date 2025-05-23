#include <stdio.h>

int main() {
    float  tempresposta, temprespostatotal = 0, temprespostamedio;
    int numrequisicoes;

    printf("Digite o numero de requisicoes a serem monitoradas: ");
    scanf("%d", &numrequisicoes);

    for (int i = 1; i <= numrequisicoes; i++) {
        printf("Digite o tempo de resposta da requisicao %d: ", i);
        scanf("%f", &tempresposta);
        temprespostatotal = temprespostatotal + tempresposta; 
    }

    temprespostamedio = temprespostatotal/numrequisicoes;
    printf("Tempo medio de resposta: %.2f\n", temprespostamedio);

    getchar ();
    return 0;
}

