#include <stdio.h>

int main() {

//Variaveis
int torre = 1;
int rainha = 1;

//Deixei as estruturas comentada para não rodar tudo de vez

//Peça bispo com a estrutura For:
/*
for(int i = 1; i <= 5; i++)
{
printf("Bispo: para cima \n");
printf("Bispo: para direita \n");
}*/

//Peca Torre com a estrutura While:
/*
while (torre <= 5)
{
printf("Torre: para a direita \n");
torre++;
}*/

//Peça rainha com a estrutura Do While

do
{
printf("Rainha: para esquerda \n");
rainha++;

}while(rainha <= 5);

    return 0;
}
