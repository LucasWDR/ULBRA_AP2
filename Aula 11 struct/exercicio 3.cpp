#include<stdio.h>
#include<string.h>
	struct ficha_pessoal{
					char nome[40];
					char endereco;
					int telefone;
					int idade;
					char email;
					int codigo[15];
					};
int	main(){
	struct ficha_pessoal clientes[40];
	int x,i,opcao;
	char resp,procura;
	
	  printf("\n \n ========Cadastro de clientes=====\n");
	  switch(opcao)
	  case 1
	  printf("incluir \n");
	  case 2
	  printf("alterar dados por codigo \n");
	  case 3
	  printf("Consultar por nome \n");
	  case 4
	  printf("Listar \n");
	  
	  scanf("%d",opcao);
	  
	  return opcao;
	
	for(x=0;x<3;x++)
	{
	
	printf("digite seu nome:[%d]",x);
	gets(clientes[x].nome);
	fflush(stdin);
	
	printf("\n digite seu codigo:");
	scanf("%d",clientes[x].codigo);
	fflush(stdin);
	
	printf("\n endereco:");
	scanf("%c", &clientes[x].endereco);
	fflush(stdin);
	
	printf("\n telefone:");
	scanf("%d",&clientes[x].telefone);
	fflush(stdin);
	
	printf("\n digite seu email:");
	scanf("%c",&clientes[x].email);
	fflush(stdin);
}

  printf("\n \n ========Cadastro de clientes=====\n");
	
