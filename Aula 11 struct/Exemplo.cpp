#include<stdio.h>
#include<string.h>
struct registro{
	char nome[50];
	int idade;
	float salario;
	
};
main(){
	float soma=0,media;
	char resp;
	int x,i;
	struct registro funcionario[100];
	for(x=0;x<100;x++)
	{
	printf("\n Nome:");
	gets(funcionario[x].nome);
	
	printf("\n Idade:");
	scanf("%d",&funcionario[x].idade);
	
	printf("\n Salario:");
	scanf("%f",&funcionario[x].salario);
	soma=soma+funcionario[x].salario;
	fflush(stdin);
	printf("\n Deseja incluir outro (S/N)?");
	scanf("%c",&resp);
    fflush(stdin);
	
	if(strchr("Nn",resp))
	{
		printf("\n leitura encerrada");
		break;
	}
}
	if(x==100)

	x=x-1;
	for(i=0;i<=x;i++)
	{
		printf("\n nome[%d]:%s",i,funcionario[i].nome);
	}
	if(x==100)
	media=soma/x;
	else
	media=soma/(x+1);
	printf("\n media:%.2f",media);
	for(i=0;i<=x;i++)
	if(funcionario[i].salario>media)
	printf("\n Nome[%d]:|%s",i,funcionario[i].nome);
	
}
	
	

