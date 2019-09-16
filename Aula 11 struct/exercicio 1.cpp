
#include<stdio.h>
#include<conio.h>
#include<string.h>
	struct registro{
					char nome[20];
					char endereco;
					int telefone;
					int idade;
					int sexo;
					int titulacao;
					};
	main()
	{
	
	struct registro professores[20];
	int x,cont=0, soma,sexo,media=0;
	

	for(x=0; x<20; x++)
		{
		printf("\n nome:[%d]:",x);
		gets(professores[x].nome);
		fflush(stdin);
		
		printf("\n endereco:");
		scanf("%c", &professores[x].endereco);
		fflush(stdin);
		
		printf("\n idade:");
		scanf("%d",&professores[x].idade);
		fflush(stdin);
		
		printf("\n telefone:");
		scanf("%d",&professores[x].telefone);
		fflush(stdin);
		
		printf("\n sexo (M/F):");
		scanf("%d",&professores[x].sexo);
		fflush(stdin);
		
		printf("\n titulacao:");
		scanf("%c",&professores[x].titulacao);															
		fflush(stdin);
		if(strchr("Mm",sexo))
			{
			cont++;
			}
		soma = soma+professores[x].idade;
		}
			printf("O numero de professores do sexo masculino e:%d", cont);
			
		media= soma/20;
			printf("\n A media de idade dos professores:%.2f",media);
			
		for(x=0; x<20; x++)
			if(professores[x].idade>media)
				printf("\n nome[%d]:%s",x,professores[x].nome);
			
	}

