#include<stdio.h>
#include<conio.h>
main()
{
float sal, mediasal, somasal=0, x=0;
char resp;
	{	
	do {
		printf("Digite o salario: ");
		scanf("%f", &sal);
		printf("Deseja continuar? (S/N)");
		fflush(stdin);
		scanf("%c", &resp);
		somasal = somasal + sal;
		x++;
		}while((resp == 'S')||(resp == 's'));
	mediasal = somasal / x;
	printf("\nMedia salarial: %.2f", mediasal);	
	}
}
