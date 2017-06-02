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
    int cpf,i;

    cpf = (int *) malloc(sizeof(int) * 10);

    for(i = 0; i < 8; i++)
    {
        cpf = (rand() % 9-0)+cpf*10;
    }
    return cpf;
}

int InicializaDados(int Voo[50][12])
{
    int i,j;

    for(i=0; i<50; i++)
    {
        for(j=0; j<11; j++)
        {
            printf("%d ",Voo[i][j]);
        }
        printf("\n\n");
    }
}

int ExcluirReserva(int Voo[50][12])
{
    int n,i,j,a,b,c,cpf2;
    a=0;
    printf("digite o numero do voo\n");
    scanf("%d",&n);

    for(i=0; i<50; i++)
    {
        if (n==Voo[i][0])
        {
            a=1+1;
            b=i;
            printf("\nDigite o cpf do passageiro que deseja excluir a reserva\n");
            scanf ("%d",&cpf2);

            for(j=1; j<12; j++)
            {
                if (cpf2==Voo[b][j])
                {
                    printf("\nO passageiro de cpf %d foi excluido com sucesso do Voo %d",cpf2,n);
                    Voo[b][j]=0;
                }
            }
        }
    }

    if (a!=2)
    {
        printf("\nERRO: Codigo 0");
    }

}
int ImprimirReserva (int Voo[50][12])
{
    int n,i,j,contVaga,contReser,erro;
    erro=1;
    contReser=0;
    contVaga=0;
    printf("digite o numero do voo\n");
    scanf("%d",&n);

    for(i=0; i<50; i++)
    {
        if(n==Voo[i][0])
        {
            erro=0;
            for(j=1; j<11; j++)
            {
                if(Voo[i][j]==0)
                {
                    contVaga++;

                }
                else
                {
                    contReser++;
                }
                printf("A%d: %d\n",j, Voo[i][j]);
            }
            printf("\n\n");
        }

    }

    if(erro==1)
    {

        printf("\nERRO: Codigo 0");
    }else{
        printf("Vagas: %d\nReservas: %d",contVaga,contReser);
    }



}
#endif // FUNCAO_H_INCLUDED
