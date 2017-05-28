#include <stdio.h>
#include <conio.h>
#include "funcao.h"

//Mudar nome depois
int main()
{
  char menu;
  int NumeroVoo[50];
  int i,reserva=1000,assento=1;
  for(i=0;i<50;i++)
  {
  	NumeroVoo[i] = reserva;
	reserva++;
  }
   
  do{
  
  printf("\n\nMenu:\n1 - Inicializar Dados\n2 - Incluir Reserva\n3 - Excluir Reserva\n4 - Imprimir Reserva\n5 - Sair\n");
  menu = getch();
  switch (menu){
  	case '1': InicializaDados(50,NumeroVoo);
	break;
  }
  }while(menu!='5');
}

