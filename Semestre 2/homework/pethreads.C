#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int N, M;
    int recurso_alocado[10] = {0}; 

    printf("digite o numero de threads: ");
    scanf("%d", &N);

    printf("digite o numero de recursos (maximo 10): ");
    scanf("%d", &M);

    if (M > 10) {
        printf("Numero de recursos invalido.maximo permitido eh 10\n");
        return 1;
    }

   
    srand(time(NULL));

    for (int i = 0; i < N; i++) {
        int recurso = rand() % M; 

       
        if (recurso_alocado[recurso] == 0) {
            printf("Thread %d alocou recurso %d\n", i + 1, recurso);
            recurso_alocado[recurso] = 1; 
          
            int tempo_uso = (rand() % 3) + 1;
            printf("Thread %d usando recurso %d por %d segundos\n", i + 1, recurso, tempo_uso);
            srand(tempo_uso);

            recurso_alocado[recurso] = 0;
            printf("Thread %d liberou recurso %d\n", i + 1, recurso);
        } else {
            printf("Thread %d nao conseguiu alocar o recurso %d, ja esta em uso\n", i + 1, recurso);
        }
    }

    return 0;
}
