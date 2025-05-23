#include <stdio.h>

int main() {
    int num1, num2, decision, c, result;
   

    while (decision != 2) {
    
        printf ("quais eh o primeiro numero que deseja fazer operacoes?\n");
        scanf ("%d",&num1);

        printf ("quais eh o segundo numero que deseja fazer operacoes?\n");
        scanf ("%d",&num2);

        printf ("qual tipo de operacao deseja fazer?\n1 - adicao\n2 - subtracao\n3 - multiplicacao\n4 - divisao\n");
        scanf ("%d",&c);

        switch (c)
        {
        case 1:
        result = num1 + num2;
        printf ("seu resultado eh %d\n", result);
            break;
        case 2:
        result = num1 - num2;
        printf ("seu resultado eh %d\n", result);
            break;
        case 3:
        result = num1 * num2;
        printf ("seu resultado eh %d\n", result);
            break;
        case 4:
        result = num1 / num2;
        printf ("seu resultado eh %d\n", result);
            break;
        default:
        printf ("operacao invalida\n");
            break;
        }

        printf("deseja fazer mais contas?\n1-sim\n2-nao\n");
        scanf ("%d", &decision);
    }
    
    return 0;
}