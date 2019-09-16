#include<stdio.h>
#include<conio.h>
main()
{
int num=0, result=0; 
	{
	printf("Digite um numero: ");
	scanf("%d", &num);
	}
	{
	do {
		result = result + num;
		num = num -1;	
		}while(num >= 0);
	printf("\n%d", result);
	}
}
