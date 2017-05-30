#include <stdio.h>
#include <conio.h>
#include "funcao.h"
int main()
{
  char menu;
  int Voo[50][12];
  int i,j,cpf;
  for(i=0;i<10;i++)
  {
    Voo[i][0]=1000+i;
  	Voo[i+10][0]=2000+i;
  	Voo[i+20][0]=3000+i;
  	Voo[i+30][0]=4000+i;
  	Voo[i+40][0]=5000+i;
  }

  for(i=0;i<40;i++)
  {
      Voo[i][11]=10;
      for(j=1;j<10;j++)
      {
          cpf = Gerador_CPF();
          if(cpf != cpf){
            Voo[i][j]=cpf;
          }else{
            cpf =  Gerador_CPF();
          }

      }
  }

  do{

  printf("\n\nMenu:\n1 - Inicializar Dados\n2 - Incluir Reserva\n3 - Excluir Reserva\n4 - Imprimir Reserva\n5 - Sair\n");
  menu = getch();
  switch (menu){
  	case '1': InicializaDados(Voo);
	break;
	case '3': ExcluirReserva(Voo);
    break;
  }
  }while(menu!='5');
}

