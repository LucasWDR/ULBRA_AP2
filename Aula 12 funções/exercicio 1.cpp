#include<stdio.h>

void absoluto(int numero)
{
int valorA;
	if(numero>=0)
	{
	printf("\n o numero absoluto %d=%d",numero,numero);
    }
    else
    {
    	valorA = numero *(-1);
    	printf("\n o numero absoluto de %d=%d",numero,valorA);
	}
}
main()
{
int num,x;

for(x=1;x<=5;x++)
{
	printf("\n digite o %d numero:",x+1);
	scanf("%d",&num);
	
  absoluto(num);
	}	
}
