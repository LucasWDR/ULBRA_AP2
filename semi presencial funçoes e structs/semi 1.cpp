#include<stdio.h>
#include<stri>
struct registro{
int cod;
int idade;
char nome[20];
char endereco[20];
int telefone;
char email[20];
};

int cadastro(struct registro clientes[40], int controle)
{
char resp;

     do{
		printf("\nCadastro [%d]", controle+1);
		
		printf("\nCodigo: ");
		scanf("%d", &clientes[controle].cod);
		
		printf("\nNome: ");
		gets(clientes[controle].nome);
		fflush(stdin);
	    
	    printf(" \n Idade:");
	    scanf("%d", &clientes[controle].idade);
	    
		printf("\nEndereco: ");
		gets(clientes[controle].endereco);
		fflush(stdin);
		
		printf("\nTelefone: ");
		scanf("%d", &clientes[controle].telefone);
		
		printf("\nEmail: ");
		gets(clientes[controle].email);
		fflush(stdin);
		
		controle++;
		
		printf("\nDeseja nova inclusao (S/N)? ");
		scanf("%c", &resp);
		fflush(stdin);
		
    }while(resp == 'S' || resp == 's');

return(controle);
}

void alteracao(struct registro clientes[40], int x, int quant)
{
int i;

for(i=0; i<quant; i++)
{
if(i == x)
  {
	printf("\nAlteracao cliente [%d]", x+1);
	
	printf("\nNome: ");
	gets(clientes[i].nome);
	fflush(stdin);
	
	printf("\nEndereco: ");
	gets(clientes[i].endereco);
	fflush(stdin);
	
	printf("\nTelefone: ");
	scanf("%d", &clientes[i].telefone);
	
	printf("\nEmail: ");
	gets(clientes[i].email);
	fflush(stdin);
	
	printf("\nAlterado com sucesso!");
 }
}

}
main()
{

int i, x=0,y=0, op, quantidade=0, codigo=0;
char nome[20];
struct registro c[40];

do{
printf("\nCadastro de Clientes: ");

printf("\n  1- Incluir \n 2- Alterar dados por codigo \n  3- Consulta por nome \n 4 -Listar \n5 -Sair");
scanf("%d", &op);

switch(op)
{
case 1:
quantidade = cadastro(c, quantidade);
printf("\nNumero de clientes cadastrados = %d", quantidade);
break;

case 2:
printf("Digite o codigo: ");
scanf("%d", &codigo);

for(i=0; i<quantidade; i++)
{
if(codigo == c[i].cod)
{
x = i;	
alteracao (c,x, quantidade);
}
}
break;

case 3:
  printf("Digite o nome da pessoa: ");
  gets(nome);
  fflush(stdin);
  
for(i=0; i<quantidade; i++)
{
if(strcmp(nome,c[i].nome)==0)
{
	printf("\n Consultando os dados %s",nome);
	
	 printf(" \n Código:%s",c[i].cod);
   
   printf("\n Idade:%s",c[i].idade);
   
   printf("\n Email:%s",c[i].email);
   
   printf("\n Endereço:%s",c[i].endereco);
   
   printf("\n Telefone [%d]:%d",c[i].telefone);
}
}
break;
case 4:

	
	printf("\n -----listagem de Dados-------- ");
	
  for(i=0;i<quantidade;i++)
  {
   printf(" \n Nome[%d]:%s",i,c[i].nome);
   
   printf(" \n Código[%d]:%s",i,c[i].cod);
   
   printf("\n Idade[%d]:%s",i,c[i].idade);
   
   printf("\n Email[%d]:%s",i,c[i].email);
   
   printf("\n Endereço[%d]:%s",i,c[i].endereco);
   
   printf("\n Telefone [%d]:%s",i,c[i].telefone);
  }
  case 5:
  	printf("\n Programa ecerrado... ");
  	break;
}
}while (op != 5);
 
}

