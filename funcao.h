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
	int i,cpfnum[10];
	srand(time(NULL));
	for (i = 0; i <= 8; i++) {
	cpfnum[i] = rand() % 9;
	printf("%d",cpfnum[i]);
}

}

int InicializaDados(int x, int *NumeroVoo)
{
int i;
printf("\nInformacao de Voo:",NumeroVoo[i],i);
for(i=0;i<50;i++)
  {
  	printf("\n%d",NumeroVoo[i]);
  	
  }	
}


#endif // FUNCAO_H_INCLUDED
