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
int ExcluirReserva (int Voo[50][12])
{
    int n,i,j,a,b,c,cpf2;
    a=0;
printf("digite o numero do voo\n");
scanf("%d",&n);

for(i=0; i<50; i++)
    { if (n==Voo[i][0]) {
     a=1+1;
     b=i;
      printf("\nDigite o cpf do passageiro que deseja excluir a reserva\n");
      scanf ("%d",&cpf2);
    }
    }
       for(j=1;j<12;j++)
       {


      if (cpf2==Voo[b][j]) {

       printf("\nO passageiro de cpf %d foi excluido com sucesso do Voo %d",cpf2,n);
      }

       }


 if (a!=2) {
      printf("\nERRO: Codigo 0"); }




}

#endif // FUNCAO_H_INCLUDED
