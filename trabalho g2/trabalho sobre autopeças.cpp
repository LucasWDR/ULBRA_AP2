#include<stdio.h>
#include<string.h>

struct registro{
	
char nome[30];
char marca[30];
float preco;
int quant_estoq;
int min_estoq;	
};

int cadastro(struct registro novoproduto[100], int controle)
{
char resp;

	do{
		printf("\n Cadastro [%d]",controle+1);
		
		printf("\n Nome:");
		gets(novoproduto[controle].nome);
		fflush(stdin);
		
		printf("\n Marca da peca:");
		gets(novoproduto[controle].marca);
		fflush(stdin);
		
		printf("\n o preco:");
		scanf("%f",novoproduto[controle].preco);
		
		printf("\n Estoque:");
		scanf("%d",novoproduto[controle].quant_estoq);
		
		printf("\n Estoque minimo:");
		scanf("%d",novoproduto[controle].min_estoq);
		
		controle++;
		
		printf(" \n Deseja incluir mais algo (S/N) ");
		scanf("%c",&resp);
		
		controle++;
		
	}while(resp == 'S' &&  resp<100);
	
return(controle);
}

void consultar_peca_por_nome(struct registro novoproduto[100],int controle)
{
int i;
char peca[30];

for(i=0; i<controle; i++)
{
if(strcmp(peca,novoproduto[i].nome)==0)
{
	printf("\n Quantidade : %d",novoproduto[i].quant_estoq);
	
	printf("\n Valor da peca:%.2f",novoproduto[i].preco);
	
	printf("\n Estoque minimo  : %d",novoproduto[i].min_estoq);
	
	
}
}
break;	
}
void exibir_peca_doestoque_baixo(struct registro novoproduto[100],int controle)
{
	int i;
	for(i=0;i<controle;i++)
	{
	if(novoproduto[i].quant_estoq<novoproduto[i].min_estoq)
	{
		printf("%s abaixo do estoque minimo.\n",novoproduto[i].nome);
		
		}	
	}
}
void vender_peca(struct registro novoproduto[100],int controle)
{
int i,quantidade;
char peca[30];
fflush(stdin);

printf("\n Qual peca irá vender ?");
gets(peca);

printf("\n Quantidade:");
scanf("%d",&quantidade);

  for (i=0;i<controle;i++)
  {
  	if(strcmp(peca,novoproduto[i].nome)==0)
  	{
  		novoproduto[i].quant_estoq=novoproduto[i].quantidade-quant_estoq;
  		
  		if(novoproduto[i].quantidade<novoproduto[i].min_estoq)
  		
  		printf("%s abaixo do estoque minimo \n",novoproduto[i].nome);
  		
	  }
	  }	
}
main()
{

int tamanho=0,resp;

struct produto novo_produto[100];
do{
	printf(" 1-incluir peca \n 2-consultar por nome \n 3-Exibir pecas com estoque baixo \n 4-Vender \n 5-Sair\n");
	scanf("%d",&resp);
	
	switch(resp)
	{
	case 1: tamanho= incluir_peca(novoproduto,tamanho);
	break;
	
	case 2:
	consultar_peca_por_nome(novoproduto,tamanho);
	break;
	
	case 3:	
	exibir_peca_doestoque_baixo(novoproduto,tamanho);
	
	case 4: 
	vender_peca(novoproduto,tamanho);
	
	case 5:
  	printf("\n Programa ecerrado... ");
  	break;
	}
}while(resp!=5);

getch();

}






