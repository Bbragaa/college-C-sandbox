#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Produto {
    char nome [30];
    int preco;
    int NoEstoque;
    int ativo;
};


int main () {
    int option = 10;
    struct Produto estoque[5];
    int produtos = 0;

   

    while (option != 1) {
        printf ("Ola! O que deseja fazer?\n1 - Sair\n2 - Cadastrar produto\n3 - Conferir lista de produtos\n4 - Modificar a quantidade de um produto em estoque");
        scanf ("%d", &option);
        char nome[30];

        switch (option){
            case 1:
            printf ("Saindo do sistema...");
            break;
            case 2:
            if (produtos = 5){  
                printf ("O estoque esta cheio!");
            } else {
            
            printf ("Qual o nome do produto à ser adicionado?");
            fgets(nome, 30, stdin);
            
            }
            break;
            default:
            printf("Opcao invalida!");
            break;
        }
    }
    
    return 0;
};