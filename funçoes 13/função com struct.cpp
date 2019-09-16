#include<stdio.h>
struct ficha{
	char nome[50];
	int idade;
};
int lealunos(struct ficha alunos[100],int controle)
{
	char resp;
	do{
		printf(" \n Nome[%d]",controle);
		gets(alunos[controle].nome);
		
		printf("\n Idade:");
		scanf("%d",&alunos[controle].idade);
		controle++;
		fflush(stdin);
		
		printf("\n deseja incluir outro(s/n)?");
		scanf("%c",&resp);
		fflush(stdin);
	}while (resp=='S'|| resp=='s');
	return(controle);
}
main()
{
struct ficha a[100];
int cont=0,op,i;
do{
	printf("\n ========Cadastro de alunos=========");
	printf("\n Escolha uma opcao:");
	printf("\n 1-Incluir \n 2-listar \n 3-sair\n =>");
	scanf("%d",&op);
		fflush(stdin);
		
  switch(op)
  {
  	case 1: cont=lealunos(a,cont);
  			break;
  	case 2:
	  for(i=0;i<cont;i++)
	  {
	  	printf("\n Nome[%d]:%s", i,a[i].nome);
	  	
	  	printf("\n idade:%d",a[i].idade);
			  }	
	case 3:
	      printf("\n Programa encerrado...");
		  break;		  			
  }
}while (op!= 3);	
}
