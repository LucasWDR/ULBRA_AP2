#include<stdio.h>
#include<conio.h>
main()
{
int cor;
		{
		printf("\n1 - Azul \n2 - Preto \n3 - Rosa \n4 - Vermelho");
		printf("\nEscolha uma cor: ");
		scanf("%d", &cor);
		if((cor < 1)||(cor > 4))
		{
			do {
			printf("ERRO Informe um novo valor");
			scanf("%d", &cor);
			}while((cor < 1)||(cor > 4));	
		}
		}
printf("\nCor escolhida com sucesso!");
}

