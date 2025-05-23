#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name1[20];
    char name2[20];

    printf("Ola, digite o primeiro nome para comparacao:\n");
    scanf("%s", name1);  
    printf("Digite o segundo nome para comparacao:\n");
    scanf("%s", name2);  

    if (strcmp(name1, name2) == 0) {  
        printf("Nomes sao iguais\n");
    } else {
        printf("Nomes sao diferentes\n");
    }

    return 0;
}
