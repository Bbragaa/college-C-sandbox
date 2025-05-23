#include <stdlib.h>
#include <stdio.h>
#include <math.h>


struct ponto {
    float x;
    float y;
};

int main (){

    float resultado;

    struct ponto ponto1;
    struct ponto ponto2;
    printf ("Qual a coordenada x do ponto 1?\n");
    scanf ("%f",&ponto1.x);

    printf ("Qual a coordenada y do ponto 1?\n");
    scanf ("%f",&ponto1.y);

    printf ("Qual a coordenada x do ponto 2?\n");
    scanf ("%f",&ponto2.x);

    printf ("Qual a coordenada y do ponto 2?\n");
    scanf ("%f",&ponto2.y);


    resultado = sqrt(pow((ponto2.x - ponto1.x),2) + pow((ponto2.y - ponto1.y),2));

    printf ("A distância entre os dois pontos é igual a:\n%0.2f", resultado);



    getchar ();
    return 0;
}