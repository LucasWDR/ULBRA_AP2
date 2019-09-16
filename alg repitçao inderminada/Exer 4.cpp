#include<stdio.h>
#include<conio.h>
main()
{
float N1, N2, calculo;
	{
	do {
		printf("Digite um numero: ");
		scanf("%f", &N1);
	
		}while(N1 < 0);
	do {
		printf("Digite outro numero: ");
		scanf("%f", &N2);
		}while(N2 > N1);
	}
calculo = N1 / N2;
printf("\nPrimeiro numero divido pelo segundo = %.2f", calculo);
}
