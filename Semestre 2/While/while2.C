#include <stdio.h>

int main () {

    int senha;

    while (senha != 1234) {
    

    printf ("Digite a senha correta\n");
    scanf ("%d", &senha);

    if (senha != 1234) {
        printf ("Senha incorreta, tente novamente\n");
        
    } else {
       printf ("Senha correta, seja bem vindo gostoso (a)\n"); 
    }

    }
    

    getchar();
    return 0;
}