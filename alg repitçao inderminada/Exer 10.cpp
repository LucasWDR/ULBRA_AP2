#include<stdio.h>
#include<conio.h>
main()
{
float idade, altura, somaltura=0, medialtura=0, cont=0;
char resp;
	{
	do {
	printf("Digite a idade: ");
	scanf("%f", &idade);
	printf("Digite a altura: ");
	scanf("%f", &altura);
		if (idade > 30)
		{
		somaaltura = somaltura + altura;
		cont++;	
		}
	printf("Deseja informar mais dados? (S/N)");
	fflush(stdin);
	scanf("%c", &resp);
		}while((resp == 'S')||(resp == 's'));
	}
medialtura = somaltura / cont;
printf("\nMedia de altura de pessoas com mais de 30 anos: %.2f", medialtura);	
}
