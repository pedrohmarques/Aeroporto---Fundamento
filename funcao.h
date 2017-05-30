#ifndef FUNCAO_H_INCLUDED
#define FUNCAO_H_INCLUDED
#include <time.h>

//  Aqui irão ficar nossas funções
/* EXEMPLO:
int Reserva()
{
    int numeroVoo;

    return 0;
}*/

int Gerador_CPF()
{
    int i,cpfnum;
    srand(time(NULL));
    cpfnum =0;
    for (i = 0; i < 8; i++)
    {
        cpfnum = (rand() % 9)+cpfnum*10;
    }
    return cpfnum;
}

int InicializaDados(int Voo[50][12])
{
    int i,j;

    for(i=0; i<50; i++)
    {
    //printf("\nInformacao de Voo: %d\n",Voo[i][0]);
       for(j=0;j<12;j++)
       {
          printf("%d ",Voo[i][j]);
       }
       printf("\n\n");
    }
}


#endif // FUNCAO_H_INCLUDED
