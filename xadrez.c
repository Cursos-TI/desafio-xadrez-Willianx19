#include <stdio.h>

//Movimento da peça Bispo com recursivo e loop aninhado;
void recursivo(int bispo)
{
    if(bispo > 0)
    {
    for(int i = 0; i < 1; i++)
    {
    printf("Bispo para cima \n");

    for(int j = 0; j < 1; j++)
    {
    printf("Bispo: para direita \n");
    recursivo(bispo -1);

    }
    }
    }
    }

//Movimento da peça torre com recursivo;
void recursivo2(int torre)
{

    if(torre > 0)
    {
    printf("Torre: para direita \n");
    recursivo2( torre -1);

    }
    }

//Movimento da peça torre com recursivo;
void recursivo3 (int rainha)
{
 if(rainha > 0)
{
    printf("Rainha: para esquerda \n");
    recursivo3(rainha -1);
    }
    }

int main() {

//Variaveis
int movimento = 5;
int movimento2 = 5;
int movimento3 = 8;

recursivo(movimento);
recursivo2(movimento2);
recursivo3(movimento3);


/*
//Peça Cavalo com loops aninhados com multiplas variáveis:
for(int i = 0, j = 3; i < 1 && j > 2; i++, j--)
{
    printf("Cavalo: para direito \n");

for(int cavalo = 0, casas = 4; cavalo < 2 && casas > 2; cavalo++,casas--)
{
    printf("Cavalo: para cima \n");
    }
    }
*/
    return 0;
}
