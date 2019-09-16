#include<stdio.h>
#include<conio.h>
main()
{
float num, cont=1, result=0;
	{
	printf("Digite um numero: ");
	scanf("%f", &num);
		do {
			result = num / 2;
			num = result + 0;
			cont++;
			}while(result >= 1);
	printf("\nResultado divisão: %.2f", result);
	printf("\nQuantidade de divisoes efetuadas: %.2f", cont);
	}
}
