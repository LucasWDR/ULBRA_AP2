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
	struct ficha_pessoal clientes[3];
	int x,i;
	char resp,procura;
	
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
   printf("\n escreva um nome para procurar:%c",procura);
   
   if(procura==clientes[x].nome);
   {
   
  	printf("\n Nome[%d]:%s",x,clientes[x].nome);
  	printf("\n codigo[%d]:%s",x,clientes[x].codigo);
  	printf("\n enedereco[%d]:%s",x,clientes[x].endereco);
  	printf("\n telefone[%d]:%d",x,clientes[x].telefone);
  	printf("\n o email[%d]:%c",x,clientes[x].email);
    else
    printf("\n Cliente nao encontrado");
   }
}
