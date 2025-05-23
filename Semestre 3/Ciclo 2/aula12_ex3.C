#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char name[20];
    char surname[20];
    char space[2] = " ";

    printf("Ola, o seu primeiro nome:\n");
    scanf("%s", name);  
    printf("Digite o seu sobrenome:\n");
    scanf("%s", surname);  

    strcat(name, space);
    strcat(name, surname);

    printf("Bem vindo, %s", name);
    return 0;
}
