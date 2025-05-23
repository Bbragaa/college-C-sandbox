#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char string[50];
    int result = 0;

    printf("Ola, a sua string:\n");
    fgets (string, 50, stdin);  

    for (int i = 0;string[i] != '\0'; i++) {
        if (string [i] == 'a' || string [i] == 'e' ||
            string [i] == 'i' || string [i] == 'o' || 
            string [i] == 'u' || string [i] == 'A' || 
            string [i] == 'E' || string [i] == 'I' ||
            string [i] == 'O' || string [i] == 'U'){
            result += 1;
        }
    }

    printf ("A sua string tem %d vogais", result);
    return 0;
}
