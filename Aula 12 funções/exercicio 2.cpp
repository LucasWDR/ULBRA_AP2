#include<stdio.h>

int  Maiornumero(int numero1, int numero2)
{

if (numero1>numero2)
{
	printf("\n o maior numero:",numero1);
}	
if (numero1<numero2)
{
	printf("\n o maior numero:",numero2);
}	
if (numero1== numero2)
{
	printf("\n Os numeros sao iguais");
}	

}
 int main()
{
int num1,num2,x;
for(x=0;x<5;x++)
 {

printf("\n Digite o primeiro numero:",x+1);
scanf("%d",&num1);

printf("\n Digite o segundo numero:",x+2);
scanf("%d",&num2);

(Maiornumero(num1,num2);

}	
}
