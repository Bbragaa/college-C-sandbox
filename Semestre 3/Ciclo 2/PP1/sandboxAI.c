#include <stdio.h>
#include <string.h>  // Para usar a função strcmp

int main() {
    int nAlunos;
    int i;
    int encontrado = 0;
    char alunos[50][30];  // Array para 50 alunos com nomes de até 30 caracteres
    char nomeBusca[30];   // String para o nome a ser buscado
    
    printf("Digite o numero de alunos\n");
    scanf("%d", &nAlunos);
    
    // Verifica se o número de alunos é válido
    if (nAlunos <= 0 || nAlunos > 50) {
        printf("Numero invalido de alunos\n");
        return 1;
    }
    
    // Leitura dos nomes dos alunos
    for (i = 0; i < nAlunos; i++) {
        printf("Digite o nome do aluno %d\n", i+1);
        scanf("%s", alunos[i]);  // alunos[i] já é um ponteiro para o primeiro caractere
    }
    
    // Leitura do nome a ser buscado
    printf("Agora, digite o nome do aluno a ser buscado\n");
    scanf("%s", nomeBusca);  // nomeBusca já é um ponteiro para o primeiro caractere
    
    // Busca o aluno pelo nome
    for (i = 0; i < nAlunos; i++) {
        // Compara as strings usando strcmp
        if (strcmp(nomeBusca, alunos[i]) == 0) {
            printf("Aluno encontrado na posicao %d\n", i+1);
            encontrado = 1;
            break;  // Sai do loop após encontrar
        }
    }
    
    // Se não encontrou nenhum aluno
    if (!encontrado) {
        printf("Aluno nao encontrado\n");
    }
    
    return 0;
}