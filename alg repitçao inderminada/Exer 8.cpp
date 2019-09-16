#include<stdio.h>
#include<conio.h>
main()
{
int senha, senhacorreta=2016;
		{
		do {
			printf("\nInforme a senha: ");
			scanf("%d", &senha);
			if(senhacorreta != senha)
			{
				printf("\nAcesso invalido");
			}
			else
			{
				printf("\nAcesso permitido");
			}
			}while(senha != senhacorreta);
		}
}
