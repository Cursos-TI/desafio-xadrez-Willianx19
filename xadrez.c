#include <stdio.h>

//Movimento da peça Bispo com recursivo e loop aninhado;
void recursivo(int bispo)
{
    if(bispo > 0)
    {
    for(int i = 0; i < 1; i++)
    {
    printf("Bispo para cima \n");

    for(int j = 0; j < 2; j++)
    {
    printf("Bispo: para direita \n");
    recursivo(bispo -1);

    }
    }
    }
}

void recursivo2(int torre)
{

}

int main() {

//Variaveis
int movimento = 5;

recursivo(movimento);


    return 0;
}
