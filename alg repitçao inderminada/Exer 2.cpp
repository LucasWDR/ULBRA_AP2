#include<stdio.h>
#include<conio.h>
main()
{
int num;
	{
	printf("Digite um numero: ");
	scanf("%d", &num);
	}
	{
	do {
		printf("\n%d", num);
		num = num -1;
		}while (num > 0);
	}
}
