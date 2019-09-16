#include <stdio.h>
#include <conio.h>
main ()
{int n, i, negativo=0;
	for(i=1; i<=10; i++)
 {
	printf("Digite o valor: ");
	scanf("%d", &n);
	
	if(n < 0)

	{
	negativo++;
	}
}
printf("\nO Total de Negativos : %.1d", negativo);
getche();
}
