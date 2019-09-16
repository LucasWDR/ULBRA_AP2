#include<stdio.h>
#include<string.h>

struct cadastro{
char nome[30];
char marca[30];
float preco;
int quant_estoque;
int estoque_minimo;
  };
  
int incluir(struct cadastro peca[100], int controle)
{
char resp;

		printf("\nCadastro de pecas");
		fflush(stdin);
		
		do{
		printf("\nCadastro [%d]", controle+1);
		fflush(stdin);
		
		printf("\nPeca: ");
		gets(peca[controle].nome);
		fflush(stdin);
		
		printf("\nMarca do produto: ");
		gets(peca[controle].marca);
		fflush(stdin);
		
		printf("\nPreco do produto : ");
		scanf("%f", &peca[controle].preco);
		fflush(stdin);
		
		printf("\nQuantidade em estoque: ");
		scanf("%d", &peca[controle].quant_estoque);
		fflush(stdin);
		
		printf("\nEstoque minimo do produto: ");
		scanf("%d", &peca[controle].estoque_minimo);
		fflush(stdin);
		
		controle++;
		
		
		printf("\nDeseja nova inclusao (s/n)? ");
		scanf("%c", &resp);
		fflush(stdin);
		
}while(resp == 's' &&  resp < 100);

return(controle);

}

void consultar(struct cadastro peca[100], int controle, char nome_peca[30])
{
int i;

for(i=0; i<controle; i++)
{
if(strcmp(nome_peca, peca[i].nome)==0)
{
printf("\nMarca: %s", peca[i].marca);

printf("\nPreco: %f", peca[i].preco);

printf("\nQuantidade em estoque: %d", peca[i].quant_estoque);

printf("\nEstoque minimo: %d", peca[i].estoque_minimo);
}
}

}

void exibir_estoque_baixo(struct cadastro peca[100], int controle)
{
int i;

printf("\nPecas com estoque baixo");
fflush(stdin);

for(i=0; i<controle; i++)

{
		if(peca[i].quant_estoque < peca[i].estoque_minimo)
		{
			
		printf("\nPeca: %s", peca[i].nome);
		
		printf("\nMarca: %s", peca[i].marca);
		
		printf("\nQuantidade em estoque: %d", peca[i].quant_estoque);
		
		printf("\nEstoque minimo: %d", peca[i].estoque_minimo);
}
}

}

void vender(struct cadastro peca[100], int controle)
{
char nome_peca[30];
char resp;
int quant_venda, i, result=0;

do{
				
				printf("\nVenda de Pecas");
				fflush(stdin);
				
				printf("\nPeca: ");
				gets(nome_peca);
				fflush(stdin);
				
				printf("\nQuantidade: ");
				scanf("%d", &quant_venda);
				fflush(stdin);

for(i=0; i<controle; i++)
{
if(strcmp(nome_peca, peca[i].nome)==0)
{
result = peca[i].quant_estoque - quant_venda;
peca[i].quant_estoque = result;
if(result < peca[i].estoque_minimo)
{
printf("\nA peca %s ficou com estoque abaixo do minimo!");
}
}
}
printf("\nCompra concluida!");

printf("\nDeseja continuar (s/n)?");

scanf("%c", &resp);

fflush(stdin);

}while(resp == 's');

}


main()
{
int op, quant_itens=0;

char nome_peca[30];

struct cadastro pecas[100];

do{
printf("\nCadastro de pecas: ");
printf("\n1 - incluir \n2 - Consultar peca por nome \n3 - Exibir pecas com estoque baixo");
printf("\n4 - Vender peca \n5 - Sair\n");
scanf("%d", &op);

switch(op)
{
case 1:
	
quant_itens = incluir(pecas, quant_itens);

break;

case 2:
	
		printf("\nConsulta de peca por nome");
		fflush(stdin);
		printf("\nNome da peca: ");
		gets(nome_peca);
		consultar(pecas, quant_itens, nome_peca);
		break;

case 3:
	
exibir_estoque_baixo(pecas, quant_itens);
break;

case 4:
	
vender(pecas, quant_itens);

case 5:
	
printf("\nPrograma encerrado!");
break;
}

 }while(op != 5);


}

