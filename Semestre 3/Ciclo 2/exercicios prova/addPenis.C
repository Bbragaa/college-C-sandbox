#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void addPenis(char *str){
    strcat(str, "penis");
}

int main() {
    char normalString[100] = "Ola, eu sou Artur, amigo de todos!";
    printf ("Antes: %s\n", normalString);
    addPenis(normalString);
    printf ("Depois: %s\n", normalString);
    return 0;
}
